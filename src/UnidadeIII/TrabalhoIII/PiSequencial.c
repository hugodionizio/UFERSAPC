#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define f(x) ((double)(4.0/(1.0+x*x)))
#define pi ((double)(4.0*atan(1.0)))

void startup (void);
int solicit (void);
void collect (double sum);

void coleta(double sum) {
    double err;
    
    err = sum - pi;    
    printf("Soma, erro = %7.5f, %10e\n", sum, err);
}

int main(int argc, char **argv) {
    double sum, w;
    int i, N;
    
    N = solicita();
    
    while (N > 0) {
        w = 1.0/(double)N;
        sum = 0.0;        
        
        for (i = 1; i <= N; i++) {
            sum = sum + f(((double)i - 0.5) * w);
        }
        sum  = sum * w;
        
        coleta (sum);
        N = solicita();
    }
    
    return (0);
}

int solicita (void) {
    int N;
    
    printf("Informe o número de intervalos para a aproximação (0 para terminar)\n");
    scanf("%d", &N);
    
    return (N);
}
