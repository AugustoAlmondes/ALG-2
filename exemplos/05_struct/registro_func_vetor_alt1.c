

        #include <stdio.h>

        struct funcionario{
                char nome[80];
                char cargo[10];
                float salario;
        };
        
        typedef struct funcionario Funcionario;

        int main(){
                Funcionario empresaA[10];
                int i, num_func;
                
                num_func = 2;
                for( i=0; i<num_func; i++ ){
                    setbuf(stdin,NULL);
                    printf("Nome:");
                    scanf("%[^\n]s", empresaA[i].nome);        
                    printf("Cargo:");
                    setbuf(stdin,NULL);
                    scanf("%[^\n]s", empresaA[i].cargo);
                    printf("Salario:");
                    setbuf(stdin,NULL);        
                    scanf("%f", &empresaA[i].salario);
                }
                
                printf("Funcionarios:\n");
                for( i=0; i<num_func; i++ ){              
                    printf("Nome: %s\n", empresaA[i].nome);
                    printf("Cargo: %s\n", empresaA[i].cargo);
                    printf("Salario: %.2f\n", empresaA[i].salario);   
                }
                return 0;
        }

        
