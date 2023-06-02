#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define MAX 50

int sorteaNumero(int min, int max);
void montarCrt();
void imprimeCartas(int num);
void embaralhaCrt();

char tipo[4][MAX] = {"Paus", "Ouros", "Copas", "Espadas"};
char numero[13][MAX] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove", "Dez", "Valete", "Dama", "Rei"};

struct Carta
{
    char tipo[MAX];
    char numero[MAX];
};

struct Carta deck[52];

int main()
{

    int num;

    srand((unsigned)time(NULL));

    montarCrt();

    scanf("%d", &num);

    imprimeCartas(num);

    printf("\n");

    return 0;
}

int sorteaNumero(int min, int max)
{
    return rand() % max + min;
}

void montarCrt()
{
    int cont = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            strcpy(deck[cont].numero, numero[j]);
            strcpy(deck[cont].tipo, tipo[i]);
            cont++;
        }
    }
}

void imprimeCartas(int num)
{
    switch (num)
    {
    case 0:
        embaralhaCrt();
        for (int i = 0; i < 52; i++)
        {
            printf("%s de %s\n", deck[i].numero, deck[i].tipo);
        }
        break;
    case 1:
        for (int i = 0; i < 52; i++)
        {
            printf("%s de %s\n", deck[i].numero, deck[i].tipo);
        }
        break;
    }
}

void embaralhaCrt()
{
    int num;
    struct Carta cartaAux;

    for (int i = 0; i < 52; i++)
    {
        num = sorteaNumero(0, 51);

        strcpy(cartaAux.numero, deck[num].numero);
        strcpy(cartaAux.tipo, deck[num].tipo);

        strcpy(deck[num].numero, deck[i].numero);
        strcpy(deck[num].tipo, deck[i].tipo);

        strcpy(deck[i].numero, cartaAux.numero);
        strcpy(deck[i].tipo, cartaAux.tipo);
    }
}
/*
deck[num] = dois ouros -> aux
deck[i] = as paus -> deck[num]
aux = dois ouros -> deck[i]  */