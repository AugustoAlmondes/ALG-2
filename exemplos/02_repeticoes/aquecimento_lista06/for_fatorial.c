#include <stdio.h>

void main(){
	int i, fat, n;
	scanf("%d", &n);
	fat = 1;
	for(i=1; i<=n; i++){
		fat *= i;
	}
	printf("Fatorial %d: %d", n, fat);
}
