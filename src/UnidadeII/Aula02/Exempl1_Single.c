// Código 2 - Exemplo de uso diretiva single

#include <omp.h>
#include <stdio.h>
#define N 50
int main() {
	int i, n, chunk;
	float a[N], b[N], c[N];
	for (i = 0; i < N; i++)
		a[i] = b[i] = 1 * 1.0;
	n = N;

	#pragma omp single
		printf("omp single: %d \n\n\n", omp_get_thread_num());
	#pragma omp sections nowait
	{
		#pragma omp section
		{
		for (i=0; i<n/2; i++)
			c[i] = a[i] + b[i];
		printf("omp section 1: %d \n\n\n", omp_get_thread_num());
		}
		#pragma omp section
		{
		for (i=n/2; i<n; i++)
			c[i] = a[i] + b[i];
		printf("omp section 2: %d \n\n\n", omp_get_thread_num());
		}
	}
	for (i=0; i<n; i=i+5)
		printf("%f	%f	%f	%f	%f\n", c[i], c[i+1], c[i+2], c[i+3], c[i+4]);

	return(0);
}
