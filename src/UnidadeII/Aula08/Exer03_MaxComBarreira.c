// Código 3 - Maximização de código com operações de barreira explícitas
#include <omp.h>
#include <stdio.h>

#define N 10

int mainMaxComBarreira() {
    int j, n, f;
    int a[N], b[N], c[N], d[N], e[N], z[N];

    n = N;

    #pragma omp parallel
        {
        #pragma omp for
            for (j = 0; j < n; j++) {
                a[j] = b[j] + c[j];
            }
        #pragma omp for
            for (j = 0; j < n; j++) {
                d[j] = e[j] * f;
            }
        #pragma omp for
        for (j = 0; j < n; j++) {
            z[j] = (a[j] + a[j + 1] * 0.5);
        }
    }

    return (0);
}
