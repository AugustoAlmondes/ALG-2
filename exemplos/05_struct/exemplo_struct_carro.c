#include <stdio.h>

struct Carro{
	char nome[20];
	char montadora[10];
	int autonomia;
};

void main(){
	struct Carro carro1, carro2;
	printf("Informe o nome do carro 1: ");
	scanf("%s", carro1.nome);
	setbuf(stdin, NULL);
	printf("Informe a montadora do carro 1: ");
	scanf("%s", carro1.montadora);
	setbuf(stdin, NULL);
	printf("Informe a autonomia do carro 1: ");
	scanf("%i", &carro1.autonomia);
	setbuf(stdin, NULL);

	printf("Informe o nome do carro 2: ");
	scanf("%s", carro2.nome);
	setbuf(stdin, NULL);
	printf("Informe a montadora do carro 2: ");
	scanf("%s", carro2.montadora);
	setbuf(stdin, NULL);
	printf("Informe a autonomia do carro 2: ");
	scanf("%i", &carro2.autonomia);
	setbuf(stdin, NULL);
	
	if( carro1.autonomia > carro2.autonomia ){
		printf("Maior autonomia: %s\n", carro1.nome);
	}else{
		printf("Maior autonomia: %s\n", carro2.nome);
	}
	
}
