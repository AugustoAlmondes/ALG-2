#include <stdio.h>
#include <math.h>

void cubo(int *nPtr);

int main()

{
    int num;

    do
    {
        scanf("%i", &num);

        cubo(&num);

        printf("%i\n", num);
    }
    while(num != 0);
}

void cubo(int *nPrt)
{
    //printf("numero = %i\n", *nPrt);

   *nPrt = pow(*nPrt,3);
}
