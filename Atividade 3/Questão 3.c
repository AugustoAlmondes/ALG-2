#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lanc();
int rmoeda[100];

int main()
{
    srand(time(NULL));

    lanc();

    int i,cara=0, coroa=0, moeda=0;

    for (i=0; i<100; i++)
    {


        if (rmoeda[i]%2 == 0)
        {
            coroa++;
            printf("Coroa\n");
        }
        else
        {
            cara++;
            printf("Cara\n");
        }


    }
    printf("Numero de vezes que cara apareceu = %d", cara);

}

int lanc()
{
    int i;

    srand(time(NULL));

    for(int i = 0; i <= 100; i++)
    {

        rmoeda[i]= rand();



    }

}
