#include<stdio.h>

int main()
{
    int   numero[10];
    int   numero2[11];

    for(int i = 0; i < 10; i++)
    {
        numero[i] = 0;
        numero2[i] = 0;
    }
    for(int i = 0; i < 10; i++)
    {

        printf("Digite um numero: ");
        scanf("%i", &numero[i]);

        if(numero[i] >= 10 && numero[i]<= 100)
        {
            if(numero[i] != numero2[i-1])
            {

                printf("%i\n", numero[i]);

            }
            else
            {
                printf("!!Numero invalido!!\n");
            }
            numero2[i] = numero[i];
        }
        else
        {
            printf("!!Numero invalido!!\n");
        }


    }
}
