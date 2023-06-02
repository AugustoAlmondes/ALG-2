// 1. Leia um número inteiro maior que zero, e escreva cada algarismo desse número 
// separadamente, indicando se é par ou ímpar. Inicie dos algarismos da direita (unidades) para a 
// esquerda.

#include<stdio.h>

int main(int argc, char const *argv[])
{
        int n, d;

        scanf("%d", &n);

        while(n > 0){
                d = n%10;
                if(d%2==0) {
                        printf("Valor %d = Par\n", d);
                } else{
                        printf("Valor %d = Impar\n", d);
                }
                n = n/10;
        }
        return 0;
}
