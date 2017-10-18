#include <stdio.h>
#include <mpi.h>

int main(int argc, char **argv) {
    int rank;
    int tam;
    
    MPI_Init(&argc, &argv);
        MPI_Comm_rank(MPI_COMM_WORLD, &rank);
        MPI_Comm_size(MPI_COMM_WORLD, &tam);    
        printf("Olá Mundo, sou o processo %d de %d", tam);
    MPI_Finalize();
    
    return(0);    
}