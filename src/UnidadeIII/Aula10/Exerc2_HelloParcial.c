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
	char arg2[] = "Hello";
	char arg1[] = "World";
	char argx[50];

	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	
	if(rank == 0) {
		MPI_Send(&arg1, sizeof(arg1), MPI_CHAR, 1, 0, MPI_COMM_WORLD);
		MPI_Send(&arg2, sizeof(arg2), MPI_CHAR, 1, 1, MPI_COMM_WORLD);
	}

	if(rank == 1) {
		MPI_Recv(&arg1, sizeof(arg1), MPI_CHAR, 0, 1, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
		MPI_Recv(&arg2, sizeof(arg2), MPI_CHAR, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
	}

	MPI_Finalize();

	printf("\n%s %s (%d)\n", arg1, arg2, rank);

	return (0);
}
