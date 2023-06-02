#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

int n;
char nome[20];

scanf("%[^\n]s", nome);

n = strlen(nome);

//printf("%i", n);

for(int i = 0; i < n; i++){

    nome[i] = nome[i] - 32;

    printf("%c ", nome[i]);

}
} 