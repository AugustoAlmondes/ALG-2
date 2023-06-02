#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define MAX 1000

//1 quest�o
typedef struct
{
    int codigo;
    char nome[20];

} Dados;

//2 quest�o
typedef struct
{
    Dados dados[MAX + 1];
    int tamanho;

} Tabela;

void salvarDados(Tabela tab, char arquivo[]);
void restaurarDados(Tabela tab2, char arquivo[]);

int main()
{
    Tabela tab;
    Tabela tab2;
    char nome[20];
    int operacao = -1;
    //system("color 1");
    srand(time(NULL));

    for(int i = 0; i < MAX; i++)
    {
        tab.dados[i].codigo = rand() % 1000;
        strcpy(tab.dados[i].nome, "Gol");
    }
    printf("\tSistema de backup de dados\n");
    printf("\nInforme a operacao desejada (1-salvar, 2-restarar): ");
    scanf("%i", &operacao);

    switch(operacao) //Chama a função SalvarDados
    {
    case 1:
        printf("Informe o nome do arquivo backup com '.txt' no final: ");
        scanf(" %s", nome);
        salvarDados(tab, nome);
        break;
    case 2:
        printf("Informe o nome do arquivo backup com '.txt' no final: ");
        scanf("%s", nome);
        restaurarDados(tab, nome);
        break;
    default:
    break;
    }
    printf("\tOperacao concluida com sucesso!\n");
}
void salvarDados(Tabela tab, char arquivo[])
{

    FILE *arq;
    arq = fopen(arquivo, "a");
    if(arq)
    {
        for(int i = 0; i < MAX; i++)
        {
            fprintf(arq, "%i %s \n", tab.dados[i].codigo, tab.dados[i].nome);
        }
    }
    else
    {
        printf("Arquivo nao foi aberto\n");
    }
    fclose(arq);
}

void restaurarDados(Tabela tab2, char arquivo[])
{
    FILE *arq;
    int i = 0;
    arq = fopen(arquivo, "r");
    while (!feof(arq))
    {
        fscanf(arq, "%d %s", &tab2.dados[i].codigo, tab2.dados[i].nome);
        i++;
    }
    fclose(arq);
    for(int i = 0; i < MAX;i++)
    {
        printf("%i %s\n", tab2.dados[i].codigo, tab2.dados[i].nome);
    }
}
