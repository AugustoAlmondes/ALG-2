#include <stdio.h>


void preencheFibVetor(long long fibVetor[ ], int tamanho);
void imprime(int testes);

unsigned long long int vetor[] = {};

int main() {
  int T,i,entrada,test;
    scanf("%d", &T);
    preencheFibVetor;

    for (i = 0; i < test; i++)
    {
        scanf("%d", &entrada);
        printf("Fib(%d) = %lld\n", entrada, vetor[entrada]);
    }
    return 0;
}

void preencheFibVetor(long long fibVetor[ ], int tamanho){
    int i;
    vetor[0] = 0;
    vetor[1] = 1;

    for (i = 2; i < tamanho ; i++)
    {
        vetor[i] = vetor[i - 1] + vetor[i - 2];
    }
}
