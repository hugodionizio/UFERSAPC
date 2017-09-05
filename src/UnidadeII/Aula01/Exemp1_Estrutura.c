// Código 1
#include <stdio.h>
#include <omp.h>

int mainExemplo() {

    int var1, var2, var3;

    //...
    #pragma omp parallel private(var1, var2) shared(var3)
    {
        // Código paralelo*
    }
    // Código serial

    return (0);
}
