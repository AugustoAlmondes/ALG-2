#include<stdio.h>

int main(){

float preco;
float valor;
float valor2;

printf("Digite o valor: ");

scanf("%f",&preco);

        if(preco < 20){
            valor = preco * 0.45;
            valor = valor + preco;
            printf("%.2f",valor);
        }
        else

        if(preco >= 20){
            valor = preco * 0.30;
            valor = valor + preco;
            printf("%.2f",valor);
        }
}
