#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int sortear();
void juntarpalavra(char juntar[]);
int concatena(char juntar[], char palavra[], int pos);

char artg[][20] = {"o", "um", "algum", "todo", "qualquer"};
char subst[][20] = {"menino", "homem", "cachorro", "carro", "gato"};
char verb[][20] = {"passou", "pulou", "correu", "saltos", "andou"};
char preposi[][20] = {"sobre", "sob", "ante", "ate", "com"};

int main()
{
    srand((unsigned)time(NULL));

    char juntar[100];

    for (int i = 0; i < 20; i++)
    {
        juntarpalavra(juntar);

        printf("juntar: %s\n", juntar);
    }
}

void juntarpalavra(char juntar[])
{
    int s, pos = 0;

    s = sortear();
    pos = concatena(juntar, artg[s], pos);
    s = sortear();
    pos = concatena(juntar, subst[s], pos);
    s = sortear();
    pos = concatena(juntar, verb[s], pos);
    s = sortear();
    pos = concatena(juntar, preposi[s], pos);
    s = sortear();
    pos = concatena(juntar, artg[s], pos);
    s = sortear();
    pos = concatena(juntar, subst[s], pos);

    juntar[0] -= 32;

    juntar[pos - 1] = '.';

    juntar[pos] = '\0';
}

int sortear()
{
    int s = rand() % 5;
    return s;
}

int concatena(char juntar[], char palavra[], int pos)
{
    int i = 0;
    while (palavra[i] != '\0')
    {
        juntar[pos] = palavra[i];
        i++;
        pos++;
    }
    juntar[pos] = ' ';
    pos++;
    return pos;
}