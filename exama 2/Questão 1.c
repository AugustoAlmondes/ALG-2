#include<stdio.h>
#include<string.h>

//questao 1
typedef struct
{
    int codigo;
    char descricao[30];
    int idade;
    float preco;

} Brinquedos;


void cadastrar(Brinquedos brin);
void visualizar(Brinquedos brin);
void buscar1(Brinquedos brin);
void buscar2(Brinquedos brin);


int main()
{
    Brinquedos brin;
    int num;
    printf("1-cadastrar 2-visualizar 3-buscar um registro 4-buscar registros 5-finalizar \n");
    printf("\t\tInforme o modulo desejado: ");
    while(num != 5)
    {

        scanf("%i", &num);

        switch(num)
        {
        case 1:
            cadastrar(brin);
            printf("\n");
            printf("Informe o modulo desejado: ");
            break;
        case 2:
            visualizar(brin);
            printf("\n");
            printf("Informe o modulo desejado: ");
            break;
        case 3:
            buscar1(brin);
            printf("\n");
            printf("Informe o modulo desejado: ");
            break;
        case 4:
            buscar2(brin);
            printf("\n");
            printf("Informe o modulo desejado: ");
            break;
        }
    }
}
//questao 2
void cadastrar(Brinquedos brin)
{
    FILE *arq;

    arq = fopen("exame.txt","a");
    printf("Digite o codigo: ");
    scanf("%i", &brin.codigo);
    setbuf(stdin,NULL);
    printf("Digite a descricao: ");
    gets(brin.descricao);
    printf("Digite a idade: ");
    scanf("%i", &brin.idade);
    printf("Digite o preco: ");
    scanf("%f", &brin.preco);
    fprintf(arq,"%i %s %i %.2f\n", brin.codigo,brin.descricao,brin.idade,brin.preco);
    fclose(arq);
}
//questao 3
void visualizar(Brinquedos brin)
{
    FILE *arq;

    arq = fopen("exame.txt","r");

    while(!feof(arq))
    {

        fscanf(arq,"%i %s %i %f",&brin.codigo, brin.descricao, &brin.idade, &brin.preco);

        printf("%i , %s , %i, %.2f\n", brin.codigo,brin.descricao,brin.idade,brin.preco);

    }
    fclose(arq);
}

//questao 4
void buscar1(Brinquedos brin)
{
    FILE *arq;

    arq = fopen("exame.txt","r");
    int busca;
    int cont = 0;
    printf("Digite o codigo de busca: ");
    scanf("%i", &busca);
    while(!feof(arq))
    {

        fscanf(arq,"%i %s %i %f",&brin.codigo, brin.descricao, &brin.idade, &brin.preco);
        if(busca == brin.codigo)
        {
            printf("%i , %s , %i, %.2f\n", brin.codigo,brin.descricao,brin.idade,brin.preco);
            cont++;
        }

    }
    if(cont == 0)
    {
        printf("Sem cadastro\n");
    }
fclose(arq);
}
//questao 5
void buscar2(Brinquedos brin)
{
    FILE *arq;

    arq = fopen("exame.txt","r");
    int busca;
    int cont = 0;
    printf("Digite a idade minima: ");
    scanf("%i", &busca);
    while(!feof(arq))
    {

        fscanf(arq,"%i %s %i %f",&brin.codigo, brin.descricao, &brin.idade, &brin.preco);
        if(busca < brin.idade)
        {
            printf("%i , %s , %i, %.2f\n", brin.codigo,brin.descricao,brin.idade,brin.preco);
            cont++;
        }

    }
    if(cont == 0)
    {
        printf("Sem cadastro\n");
    }
    fclose(arq);
}
