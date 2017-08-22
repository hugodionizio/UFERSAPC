#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include "UnidadeII/UnidadeII.h"

int main(int argc, char *argv) {
    
    // Exemplos
    printf("Exemplo 1 - Estrutura de um OpenMP:\n");
    mainExemplo();
    printf("Exemplo 2 - Hello World! do OpenMP:\n");
    mainHelloWorld();
    printf("Exemplo 3 - Produto de dois vetores:\n");
    mainProdutoVetores();
    printf("Exemplo 4 - Soma de dois vetores:\n");
    mainAdicaoVetores();
    
    // Exercícios
    printf("Exercício 1 - 5 Threads:\n");
    main5Threads();
    printf("Exercício 2 - Prdouto de um vetor por escalar:\n");
    mainVetorEscalar();
    printf("Exercício 3 - Soma de vetores mostrando cada thread:\n");
    mainSomaThreads();
    printf("Exercício 4 - Soma dos elementos de um vetor:\n");
    mainSomaElemVet();
    
    printf("Aula 02 - Exercício 4: Vetor ORDERED:\n");
    mainVetThOrd();
    
    return (0);
}
