#include <stdio.h>
#include <mpi.h>

int main(int argc, char **argv) {
    int a[100], b[25];
    int rank, tam, i;
    
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &tam);
    
    for (i = 0; i < 25; i++) {
        b[i] = ((i + 1) * (rank + 1));
        printf("(%d, %d) ", i, b[i]);
    }
    printf("\n");
    MPI_Gather(b, 25, MPI_REAL, a, 25, MPI_REAL, 0, MPI_COMM_WORLD);
    MPI_Finalize();
    
    return (0);
}
