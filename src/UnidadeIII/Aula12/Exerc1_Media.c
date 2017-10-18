#include <stdio.h>
#include <mpi.h>

#define N 9

int main(int argc, char **argv) {
    int rank, size, n;
    float v[N], medias[N / 3], mediaTotal;
    int i;

    n = N;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    for (i = 0; i < n; i++) {
        if (rank == 0) {
            v[i] = (3) * 1.0f;
        }
        if (rank == 1) {
            if (i < n / 3) {
                medias[0] += v[i];
            }
        }
        if (rank == 2) {
            if (i >= n/3 && i < 2 * n / 3) {
                medias[1] += v[i];
            }
        }
        if (rank == 3) {
            if (i >= 2 * n / 3 && i < n) {
                medias[2] += v[i];
            }
        }
    }
    MPI_Finalize();

    if (i == n && rank == 0) {
        mediaTotal = (medias[0] + medias[1] + medias[2]) / 2;
        printf("\n%f\n", mediaTotal);
    }

    return (0);
}
