/*
 * exerc3_MenorValor.c
 *
 *  Created on: 25 de set de 2017
 *      Author: Hugo Dionizio SAntos
 */
#include <stdio.h>
#include <mpi.h>

int main(int argc, char **argv) {
	int rank, size;

	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);

	if(rank == 0) {
		printf("Estou no mestre!");
	}
	if (rank != 0) {
		printf("Estou em no slave %d", rank);
	}

	MPI_Finalize();

	return (0);
}



