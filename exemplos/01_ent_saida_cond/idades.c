#include <stdio.h>

int main(){
	int p1, p2;
	printf("Digite a idade da primeira pessoa: ");
	scanf("%d", &p1);
	printf("\nDigite a idade da segunda pessoa: ");
	scanf("%d", &p2);
	if(p1>p2){
		printf("A primeira pessoa é mais velha");
		printf("A segunda pessoa eh mais nova");
	}else{
		if(p1==p2){
			printf("As duas pessoas tem a mesma idade");
		}else{
			printf("A segunda pessoa é mais velha");
			printf("A primeira pessoa eh mais nova");
		}
	}
	return 0;
}
