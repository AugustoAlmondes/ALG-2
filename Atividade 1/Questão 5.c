#include <stdio.h>

int main(){

int h1, h2, m1, m2;
int hv, hn, mv, mn;
int produto, soma;

scanf("%i",&h1);
scanf("%i",&h2);
scanf("%i",&m1);
scanf("%i",&m2);

    if(h1 > h2){

        hv = h1;
        hn = h2;

    } else {

        hv = h2;
        hn = h1;

    }
        if(m1 > m2){

        mv = m1;
        mn = m2;

    } else {

        mv = m2;
        mn = m1;

    }

    soma = hv + mn;
    produto = hn * mv;

    printf("\n%i", soma);
    printf("\n%i", produto);
}
