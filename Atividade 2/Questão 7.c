#include <stdio.h>

int main(){

int vetor2[10], n;

n = 0;

  printf( "%s%13s\n", "Elemento", "Valor" );

for(int i = 0; i < 10; i++){

    vetor2[i] = n+ 2;

    printf("%4i %15i\n",i, vetor2[i]);
    n+=2;
}

return 0;
}
