#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define max 50
#define qsimbolos 4
#define qnumeroses 13
#define qcartas 52

int numero;

typedef struct
{
    char *simbolos;
    char *numeros;
} Carta;

int sorteaNumero();
void preenche( Carta *conjunto, char *face[ ], char *simbolos[ ] );
void imprime( Carta *conjunto );
void embaralha( Carta *conjunto );


int main()
{
    Carta conjunto[qcartas];
    char *simbolos[qsimbolos] = {"Paus", "Ouros", "Copas", "Espadas"};
    char *numeros[qnumeroses] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove","Dez", "Valete", "Dama", "Rei"};


    srand( (unsigned) time(NULL) );

    preenche(conjunto,numeros,simbolos );

    scanf("%d", &numero);

    imprime(conjunto);

    printf("\n");

    return 0;
}

int sorteaNumero()
{

    return rand() % 52;

}

void preenche( Carta *conjunto, char *face[ ], char *simbolos[ ] )
{
    int i, j, cont = 0;

    for (i = 0; i < qsimbolos; i++)
    {
        for (j = 0; j < qnumeroses; j++)
        {
            conjunto[cont].numeros = face[j];
            conjunto[cont].simbolos = simbolos[i];
            cont++;
        }
    }
}

void embaralha( Carta *conjunto )
{
    int i, numero;
    Carta cartaux;


    for (i = 0; i < qcartas; i++)
    {
        numero = sorteaNumero();

        cartaux.numeros = conjunto[numero].numeros;
        cartaux.simbolos = conjunto[numero].simbolos;

        conjunto[numero].numeros = conjunto[i].numeros;
        conjunto[numero].simbolos = conjunto[i].simbolos;

        conjunto[i].numeros = cartaux.numeros;
        conjunto[i].simbolos = cartaux.simbolos;

    }

}

void imprime( Carta *conjunto )
{
    int i;
    switch (numero)
    {

    case 0:
        embaralha(conjunto);
        for ( i = 0; i < qcartas; i++)
        {
            printf("%s de %s\n", conjunto[i].numeros, conjunto[i].simbolos);
        }
        break;
    case 1:
        for ( i = 0; i < qcartas; i++)
        {
            printf("%s de %s\n", conjunto[i].numeros, conjunto[i].simbolos);
        }
        break;
    }
}
