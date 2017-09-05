// Exercício 1
#include <omp.h>
#include <stdio.h>

//#define OMP_NUM_THREADS 5
//int limite = 5;

int main5Threads() {
    int nthreads, tid;
    int inicio = 0;
    //omp_set_num_threads(5);
    //    #pragma omp parallel private(nthreads, tid) shared(inicio)
    omp_set_num_threads(5);
#pragma omp parallel shared(tid)
    {
        tid = omp_get_thread_num();
        printf("%d thread\n", tid);
        //
        //        printf("(%dª thread)\n", inicio);
        //        inicio++;
    }

    return (0);
}
