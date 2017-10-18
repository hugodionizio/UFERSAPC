/*
 * exerc3_MenorValor.c
 *
 *  Created on: 25 de set de 2017
 *      Author: Hugo Dionizio SAntos
 */
#include <stdio.h>
#include <mpi.h>

#define N 9

int main(int argc, char **argv) {
    int rank, size;
    int v[N];
    int i;
    int menor = 0;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    for (i = 0; i < size; i++) {
        if (rank == 0) {
            v[i] = N - i;
            MPI_Send(&v[i], sizeof (v[i]), MPI_CHAR, 1, 0, MPI_COMM_WORLD);
//            MPI_Send(&v[i], sizeof (v[i]), MPI_CHAR, 1, 1, MPI_COMM_WORLD);
        }

        if (rank == 1) {
            MPI_Recv(&arg1, sizeof (arg1), MPI_CHAR, 0, 1, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
            MPI_Recv(&arg2, sizeof (arg2), MPI_CHAR, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        }
        
        if (rank == 2) {
            MPI_Recv(&arg1, sizeof (arg1), MPI_CHAR, 0, 1, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
            MPI_Recv(&arg2, sizeof (arg2), MPI_CHAR, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        }
        
        if (rank == 3) {
            MPI_Recv(&arg1, sizeof (arg1), MPI_CHAR, 0, 1, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
            MPI_Recv(&arg2, sizeof (arg2), MPI_CHAR, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        }
    }
    MPI_Finalize();

    return (0);
}



