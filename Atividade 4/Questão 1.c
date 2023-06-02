#include<stdio.h>
#define n 5

struct aluno
{
    char nome[20];
    float altura;
    float peso;
    float ira;
};

struct media
{
    float peso;
    float altura;
    float ira;
};

struct aluno Aluno[n];
struct media Media;
int main()
{

    float maiorA, maiorI, maiorP;
    int a, b, c, d;

    for(int i = 0; i < n; i++)
    {

        printf("Digite o nome: ");
        scanf("%s", &Aluno[i].nome);
        printf("Digite a altura: ");
        scanf("%f", &Aluno[i].altura);
        printf("Digite o peso: ");
        scanf("%f", &Aluno[i].peso);
        printf("Digite o IRA: ");
        scanf("%f", &Aluno[i].ira);
        printf("\n");

        Media.altura = Media.altura + Aluno[i].altura;
        Media.peso = Media.peso + Aluno[i].peso;
        Media.ira = Media.ira + Aluno[i].ira;

        if(maiorA == 0)
        {

            maiorA = Aluno[i].altura;
            maiorP = Aluno[i].peso;
            c = i;
            maiorI = Aluno[i].ira;
            a = a + 1;

            //printf("%f", maiorP);

        }

        if(Aluno[i].altura > maiorA)
        {
            b = i;
        }
        if(Aluno[i].peso > maiorP)
        {
            c = i;
        }
        // printf("%f", Aluno[c].peso);
        if(Aluno[i].ira > maiorI)
        {
            d = i;
        }

    }
    Media.altura = Media.altura/n;
    Media.peso = Media.peso/n;
    Media.ira = Media.ira/n;

    printf("Media da altura: %.2f\n", Media.altura);
    printf("Media do peso: %.2f\n", Media.peso);
    printf("Media do ira: %.2f\n", Media.ira);
    printf("\n");

    printf("Maior Altura: %s (%.4f)\n", Aluno[b].nome, Aluno[b].altura);
    printf("Maior Peso: %s (%.4f)\n", Aluno[c].nome, Aluno[c].peso);
    printf("Maior IRA: %s (%.4f)\n", Aluno[d].nome, Aluno[d].ira);
    return 0;

}
