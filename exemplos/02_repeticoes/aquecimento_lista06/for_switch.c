#include <stdio.h>

#define N 2

void main(){
	int i, classe, c1, c2, c3, c4;
	float peso, s1, s2, s3, s4;
	c1 = c2 = c3 = c4 = 0;
	s1 = s2 = s3 = s4 = 0.0;
	for(i=1; i<=N; i++){
		printf("Informe a classe (1-4) e o peso: ");
		scanf("%d %f", &classe, &peso);
		switch(classe){
			case 1:
				c1++;
				s1+=peso;
				break;
			case 2:
				c2++;
				s2+=peso;				
				break;
			case 3:
				c3++;
				s3+=peso;				
				break;
			case 4:
				c4++;
				s4+=peso;
				break;
			default:
				printf("Classe invalida\n");
		}
	}
	if(c1)
		printf("Classe %d: %f\n", 1, s1/c1);
	if(c2)
		printf("Classe %d: %f\n", 2, s2/c2);
	if(c3)
		printf("Classe %d: %f\n", 3, s3/c3);
	if(c4)
		printf("Classe %d: %f\n", 4, s4/c4);
}
