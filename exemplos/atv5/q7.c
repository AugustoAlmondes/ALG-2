// 7.  Fazer  um  algoritmo  que  exiba  os  20  primeiros  termos  da  série  de  FIBONACCI.  A  série  de 
// FIBONACCI  começa  com  os  números 1 e  1,  os  restantes  são  calculados  a  partir  da  soma  dos 
// dois anteriores a ele. Exemplo: 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a=1, b=1, c, qtd;

    scanf("%d", &a);
    scanf("%d", &b);

    scanf("%d", &qtd);

    for (int i = 3; i <= qtd; i++){
        c = a+b;
        printf("%d, ", c);
        a=b;
        b=c;
    }

    return 0;
}
