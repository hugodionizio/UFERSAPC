#include <omp.h>
#include <stdio.h>

int mainVarAmbDouble() {
	double area, pi, x;
	int i, n;

	area = 0.0;
	#pragma omp parallel
	{ 
		#pragma omp for
			for (i = 0; i < n; i++) {
				x = (i + 0.5)/n;
				area += 4.0/(1.0 + x*x);
			}
		pi = area / n;
	}

	return (0);
}
