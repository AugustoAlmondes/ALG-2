#include <stdio.h>

int main(){
	int cont, soma;
	cont = 1;
	soma = 0;
	while(cont <= 100){
		if( cont%2 == 0 ){
			soma += cont;
			printf("cont: %d\n", cont);
		}
		cont++; // cont = cont + 1
	}
	printf("Soma: %d", soma);
}
