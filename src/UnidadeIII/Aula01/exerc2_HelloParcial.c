/*
 * exerc2_HelloParcial.c
 *
 *  Created on: 25 de set de 2017
 *      Author: Hugo Dionizio Santos
 */

#include <stdio.h>
#include <mpi.h>

int main(int argc, char **argv) {
	char helloWorld[] = "Hello World";
	int rank, size;

	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	if(rank % 2 == 0 && rank > 0) {

		printf("World (%d)\n", rank);
	}

	if (rank % 2 != 0 && rank > 0) {
		printf("Hello (%d)\n", rank);
	}

	MPI_Finalize();

	return (0);
}
