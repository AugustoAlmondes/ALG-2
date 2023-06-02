#include <stdio.h>

int main(){
float maca;
float valor;

scanf("%f",&maca);

if(maca < 12){

    valor = maca * 1.30;

    printf("\nR$ %.2f",valor);

}
if(maca >= 12){

    valor = maca * 1.00;

    printf("\nR$ %.2f",valor);

}

}
