// Código 1 - Buscar um elemento em partes de um vetor

#include <stdio.h>
#include <mpi.h>

#define N 16
#define TAM 4

int busca(int *v, int x, int tam) {
	int i, pos = -1;
	
	for(i = 0; i < tam; i++) {
		if(x == v[i]) {
			pos = i;
			i = tam;
		}
	}

	return pos;
}

int main(int argc, char** argv) {
	int rank;
	int tam;
	int a[N];
	int i, x = 10;
	int n = N;
	int pos = -1, processo = -1;
	
	MPI_Init(&argc, &argv);
	MPI_Comm_rank (MPI_COMM_WORLD, &rank);

	MPI_Comm_size (MPI_COMM_WORLD, &tam);

	if(tam > TAM - 1) {
		for(i = 0; i < n; i++) {
			a[i] = i;
			if (rank  == 0) {
				printf("%d ", a[i]);
			}
		}
		if (rank == 0) printf("\n");
	
        	if (rank == 0) {
			for(i = 0; i < 4; i++) {
				if(x == a[i]) {
					pos = a[i];
					processo = rank;
				}
			}
		}

	        if (rank == 1) {
			for(i = 4; i < 8; i++) {
				if(x == a[i]) {
					pos = a[i];
					processo = rank;
				}
			}
		}

	        if (rank == 2) {
			for(i = 8; i < 12; i++) {
				if(x == a[i]) {
					pos = a[i];
					processo = rank;
				}
			}
		}

	        if (rank == 3) {
			for(i = 12; i < n; i++) {
				if(x == a[i]) {
					pos = a[i];
					processo = rank;
				}
			}
		}

		MPI_Finalize();

		if (pos != -1) {
			printf("%d no processo %d\n", pos, processo);
		}
	}
	else {
		printf("Numero de processos menor do que o necessario.\n");
	}

	return(0);
}
