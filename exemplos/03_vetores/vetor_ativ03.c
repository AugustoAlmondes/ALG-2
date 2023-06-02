/* Dado os vetores p e a que representam,
respectivamente, o peso e a altura de 30 pessoas,
calcular o IMC para cada pessoa, sabendo que
IMC = p / (a * a) */

#include <stdio.h>
#define MAX 2

int main(){
	float p[MAX], a[MAX], IMC[MAX];
	int i;
	
	/*leituras*/
	for(i=0;i<MAX;i++){
		printf("Pessoa: %d\n", i);
		printf("Peso (kg): ");
		scanf("%f",&p[i]); //peso pessoa i
		printf("Altura (metros): ");		
		scanf("%f",&a[i]); //altura pessoa i
	}
	
	/*calcular imc*/
	for(i=0;i<MAX;i++){
		IMC[i]=p[i]/(a[i]*a[i]);
	}
	printf("\n");
	
	//exibindo terceiro vetor	
	for(i=0;i<MAX;i++){
		printf("IMC da pessoa %d: %.2f\n", i, IMC[i]);
	}
	
	return 0;
}
