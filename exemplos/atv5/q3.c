// 3. Leia dois números inteiros A e B, e faça calcule 𝐴 x 𝐵, utilizando multiplicações.

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, resultado=1;

    printf("Digite a base: ");
    scanf("%d", &a);
    printf("Digite o exponte:");
    scanf("%d", &b);

    while(b > 0 ){
        resultado = resultado * a;
        b--;
    }

    printf("Resultado: %d\n", resultado);
    return 0;
}
