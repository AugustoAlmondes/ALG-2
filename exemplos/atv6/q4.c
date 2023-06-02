#include<stdio.h>


 // 0x001 0x002 0x003 ... 0x0010

void main(){
    int v[10], n=0;

    printf("Elemento      Valor\n");
    for (int i = 0; i < 10; i++){
        v[i] = n+2;
        printf("%9d     %d\n", i, v[i]);
        n+=2;
    }
}