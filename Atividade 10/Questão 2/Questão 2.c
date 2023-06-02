#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define mil 1000

typedef struct
{

    int cod;
    char carro[20];
    float valor;

} Dados;


void formatar();
void escrever();
void ler();
void buscar();
int main()
{

    int operacao = 1;

    while(operacao != 0)
    {

        system("color 1");
        printf("\n\t\t\t\tSistema de locacao baseado em arquivo\n");
        printf("\tInforme a opcao desejada (1-formatar, 2-escrever, 3-ler, 4-buscar, 0-finalizar): \n");
        scanf("\t\t\t%i", &operacao);
        // system("cls");
        switch(operacao)
        {

        case 1:
            formatar();
            break;
        case 2:
            escrever();
            break;
        case 3:
            ler();
            break;
        case 4:
            buscar();
            break;
        }
    }
}
void formatar()
{

    FILE *arq;

    Dados dados = {0.0,"",0.00};

    arq = fopen("dados.bin", "wb");

    for(int i = 0; i < mil; i++)
    {
        fwrite(&dados, sizeof(dados), 1, arq);
    }
    printf("Operacao de formatacao finalizada\n");
    fclose(arq);

}



void ler()
{
    system("cls");
    FILE *arq;
    int i = 0;
    Dados dados;

    arq = fopen("dados.bin","rb+");
    if(arq == NULL)
    {
        printf("\n\tArquivo nao pode ser aberto.");
    }

    while(!feof(arq))
    {
        fseek(arq, ((i) * sizeof(Dados)), SEEK_SET);
        fread(&dados, sizeof(dados),1,arq);
        if (dados.cod != 0)
        {

            printf("\n\tCodigo de locacao: %i", dados.cod);
            printf("\n\tNome do Veiculo: %s", dados.carro);
            printf("\n\tValor da locacao: %.2f", dados.valor);
            printf("\n");
        }
        i++;
    }
    printf("\n\tOperacao de leitura finalizada\n");
    fclose(arq);
}

void buscar()
{
    int posicao;
    FILE *arq;

    Dados dados;

    system("cls");

    printf("\ndigite a posicao: ");

    scanf("%i", &dados.cod);

    arq = fopen("dados.bin","rb+");

    rewind(arq);

    fseek(arq, (dados.cod - 1) * sizeof (dados), SEEK_SET);

    fread(&dados, sizeof(dados), 1, arq);

    printf("\n\tCodigo de locacao: %i", dados.cod);
    printf("\n\tNome do Veiculo: %s", dados.carro);
    printf("\n\tValor da locacao: %.2f", dados.valor);
    printf("\n");

}