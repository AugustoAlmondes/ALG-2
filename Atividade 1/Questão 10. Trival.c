#include<stdio.h>

int main(){

int x, z, m, a= 0;

scanf("%i",&x);
scanf("%i",&z);

if(z < x){
    m = z;
} else {
    m = x;
}

//printf("menor %i", m);

while(x % m!=0 || z% m!=0){

m--;
a++;
}
printf("\nMDC = %i",m);
printf("\nRepeticoes = %i",a);
}
