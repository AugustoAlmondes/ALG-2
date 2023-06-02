1#include<math.h>
#include<stdio.h>

float distancia(float);

struct Ponto
{
    float x;
    float y;
};

struct Ponto ponto1, ponto2;

int main()
{

    float d;

    printf("Digite as coordenadas do ponto 1\n");
    printf(" Ponto X: ");

    scanf("%f", &ponto1.x);

    printf(" Ponto Y: ");

    scanf("%f", &ponto1.y);

    printf("Digite as coordenadas do ponto 2\n");

    printf(" Ponto X: ");

    scanf("%f", &ponto2.x);

    printf(" Ponto Y: ");

    scanf("%f", &ponto2.y);

    d = distancia(d);

    printf("Distancia entre A e B eh: %.4f\n", d);
}
float distancia(float d)
{

    d = pow((ponto2.x - ponto1.x), 2) + pow((ponto2.y - ponto1.y), 2);
    d = sqrt(d);

    return d;
}

