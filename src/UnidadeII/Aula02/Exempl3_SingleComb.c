// Código 3 - Adição de Vetores usando construções combinadas.

#include <omp.h>
#include <stdio.h>
#define VAR 1
#define N 10
int main() {
	int i, n, var;
	float a[N], b[N], c[N];
	for (i = 0; i < N; i++)
		a[i] = b[i] = 1 * 1.0;
	n = N;
	var = VAR;	
	#pragma omp parallel for shared (a, b, c) private(i) schedule (static, var)
		for(i = 0; i<n; i++)
			c[i] = a[i] + b[i];
	for (i = 0; i < n; i++)
		printf("%f \n", c[i]);

	return(0);
}
