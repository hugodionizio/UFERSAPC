/* 
 * File:   exerc5_MediaVetor.c
 * Author: Admin
 *
 * Created on 27 de Setembro de 2017, 04:34
 */

#include <stdio.h>
#include <stdlib.h>

#define N 10

/*
 * 
 */
int main(int argc, char** argv) {
    int rank, size;
    int v[N];

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    if (rank == 0) {
        printf("Estou no mestre!");
    }
    if (rank != 0) {
        printf("Estou em no slave %d", rank);
    }

    MPI_Finalize();

    return (EXIT_SUCCESS);
}

