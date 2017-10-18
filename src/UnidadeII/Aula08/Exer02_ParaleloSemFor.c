// Código 2 - Programa Paralelo sem For
#include <omp.h>
#include <stdio.h>

#define N 10
#define A 2
#define Y 5

int mainParaleloSemFor() {

    int i, n, a, y;
    int x[N], z[N];

    n = N;
    a = A;
    y = Y;

    for (i = 0; i < n; i++) {
        x[i] = i;
        printf("%d ", x[i]);
    }
    printf("\n");

    omp_set_num_threads(n);
    #pragma omp parallel private(i) shared(z, x, a, y)
    {
        i = omp_get_thread_num();
        z[i] = a * x[i] + y;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", z[i]);
    }
    printf("\n");

    return (0);
}