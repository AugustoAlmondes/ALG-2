#include <stdio.h>

int main(){
    int soma = 0, a = 1;
    do{
        printf("Digite um numero maior que zero: ");
        scanf("%d", &a);
    	soma = soma + a;
    }while ( a != 0 );
    printf("\n A soma eh %d.", soma);
    return 0;
}

