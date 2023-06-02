#include <stdio.h>

int main(){
	float contM, contF, qtdM, qtdF, qtd;
	char sexo;
	contM = contF =	qtdM = qtdF = 0.0;	
	do{
		printf("Informe o sexo: ");
		scanf("%c", &sexo);
		if( sexo != '@'){
			printf("Informe a quantidade: ");
			scanf("%f", &qtd);
			if( sexo == 'f' ){
				qtdF += qtd;
				contF++;
			}
			if( sexo == 'm' ){
				qtdM += qtd;
				contM++;
			}
		}
		setbuf(stdin,NULL);
	}while(sexo != '@');
	if(contF)
		printf("Femino: %.2f\n", qtdF/contF);
	if(contM)
		printf("Masculino: %.2f\n", qtdM/contM);
}
