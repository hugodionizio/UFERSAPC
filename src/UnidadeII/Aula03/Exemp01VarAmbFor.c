// Código 1 - Variáveis de Ambiente com laço
#include <omp.h>
#include <stdio.h>

#define N 10

int mainVarAmbFor() {
	int i;
	float *a, *b, *c, tmp;
        
	int n = N;
	#pragma omp parallel for private(i) default(shared)
		for (i = 0; i < n; i++) {
			tmp = a[i] / b[i];
			c[i] = tmp * tmp;
		}
	

	return (0);
}
