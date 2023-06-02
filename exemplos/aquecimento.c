#include <stdio.h>
#include <math.h>

    int calculaRaizes(float a, float b, float c);

int main(){

        float a,b,c;

    printf("Digite o valor de a: ");
        scanf("%f",&a);

    printf("Digite o valorde b: ");
        scanf("%f",&b);

    printf("Digite o valor de c: ");
        scanf("%f",&c);

        calculaRaizes(a, b, c);

}

int calculaRaizes(float a, float b, float c){

    float valor, delta, x1, x2;
    double raiz = 0;
    delta = pow(b,2);
    delta = delta - (4 * a * c);

    if((delta <= 0)||(a == 0)){

        printf("\nValor inexistente\n");
    } else {

        raiz = sqrt(delta);
        x1 = -b + raiz;
        x2 = -b - raiz;

        x1 = x1/(2 * a);
        x2 = x2/(2 * a);
        printf("\nDelta: %.2f\n",delta);
        printf("\nValor de X': %.3f\nValor de X\": %.3f\n",x1 ,x2);
    }
}
