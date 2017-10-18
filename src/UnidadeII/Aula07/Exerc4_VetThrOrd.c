// Código 4 - Vetor com threads ordenado

#include <omp.h>
#include <stdio.h>

#define N 10

int mainVetThOrd() {
	int i, tid, n, chunk;
	int v[N];

	for (i = 0; i < N; i++)
		v[i] = i;

	n = N;
//        omp_set_num_threads(n);
	#pragma omp paralell for default(shared) private(i) schedule(static, chunk) ORDER
	{
		for (i = 0; i < n; i++)
			printf("%d, %d\n", i, v[i]);
	}

	return (0);
}
