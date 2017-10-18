// Código 1 - Variáveis de Ambiente com laço
#include <omp.h>
#include <stdio.h>

#define N 10
#define VAR 1

int mainVarAmbFor() {
    int i, n, var;
    float a[N], b[N], c[N], aux, tmp;

    for (i = 0; i < N; i++) {
        aux = i + 1.0f;
        a[i] = 2.0f * aux*aux;
        b[i] = aux;
        printf("(%d,", a[i]);
        printf("%d) ", b[i]);
    }
    printf("\n");

    n = N;
    var = VAR;
    #pragma omp parallel for private(i) shared(a, b, c) schedule(static, var)
      for (i = 0; i < n; i++)
            c[i] = a[i] / b[i];
    
    for (i = 0; i < N; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return (0);
}
