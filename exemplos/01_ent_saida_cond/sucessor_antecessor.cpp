#include <stdio.h>

int main(){
	int num1, num2, maior, menor;
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	if( num1 < num2){
		menor = num1;
		maior = num2;
	}else{
		menor = num2;
		maior = num1;
	}
	printf("Resultado: %d", menor*maior+menor);
}
