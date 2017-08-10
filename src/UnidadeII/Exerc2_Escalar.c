// Exercício 2
#include <omp.h>
#include <stdio.h>
#define N 10

int mainVetorEscalar() {
    int v[N], tid, produto, i, escalar = 4, chunk = 10;
    
    for(i = 0; i < N; i++) {
        v[i] = i;
        printf("%d ", i);
    }
    printf("\n");
    
    #pragma omp parallel for default(shared) private(i) schedule(static, chunk)
        for (i = 0; i < N; i++) {
            v[i] = escalar*v[i];
        }
    
    for (i = 0; i < N; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

}
