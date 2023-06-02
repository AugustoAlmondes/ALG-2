#include <stdio.h>

struct funcionario{
    char nome[80];
    char cargo[10];
    float salario;
};

int main(){
//      struct funcionario func = {"Marcos da Silva", "Vendedor", 2000.00};
   for(int i = 0; i < 3; i++){
    struct funcionario func[i];
    printf("Nome:");
    scanf("%[^\n]s", func[i].nome);
    printf("Cargo:");
    scanf("%s", func[i].cargo);
    printf("Salario:");
    scanf("%f", &func[i].salario);
    printf("Funcionario:\n");
   }
     for(int i = 0; i < 3; i++){
    printf("Nome: %s\n", func[i].nome);
    printf("Cargo: %s\n", func.cargo);
    printf("Salario: %.2f\n", func.salario);
     }
    return 0;
}

