#include<stdio.h>
int main()
{
    int vetor[10], v = 0, i, j;
    for(i=0; i<10; i++)
    {
        printf("Digite um numero: \n");

        scanf("%d", &vetor[i]);

        if(vetor[i]<1 || vetor[i]>20)

        {
            printf("DADOS INVALIDOS!");

            return 0;
        }
    }
    for(i=0; i<10; i++)
    {
        printf("\n%9d%10d     ", i, vetor[i]);

        for(j=0; j< vetor[i]; j++)

        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}