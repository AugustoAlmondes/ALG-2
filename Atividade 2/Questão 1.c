#include<stdio.h>

int main(){

int vet[11];
int nota[11];
int i = 0;
int cont = 0;

for(int h = 0; h <= 11; h++){

    vet[h] = 0;

    nota[h] = 0;

}

    while(nota[i]!= -1){
i++;
        scanf("%i", &nota[i]);

    switch (nota[i]){

    case 0: vet[0] = vet[0] + 1;
    break;
    case 1: vet[1] = vet[1] + 1;
    break;
    case 2: vet[2] = vet[2] + 1;
    break;
    case 3: vet[3] = vet[3] + 1;
    break;
    case 4: vet[4] = vet[4] + 1;
    break;
    case 5: vet[5] = vet[5] + 1;
    break;
    case 6: vet[6] = vet[6] + 1;
    break;
    case 7: vet[7] = vet[7] + 1;
    break;
    case 8: vet[8] = vet[8] + 1;
    break;
    case 9: vet[9] = vet[9] + 1;
    break;
    case 10: vet[10] = vet[10] + 1;
    break;
    }
}

for(int j = 0; j <= 10; j++){

    printf("%i %i\n", cont, vet[j]);
    cont++;
}

return 0;
}
