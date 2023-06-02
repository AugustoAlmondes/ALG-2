#include<stdio.h>
#include<stdio.h>
float medir_distancia(float x1, float x2, float y1, float y2);

int main(){

    float x1,x2,y1,y2,result;

printf("Digiteo x1 e y1: ");
    scanf("%f %f",&x1, &y1);
printf("Digiteo x2 e y2: ");
    scanf("%f %f",&x2, &y2);

    //printf("x1= %f x2= %f y1= %f y2=  %f",x1,x2,y1,y2);

result = medir_distancia(x1,x2,y1,y2);

    printf("%.2f", result);
}

float medir_distancia(float x1,float x2,float y1,float y2){

    float resultado, e, d;

    e = x1 - y1;
    d = x2 - y2;

    resultado = pow(e,2) + pow(d,2);
    resultado = sqrt(resultado);
    return resultado;




}
