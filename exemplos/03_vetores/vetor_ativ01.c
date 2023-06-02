/*Faça um algoritmo para ler uma palavra e escrever
essa palavra no modo “cebolinha”.*/

#include <stdio.h>
#define MAX 100

int main(){
	char nome[MAX];
	int i;
	scanf("%[^\n]s", nome);
	i=0;
	while(nome[i] != '\0'){
		if(nome[i]=='r'){
			nome[i]='l';
		}
		if(nome[i]=='R'){
			nome[i]='L';
		}		
		i++;
	}
	printf("%s",nome);
	return 0;
}


