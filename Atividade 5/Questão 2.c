#include<stdio.h>
#include<math.h>

void raizes(float a, float b, float c, float *x1, float *x2);
float raiz = 0;
int main()
{
    float a,b,c,x1 = 0, x2 = 0;
    do
    {

        scanf("%f", &a);
        if(a == 0)
        {
            return 0;
        }
        scanf("%f %f", &b,&c);
        raizes(a, b, c, &x1, &x2);


        if((raiz >= 0)&&(x1 != x2))
        {

            printf("\nValor X1 = %.2f\nValor X2 = %.2f\n", x1, x2);
        }
        else if((raiz >= 0)&&(x1 == x2))
        {
            printf("\n Valor de ambas = %.2f\n", x1);
        }
    }
    while(a != 0);
}

void raizes(float a, float b, float c, float *x1, float *x2)
{

    raiz =pow(b,2) - 4 * a * c;

    if(raiz < 0)
    {
        printf("\ncomplexo\n");

    }

    raiz = sqrt(raiz);

    //printf("\n %.2f\n", raiz);

    *x1 = (-b + raiz)/(2 * a);
    *x2 = (-b - raiz)/(2 * a);


    //x1 = (-b + sqrt(-4 * a * c))/(2 * a);
    //x2 = (-b - sqrt(-4 * a * c))/(2 * a);
}
