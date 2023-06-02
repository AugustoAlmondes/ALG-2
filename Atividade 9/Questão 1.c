#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
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
    Dados dados[1001];
    int tamanho;
} Tabela;

Tabela tab;


int sequencial(int numero, Tabela);
int binaria(int numero, Tabela);
int terceiraq(Tabela);
int quartaq(Tabela);
int quintaq(Tabela);
int sextaq(Tabela);
int setimaq(Tabela);

int contador2 = 0;
int contador1 = 0;

int main()
{

    srand(time(NULL));

    for(int i = 0; i < MAX; i++)
    {
        tab.dados[i].codigo = rand() % 1000;
        strcpy(tab.dados[i].nome, "Gol");
    }
    terceiraq(tab);
    quartaq(tab);
    quintaq(tab);
    sextaq(tab);
    setimaq(tab);
}

//ordenar em ordem crescente
int binaria(int numero, Tabela tab)
{
    int i;
    int aux1 = 0;
    for( int i = 0; i < 1000 -1; i++ )
    {
        for(int  j = 1; j < 1000- i; j++ )
        {

            if ( tab.dados[j].codigo < tab.dados[j - 1].codigo )
            {
                aux1 = tab.dados[j-1].codigo;
                tab.dados[j -1].codigo = tab.dados[j].codigo;
                tab.dados[j].codigo = aux1;
            }
        }
    }
    tab.tamanho = MAX;
    if(tab.tamanho == 0)
    {
        return 0;
    }
    int esq = 1;
    int dir = numero;
    do
    {
        contador2 += 1;
        //printf("%i \n", contador2);
        i = (esq + dir) / 2;
        if (numero > tab.dados[i].codigo)
        {
            esq = i + 1; /* procura na parti��o direita */
        }
        else
        {
            dir = i - 1;
        }
        /* procura na part esquerda */
    }
    while((numero != tab.dados[i].codigo) && (esq <= dir));
    /* if (numero == tab.dados[i].codigo)
    {
        return i;
    }
    else
    {
        return 0;
    }
    */
}

int terceiraq(Tabela tab)
{
 system("color 2");
    system("cls");
    int numero, seq, bin;
    int media1 = 0;
    int media2 = 0;
    for(int i = 0; i< 100; i++)
    {

        numero = rand() % 1000;

        seq = sequencial(numero, tab);

        // printf("posicao %i: %i \n\n",i, seq);

        binaria(numero, tab);

    }
    printf("\nPesquisa sequencial: a m�dia de registros percorridos por pesquisa eh %i\n", contador1/100);
    printf("\nPesquisa bin�ria: a m�dia de registros percorridos por pesquisa eh %i\n", contador2/100);
}

int sequencial(int numero, Tabela tab)
{
    int i, cont = 0;

    // printf("Numero a ser buscado: %i \n", numero);

    tab.dados[0].codigo = numero;

    for( i = MAX; tab.dados[i].codigo != numero; i-- )
    {

        contador1 += 1;

    }
    if(tab.dados[0].codigo == numero)
    {
        tab.dados[0].codigo = 0;
    }
    return contador1;

}

int quartaq(Tabela tab)
{
    int busca;
    int cont = 0;
    printf("\nDigite o codigo: ");
    scanf("%i", &busca);

    for(int i = 0; i < MAX; i++)
    {

        if(busca == tab.dados[i].codigo)
        {
            cont++;
        }

    }
    printf("\nO codigo %i se repete %i vez(es)\n", busca, cont );
}

int quintaq(Tabela tab)
{
    int remover;
    int i, cont = 0;

    tab.tamanho = MAX;

    printf("\nDigite o codigo para ser removido: ");

    scanf("%i", &remover);

    for(i = 0; i < tab.tamanho; i++)
    {
        if(tab.dados[i].codigo == remover)
        {
            tab.dados[i].codigo = tab.dados[tab.tamanho].codigo;
            tab.tamanho = tab.tamanho - 1;
            cont += 1;
        }
    }

    printf("\n%i registros com o codigo %i foram removidos\n", cont, remover);

    quartaq(tab);
}

int sextaq(Tabela tab)
{
    char nome[20];
    int cont;

    printf("\nDigite o nome do veiculo: ");

    scanf("%s", nome);

    for(int i = 0; i < MAX; i++)
    {

        cont = strcmp(tab.dados[i].nome, nome);
        if(cont == 0)
        {
            printf("\nCarro na posicao: %i \n", i);
            break;
        }
    }
    if (cont != 0)
    {

        printf("\nCarro nao existe na tabela\n");

    }
}

int setimaq(Tabela tab)
{
    int codigo;
    int nome[20];
    int cont;
    int i, confirmacao;

    printf("\nADICIONAR CARRO \n");

    printf("\nDigite o codigo de locacao: ");
    scanf("%i", &codigo);

    printf("\nDigite o nome do Carro: ");
    scanf("%s", nome);

    for( i = 0; i < MAX; i++)
    {

        cont = strcmp(tab.dados[i].nome, nome);
        if(cont == 0)
        {
            break;
        }
         if (cont != 0)
    {

       break;

    }
    }

    if(cont == 0)
    {
        printf("\nExistem registros desse veiculo. Digite 0 para cancelar e 1 para confirmar a insercao: \n");

    }
       if(cont != 0)
    {
        printf("\nNao existem registros desse veiculo. Digite 0 para cancelar e 1 para confirmar a insercao: \n");

    }
    scanf("%i", &confirmacao);
//printf("\n %i \n", confirmacao);
    if(confirmacao == 0)
    {
        return 0;

    } if (confirmacao == 1)
    {

        strcpy(tab.dados[tab.tamanho].nome, nome);

        printf("\nCodigo do carro: %d, Nome do carro: %s\n", codigo, tab.dados[tab.tamanho].nome);


    }
    printf("\nNome do carro na posicao %i: %s",codigo, tab.dados[i].nome);
}



