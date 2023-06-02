#include <stdio.h>

int main(){

int x, y;

scanf("%i",&x);
scanf("%i",&y);

for(int i = 1; i < y; i++){
    printf("\n*");
    for(int h = 0; h < x; h++){
        printf("*");
    }
}
}
