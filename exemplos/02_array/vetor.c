#include <stdio.h>
#define MAX 5

int main(){
    int n;
    scanf("%i",&n);
    int x, i, v[n];
    
    printf("Digite uma sequência com %d números inteiros: ", n);
    for( i = 0; i < n; i++ )
        scanf("%d", &v[i]);
    
    for( i = 0; i < n; i++ )
        printf("%d", v[i]);
    
    printf("\n");
    
    for( i = n-1; i >= 0; i-- )
        printf("%d", v[i]);
    printf("\n");

    printf("Novamente\n");
    scanf("%i",&n);    
    printf("Digite uma sequência com %d números inteiros: ", n);
    for( i = 0; i < n; i++ )
        scanf("%d", &v[i]);
    
    for( i = 0; i < n; i++ )
        printf("%d", v[i]);
    
    printf("\n");
    
    for( i = n-1; i >= 0; i-- )
        printf("%d", v[i]);
    printf("\n");

    
    return 0;
}