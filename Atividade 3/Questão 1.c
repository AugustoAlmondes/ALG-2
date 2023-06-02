#include <stdio.h>
#include <string.h>

char trocar_numero(char numero[4]);

int n;
char numero2[4];

int main()
{

    char numero[4];

    scanf("%s", numero);

    n = strlen(numero);

    if (n == 4)
    {

        trocar_numero(numero);

        for (int i = n; i >= 0; i--)
        {
            printf("%c", numero2[i]);
        }
    }
    else
    {
        printf("\nnumero Indevido\n");
    }
}
char trocar_numero(char numero[4])
{

    for (int i = n; i >= 0; i--)
    {

        numero2[i] = numero[i];
    }
}
