#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int funca_soma();
int repeticao(int resultado);

int main()
{
    int resultado;

    resultado = funcao_soma();

    if((resultado == 7)||(resultado == 11))
    {
        printf("\nO jogador ganhou :)\n");
        return 0;

    }
    if((resultado == 2)||(resultado == 3)||(resultado == 12))
    {
        printf("\nO jogador perdeu :(\n");
        return 0;

    }
    if(resultado != 7 || resultado != 11 || resultado!= 2 || resultado != 3 || resultado != 12)
    {
        repeticao(resultado);
    }
}
    int funcao_soma()
    {
        int dado1;
        int dado2;
        int rst;

        srand(time(NULL));

        dado1 = 1+ rand() % 6;
        dado2 = 1+ rand() % 6;

        printf("Soma dos dados %i + %i = %i\n",dado1,dado2,dado1 + dado2);

        rst = dado1 + dado2;

        return rst;

    }

    int repeticao(resultado)
    {
        int aux;
        int dado1, dado2;

        printf("O ponto e: %i\n", resultado);
        while(aux != resultado)
        {

            dado1 = 1+ rand() % 6;
            dado2 = 1+ rand() % 6;
            printf("Soma dos dados %i + %i = %i\n",dado1,dado2,dado1 + dado2);

            aux = dado1 + dado2;

            if(aux == 7)
            {
                printf("\nO jogador perdeu :(\n");
                return 0;
            }

        }
        if(aux == resultado)
        {
            printf("\nO jogador ganhou :)\n");
            return 0;
        }

}
