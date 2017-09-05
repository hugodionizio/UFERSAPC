// Código 2 - HelloWorld.c Para Compilar gcc nome.c -o nome -fopenmp
#include <omp.h>
#include <stdio.h>

int mainHelloWorld() {
    int nthreads, tid;
    
    #pragma omp parallel private(nthreads, tid)
    {
        tid = omp_get_thread_num();
        printf("A Thread %d diz Oi Mundo \n", tid);
        if (tid == 0) {
            nthreads = omp_get_num_threads();
            printf("O número de Threads é %d\n", nthreads);
        }
    }
    
    return (0);
}
