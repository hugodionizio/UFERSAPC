// Código 2 - Jogo "Pedra-Papel-Tesoura"
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 2
#define PEDRA 0
#define PAPEL 1
#define TESOURA 2

int mainPedPapTes() {
	int tid;
	int jogador1, jogador2;

	srand(time(NULL));

	printf("Jacken Pô!\n");

	omp_set_num_threads(2);
	#pragma omp private(tid) shared(jogador1, jogador2)
	{
		jogador1 = rand()%3;
		jogador2 = rand()%3;
	}
	
	if(jogador1 - jogador2 > 0)
		printf("O Jogador 1 venceu! %d > %d", jogador1, jogador2);
	else if (jogador1 < jogador2)
		printf("O Jogador 2 venceu! %d < %d", jogador1, jogador2);
	else
		printf("Empate!");
	printf("\n");

	return (0);
}
