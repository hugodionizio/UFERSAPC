// Código 3 - Busca em Vetor com threads

#include <omp.h>
#include <stdio.h>
#define N 10

int main() {
	int i, n, pos, chave = 7, chunk;
	int v[N];
	for (i = 0; i < N; i++)
		v[i] = i;
	n = N;

	#pragma omp single
		printf("omp single: %d \n\n\n\n", omp_get_thread_num());

	#pragma omp sections nowait
	{
		#pragma omp section
		{
		for (i = 0; i < n/2; i++)
			if (chave == v[i])
				pos = i; 
		}

		#pragma omp section
		{
		for (i = n/2; i < n; i++)
			if (chave == v[i])
				pos = i;
		}
	}

	printf("A posição é %d\n", pos);

	return (0);
}
