#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char *argv[])
{

    FILE *arq, *arq2;

    int N, K;

    int cont = 0;
    int contador = 0;

    char aux[20];


    arq = fopen(argv[1],"r");
    arq2 = fopen(argv[2],"w+");
    //arq = fopen("entrada.txt","r");
    //arq2 = fopen("saida.txt","w+");


    if(arq == NULL)

    {
        printf("\n\tArquivo nao pode ser aberto.");
        return 0;
    }

    fscanf(arq,"%i %i", &N, &K);

    char frase[N][100];

    while(!feof(arq))
    {

        fscanf(arq,"%s",frase[cont]);

        cont= cont+ 1;

    }
    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j < N; j++)
        {
            if (strcmp(frase[j - 1], frase[j]) > 0)
            {
                strcpy(aux, frase[j - 1]);
                strcpy(frase[j - 1], frase[j]);
                strcpy(frase[j], aux);
                contador = contador + 3;
            }
        }
    }

    fprintf(arq2,"%s\n", frase[K - 1]);

    fclose(arq2);

    fclose(arq);

}
