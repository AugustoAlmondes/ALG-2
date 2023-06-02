#include<stdio.h>

void main(){
    int n, t, a=0, b=1;
    unsigned long int fib = 0;

    scanf("%d", &t);

    for (int i = 0; i < t; i++){
        scanf("%d", &n);

        for (int i = 0; i < n-1; i++){
            fib = a + b;
            a = b;
            b = fib;
        }
        printf("Fib(%d) = %ld\n", n, fib);
        fib=0;
        a=0;
        b=1;
    }
}
