// Código 1 - Multiplicação de vetoree e maior elemento
#include <omp.h>
#include <stdio.h>

#define N 12
#define W 3

int main4Threads() {
	int i, j, k, l, chunk;
	int v[N], maior;
	int n, w;

	for (int i = 0; i < N; i++) {
		v[i] = i;
		printf("%d ", i);
	}
	printf("\n");

	n = N;
	w = W;
	
	maior = v[0];

	#pragma omp parallel private(i)	default(shared)
	{
		omp_set_num_threads(4);
		#pragma omp sections nowait
		{
			#pragma omp section
			for (i = 0; i < n/4; i++) {
				if(maior < v[i])
					maior = v[i];
				v[i] = w*v[i];
			}

			#pragma omp section
			for (j = n/4; j < 2*n/4; j++) {
				if (maior < v[j])
					maior = v[j];
				v[j] = w*v[j];
			}


			#pragma omp section
			for (k = 2*n/4; k < 3*n/4; k++) {
				if (maior < v[k])
					maior = v[k];
				v[k] = w*v[k];
			}


			#pragma omp section
			for (l = 3*n/4; l < n; l++) {
				if (maior < v[l])
					maior = v[l];
				v[l] = w*v[l];
			}
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", v[i]);
	}
	printf("\n");

	printf("O maior é %d\n", maior);

	return (0);
}
