#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include "UnidadeII/UnidadeII.h"

int main(int argc, char *argv) {

    // Aula 01
    //  Exemplos
    printf("Aula 01. Exemplo 1 - Estrutura de um OpenMP:\n");
    mainExemplo();
    printf("Aula 01. Exemplo 2 - Hello World! do OpenMP:\n");
    mainHelloWorld();
    printf("Aula 01. Exemplo 3 - Produto de dois vetores:\n");
    mainProdutoVetores();
    printf("Aula 01. Exemplo 4 - Soma de dois vetores:\n");
    mainAdicaoVetores();

    //  Exercícios
    printf("Aula 01. Exercício 1 - 5 Threads:\n");
    main5Threads();
    printf("Aula 01. Exercício 2 - Prdouto de um vetor por escalar:\n");
    mainVetorEscalar();
    printf("Aula 01. Exercício 3 - Soma de vetores mostrando cada thread:\n");
    mainSomaThreads();
    printf("Aula 01. Exercício 4 - Soma dos elementos de um vetor:\n");
    mainSomaElemVet();
    //------------------------------------------------------------------------


    // Aula 02
    //  Exemplos
    printf("Aula 02. Exemplo 1 - :\n");
    //main();
    printf("Aula 02. Exemplo 2 - Uso diretiva single:\n");
    mainSingle();
    printf("Aula 02. Exemplo 3 - Adição de Vetores usando construções combinadas.:\n");
    mainSingleComb();
    printf("Aula 02. Exemplo 4 - Modifica o X utilizando a diretiva Critical:\n");
    mainModifXCritical();

    //  Exercícios
    printf("Aula 02. Exercício 1 - Soma e Subtração de dois vetores simultaneamente:\n");
    mainSomSubVet();
    printf("Aula 02. Exercício 2 - Corrida de threads com Barrier:\n");
    mainCorridaBarrier();
    printf("Aula 02. Exercício 3 - Busca em Vetor com threads:\n");
    mainBuscaVetor();
    printf("Aula 02. Exercício 4 - Vetor ORDERED:\n");
    mainVetThOrd();
    //------------------------------------------------------------------------


    // Aula 03
    //  Exemplos
    printf("Aula 03. Exemplo 1 - :\n");
    mainVarAmbFor();
    printf("Aula 03. Exemplo 2 - :\n");
    mainVarAmbDouble();

    //  Exercícios
    printf("Aula 03. Exercício 1 - :\n");
    main4Threads();
    //------------------------------------------------------------------------


    // Aula 04
    //  Exercícios
    printf("Aula 04. Exercício 1 - :\n");
    mainNumArbThreads();
    printf("Aula 04. Exercício 2 - :\n");
    mainPedPapTes();
    //------------------------------------------------------------------------


    return (0);
}
