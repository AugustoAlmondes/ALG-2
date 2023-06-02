#include <stdio.h>

int main(){
  int idade;
  printf ("Digite um numero: ");
  scanf ("%d", &idade);
  if (idade >= 18){
	 printf ("de maior\n");  	
  }
  else{
     printf ("de menor\n");  	
  }

  return 0;
}

