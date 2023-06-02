#include <stdio.h>
#include<time.h>
#include<stdlib.h>

struct aluno
{
    int chave;
    char nome[30];
    char endereco[50];
    char telefone[14];
};

typedef struct aluno Alunos;

void gerarDados(Alunos v[ ], int n, int ordemChave);
void ordenarDados(Alunos v[ ], int n, int tipo, int ordem);

int NUM_COMP = 0;
int NUM_MOV = 0;

int main()
{
    srand(time(NULL));
    int n;
    int ordem;
    int tipo;

    scanf("%i", &n);
    Alunos v[n];
    do
    {
        scanf("%i", &ordem);
        if(ordem == 3)
        {
            break;
        }
        scanf("%i", &tipo);

        gerarDados(v, n, ordem);
        ordenarDados(v, n, tipo, ordem);
    }
    while(ordem != 3);
}

void gerarDados(Alunos v[ ], int n, int ordemChave)
{
    int cont = 0;
//printf("%i\n", n);
//printf("%i\n", ordemChave);
    switch (ordemChave)
    {
    case 0:
//Crescente
        // printf("Crescente\n");
        for(int i = 0; i< n; i++)
        {
            v[i].chave = i;
        }
        break;
    case 1:
//aleat�ria
        //printf("Aleatorio\n");
        for (int i = 0; i < n; i++)
        {

            v[i].chave = rand() % 10000;

        }
        break;
    case 2:
//decrescente
        //printf("Decrescente\n");

        for (int i = n -1; i>= 0; i--)
        {
            v[cont].chave = i;
            cont++;
            //printf("%i ", v[i].chave);
        }
        break;
    }
    printf("\n");

}
void ordenarDados(Alunos v[ ], int n, int tipo, int ordem)
{
    int aux1, j;
    int min;

    switch(tipo)
    {
    case 0: //bolha
        NUM_COMP = 0;
        NUM_MOV = 0;
        printf("bolha\n");

        for(int i = 0; i < n - 0 ; i++)
        {

            printf("%i ", v[i].chave);

        }

        printf("\n");

        for( int i = 0; i < n -1; i++ )
        {
            for( j = 1; j < n - i; j++ )
            {
                NUM_COMP++;

                if ( v[j].chave < v[j - 1].chave )
                {

                    aux1 = v[j-1].chave;
                    v[j -1].chave = v[j].chave;
                    v[j].chave = aux1;
                    NUM_MOV+=3;
                }
            }
        }

        break;

    case 1: //sele��o
        NUM_COMP = 0;
        NUM_MOV = 0;
        printf("selecao\n");

        for(int i = 0; i < n - 0 ; i++)
        {

            printf("%i ", v[i].chave);

        }

        printf("\n");

        for(int i = 0; i< n -1; i++)
        {
            min = i;
            for(int j = i + 1; j < n; j++)
            {
                NUM_COMP++;
                if(v[j].chave < v[min].chave)
                {
                    min = j;
                }
            }
            NUM_MOV+=3;
            aux1 = v[i].chave;
            v[i].chave = v[min].chave;
            v[min].chave = aux1;

        }
        break;
    case 2: //inser��o
        NUM_COMP = 0;
        NUM_MOV = 0;

        //printf("ordem: %i\n", ordem);
        printf("insercao\n");

        for(int i = 0; i < n - 0 ; i++)
        {

            printf("%i ", v[i].chave);
            
        }

        printf("\n");

//printf("ordem: %i\n",ordem);
        if(ordem == 0)
        {
            for(int i = 1; i< n; i++)
            {
                aux1 = v[i].chave;
                NUM_MOV++;
                j = i - 1;
                //NUM_COMP++;
                while((j >= 0) && (aux1 < v[j].chave))
                {
                    NUM_COMP++;
                    v[j+ 1].chave = v[j].chave;
                    NUM_MOV++;
                    j--;
                }
                v[j + 1].chave = aux1;
                NUM_MOV++;
            }
        }
        if(ordem == 1)
        {
            for(int i = 1; i< n; i++)
            {
                aux1 = v[i].chave;
                NUM_MOV++;
                j = i - 1;
                //NUM_COMP++;
                while((j >= 0) && (aux1 < v[j].chave))
                {
                    NUM_COMP++;
                    v[j+ 1].chave = v[j].chave;
                    NUM_MOV++;
                    j--;
                }
                v[j + 1].chave = aux1;
                NUM_MOV++;
            }

        }
        if(ordem == 2)
        {
              for(int i = 1; i< n; i++)
            {
                aux1 = v[i].chave;
                NUM_MOV++;
                j = i - 1;
               // NUM_COMP++;
                while((j >= 0) && (aux1 < v[j].chave))
                {
                    NUM_COMP++;
                    v[j+ 1].chave = v[j].chave;
                    NUM_MOV++;
                    j--;
                }
                v[j + 1].chave = aux1;
                NUM_MOV++;
            }
        }

    }
    for(int i = 0; i< n; i++)
    {

        printf("%i ", v[i].chave);

    }
    printf("\nNumero de Comparacao: %i\n",NUM_COMP);
    printf("\nNumero de Movimentacao: %i\n",NUM_MOV);
    printf("\n");


}
