// Código 4 - Modifica o X utilizando a diretiva Critical.
#include <omp.h>
#include <stdio.h>
int main() {
	int x;
	x = 0;
	#pragma omp parallel shared(x)
	{
		omp_set_num_threads(10);
		#pragma omp sections nowait
		{
			#pragma omp section
			//	#pragma omp critical
				x = x + 1;
			#pragma omp section
			//	#pragma omp critical
				x = x + 2;
		}
	}
	printf("O valor de x é %d \n", x);

	return(0);
}
