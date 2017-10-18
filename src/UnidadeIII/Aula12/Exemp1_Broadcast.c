#include <stdio.h>
#include <mpi.h>
#include <string.h>

#define N 9

int main(int argc, char **argv) {
    int rank, tam, tag=99;
    char msg[20];
    MPI_Status status;
    
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &tam);
    if(rank == 0) {
        strcpy(msg, "Olá Mundo!\n");
        MPI_Bcast(msg, 20, MPI_CHAR, 0, MPI_COMM_WORLD);
    } else {
        MPI_Bcast(msg, 20, MPI_CHAR, 0, MPI_COMM_WORLD);
        printf("Processo %d msg = ", rank);
        printf(msg);
    }
    MPI_Finalize();
    
    return (0);
}
