#include <stdio.h>

int main (){

	int i = 9;
	
	do{
	     i++;
	     printf("%d\n", i);
	}while((i % 5 != 0) || ( i % 3 != 0));
	
	printf("%d\n",i);

return 0;
}
