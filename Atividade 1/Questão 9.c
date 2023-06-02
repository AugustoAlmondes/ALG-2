#include <stdio.h>

int main(){

int x, y;

scanf("%i",&x);
scanf("%i",&y);

for(int i = 0; i < y; i++){
    printf(" *");
}
printf("\n");
    for(int i = 3; i <= y; i++){
        printf(" *");

        for(int j = 1; j < x; j++){
        printf("  ");

        }
        printf(" *");
        printf("\n");

    }
    for(int i = 0; i < y; i++){
    printf(" *");
}

}
