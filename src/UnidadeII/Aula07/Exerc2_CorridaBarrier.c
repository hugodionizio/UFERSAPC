// Código 2 - Corrida de threads com Barrier

#include <omp.h>
#include <time.h>
#include <stdio.h>
#define N 10

int mainCorridaBarrier() {
	int i, n, chunk;

	#pragma omp parallel
		printf("omp single: %d \n\n\n\n");
	#pragma omp sections nowait
	{
		#pragma omp section
		{
		}

		#pragma omp section
		{
		}
	}

	return (0);
}
