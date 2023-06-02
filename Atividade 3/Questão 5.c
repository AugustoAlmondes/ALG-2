#include<stdio.h>

int tentativas(int);

int main()
{

    int aleatorio, tentat;

    srand(time(NULL));

    aleatorio = rand() % 1000;

    tentat = tentativas(aleatorio);

    printf("Total de tentativas: %d", tentat);
}

int tentativas(int aleatorio)
{

    int result = 0, i;

//printf("%d", aleatorio);

    while(result != aleatorio)
    {
        i++;
        printf("digite um numero: ");
        scanf("%d",&result);

        if(result > aleatorio)
        {
            printf("Muito alto\n");
        }
        if(result < aleatorio)
        {
            printf("Muito baixo\n");
        }
        if(result == aleatorio)
        {
            printf("Voce acertou\n");
        }

    }
    return i;
}
