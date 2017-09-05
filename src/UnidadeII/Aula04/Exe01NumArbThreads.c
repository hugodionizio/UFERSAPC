#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 10
#define N 9

int mainNumArbThreads() {
	int i, j, myid = M, num, n;
	float a[N][M];

	n = N;
	num = M;

	printf("Número de threads: %d\n", num);

	omp_set_num_threads(num);
	#pragma omp parallel private (i, myid) shared(a,n)
	{
		myid = omp_get_thread_num();
		for (i = 0; i < n; i++) {
			a[i][myid] = 1.0;
			printf("%d\n", myid);
		}
	}

	for(i = 0; i < n; i++) {
		for(j = 0; j < N; j++) {
			printf("%f, ", a[i][myid]);
		}
		printf("\n");
	}

	return (0);
}
