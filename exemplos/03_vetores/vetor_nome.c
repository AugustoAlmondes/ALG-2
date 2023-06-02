#include <stdio.h>

void main(){
	char nomeCompleto[50];
	int i;
	scanf("%[^\n]s", nomeCompleto);
	i = 0;
	while(nomeCompleto[i] != ' '){
		printf("%c", nomeCompleto[i]);
		i++;
	}
	printf("\n");
	printf("%s\n", nomeCompleto);
}
