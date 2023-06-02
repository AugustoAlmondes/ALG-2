#include <stdio.h>

int main(){
  int horas;
  printf("Digite o numero de horas: ");
  scanf("%d", &horas);
  printf("Minutos %d\t", horas*60);
  printf("Segundos %d\n", horas*3600);
  return 0;
}
