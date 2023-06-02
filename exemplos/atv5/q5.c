// 5. Escreva o menu abaixo na saída principal do computador. A seguir, leia dois números e um 
// caractere.  O  caractere  indica  o  que  processar  com  os  dois  números.  Siga  com  as  leituras  e 
// processamentos, até quando for digitado a opção D:
// -------------------------------------------------- 
// MENU 
// -------------------------------------------------- 
// A – Maior Número  
// B – Menor Número 
// C – Média Aritmética 
// D – Finalizar

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	char op='@';
	int a, b;
	float media;
		printf("Digite o valor de A: ");
		scanf("%d", &a);
		printf("Digite o valor de B: ");
		scanf("%d", &b);
		do{
			for(int i=0;i<20;i++) printf("-");
			printf("\nMENU\n");
			for(int i=0;i<20;i++) printf("-");

			printf("\nA – Maior Número\nB – Menor Número\nC – Média Aritmética\nD – Finalizar\n");

			printf("Escolha a opcao: ");
			scanf(" %c", &op);

			if(op == 'a' || op == 'A'){
				if (a > b){
					printf("%d é maior\n", a);
				} else if (a < b){
					printf("%d é maior\n", b);
				}
			} else if(op == 'b' || op == 'B'){
				if (a > b){
					printf("%d é menor\n", b);
				} else if (a < b){
					printf("%d é menor\n", a);
				} else {
					printf("Valores iguais\n");
				}
			} else if(op == 'c' || op == 'C'){
				media = (a+b);
				printf("Média: %.2f\n", (media/2));
			} else if(op == 'd' || op == 'D'){
				break;
				printf("Fim do programa.\n");
			} else{
				printf("Opcao invalida!\n");
			}
	}while(op != 'D' || op != 'd');
	return 0;
}
