/*Faça um algoritmo para ler uma palavra e colocar
essa palavra em capitular

https://pt.wikipedia.org/wiki/ASCII */

#include <stdio.h>
#define MAX 100

int main() {
	char palavra[MAX];
	int i = 0;
	scanf("%[^\n]s", palavra);
	while (palavra[i] != '\0'){
		if (palavra[i] >= 97 && palavra[i] <= 122){
			palavra[i] = palavra[i] - 32;
		}
		i++;
	}
	printf("%s\n", palavra);
	return 0;
}

