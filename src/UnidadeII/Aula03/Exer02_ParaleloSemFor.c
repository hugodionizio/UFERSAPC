// Código 2 - Programa Paralelo sem For
#include <omp.h>
#include <stdio.h>

#define N 10

int mainParaleloSemFor() {
    
    int i, n, a, y;    
    int x[N], z[N];
    
    n = N;
    
    for (i = 0; i < n; i++)
        z[i] = a * x[i] + y;
    
    return (0);
}