#include <stdio.h>

int main(){
  int num;
  printf("Digite um numero: ");
  scanf("%d", &num);
  printf("Sucessor de %d: %d\n", num, num + 1);
  printf("Antecessor de %d: %d\n", num, num - 1);
  return 0;
}
