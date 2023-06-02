#include<stdio.h>

int main(){

float desc;
float sala;
float valor;

scanf("%f",&sala);

    if (sala <= 600){

        desc = sala * 0;
        valor = sala - desc;

        printf("\n%.2f",desc);
        printf("\n%.2f",valor);

    } else

        if (sala <= 1200){

        desc = sala * 0.20;
        valor = sala - desc;

        printf("\n%.2f",desc);
        printf("\n%.2f",valor);

    } else

        if (sala <= 2000){

        desc = sala * 0.25;
        valor = sala - desc;

        printf("\n%.2f",desc);
        printf("\n%.2f",valor);

    } else

        if (sala > 2000){

        desc = sala * 0.30;
        valor = sala - desc;

        printf("\n%.2f",desc);
        printf("\n%.2f",valor);
}
}
