// Código 1 = Adição de Vetores
#include <omp.h>
#include <stdio.h>
#define N 50

int mainAdVet() {
    int i, n, chunk;
    float a[N], b[N], c[N];
    for (i = 0; i < N; i++) {
        a[i] = b[i] = i * 1.0;        
    }
    n = N;
    
    #pragma omp parallel shared (a, b, c, n) private(i)
    {
        #pragma omp sections nowait
        {
            #pragma omp section
            {
            for  (i = 0; i < n / 2; i++)
                c[i] = a[i] + b[i];
            printf("%d \n\n\n", omp_get_thread_num());
            }
            #pragma omp section
            {
            for (i = n / 2; i < n; i++)
                c[i] = a[i] + b[i];
            printf("%d \n\n\n", omp_get_thread_num());
            }
        }
    }
    for (i = 0; i < n; i = i + 5)
        printf("%f  %f  %f  %f  %f \n", c[i], c[i+1], c[i+2], c[i+3], c[i+4]);
    
    return (0);
}