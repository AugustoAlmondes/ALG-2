#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{

    int n;
    char nome[20];
    int cont[20];

    scanf("%[^\n]s", nome);

    n = strlen(nome);

    for(int i = 0; i < n; i++)
    {

        if(nome[i] == 'r')
        {

            nome[i] = 'l';

            cont[i] = 1;
        }
        else if (nome[i] == 'R')
        {

            nome[i] = 'L';

            cont[i] = 1;

        }
        printf("%c", nome[i]);

    }
    printf("\n");
    printf("caracteres alterados:\n");
    for(int j = 0; j< n; j++)
    {

        if(cont[j]== 1)
        {

            printf("%i ", j + 1);

        }
    }
}
