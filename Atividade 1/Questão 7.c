#include <stdio.h>

int main(){

int x, y, soma=0, mult = 1, a = 0;

scanf("%i",&x);
scanf("%i",&y);

for(int i = x; i <= y; i++){

    if(i%2 == 0){
        soma = i + soma;
    }
}
    for(int j = x; j <= y; j++){

    if(j%2 == 1){
        mult = j * mult;
    }
}

printf("\n%i",soma);
printf("\n%i",mult);
}
