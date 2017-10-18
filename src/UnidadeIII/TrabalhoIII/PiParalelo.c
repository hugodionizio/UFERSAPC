#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>
#include <math.h>

#define f(x) ((double)(4.0/(1.0+x*x)))
#define pi ((double)(4.0*atan(1.0)))

void startup(void);
int solicit(void);
void collect(double sum);

void coleta(double sum) {
    double err;

    err = sum - pi;
    printf("Soma, erro = %7.5f, %10e\n", sum, err);
}

int main(int argc, char **argv) {
    double sum, w;
    int i, j, N, rank, size;
    int somas[4], subSomas[2], inicio[2], fim[2];
    MPI_Status status;

    N = solicita();

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    while (N > 0) {
        w = 1.0 / (double) N;
        sum = 0.0;

        if (rank == 0) {
            somas[0] = 1;
            somas[1] = N/4;
            
            somas[2] = N/4 + 1;
            somas[3] = 3*N/4;
            
            somas[4] = 3*N/4+1;
            somas[5] = 4*N/5;
            
            somas[6] = 4*N/5+1;
            somas[7] = N;
            
//            for(j = 0; j < 8; j++)
//                printf("%d ", somas[j]);
            
            for (i = 1; i <= N; i++) {
//                if(i == 1) {
//                    printf("%d", rank);
//                }
                
                sum = sum + f(((double) i - 0.5) * w);
            }
            sum = sum * w;                        

            MPI_Scatter(&somas, 2, MPI_DOUBLE, &subSomas, 2, MPI_DOUBLE, 0, MPI_COMM_WORLD);
        }

        coleta(sum);
        N = solicita();
    }

    MPI_Finalize();


    return (0);
}

int solicita(void) {
    int N;

    printf("Informe o número de intervalos para a aproximação (0 para terminar)\n");
    scanf("%d", &N);

    return (N);
}
