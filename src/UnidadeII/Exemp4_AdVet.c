// Código 4 - Adição de Vetores
#include <omp.h>
#include <stdio.h>
#define VAR 100
#define N 1000
#define N_THREADS 4

int mainAdicaoVetores() {
    int chunk, i, n, var;
    float a[N], b[N], c[N];
    for (i = 0; i < N; i++)
        a[i] = b[i] = i * 1.0;
    n = N;
    var = VAR;
    chunk = N / N_THREADS;
    #pragma omp parallel shared (a, b, c) private(i)
        {
    #pragma omp for schedule(dynamic, chunk) nowait
            for (i = 0; i < n; i++)
                c[i] = a[i] + b[i];
        }

    int j;
    for (j = 0; j < N; j++) {
        printf("O resultado final é [%d] %f \n", j, c[j]);
    }

    return (0);
}
