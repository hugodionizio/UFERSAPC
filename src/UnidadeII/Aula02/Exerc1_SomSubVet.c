// Código 1 - Soma e Subtração de dois vetores simultaneamente


#include <omp.h>
#include <stdio.h>

#define N 10

int mainSomSubVet() {
	int i, j, n, chunk;
	int A[N], B[N], C[N], D[N];

	for(i = 0; i < N; i++) {
		A[i] = B[i] = i;
		C[i] = D[i] = 0;
	}
	n = N;

	#pragma omp single
		printf("omp single: %d \n\n\n\n", omp_get_thread_num());
	#pragma omp sections nowait
	{
		#pragma omp section
		{
			for (i=0; i<n/2; i++)
				C[i] = A[i] + B[i];
			
			for (j=0; j<n/2; j++)
				D[j] = A[j] - B[j];
			
		}
		#pragma omp section
		{
			for (i = n/2; i < n; i++)
				C[i] = A[i] + B[i];
			
			for (j = n/2; j < n; j++)
				D[j] = A[j] - B[j];
			
		}
	}
	for (i = 0; i < n; i++)
		printf("%d	%d	%d	%d\n", A[i], B[i], C[i], D[i]); 

	return(0);
}
