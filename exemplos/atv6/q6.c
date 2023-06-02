#include<stdio.h>

#define MAX 12

void main() {
    int v[MAX], x, y, soma;

    for (int i = 0; i < MAX; i++){
        scanf("%d", &v[i]);
    }

    scanf("%d %d", &x, &y);

    soma = v[x] + v[y];

    printf("%d\n", soma);
    
}