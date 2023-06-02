#include <stdio.h>
#define DIMENSAO 2

int main(){
    int iLinha, iColuna;
    int aMatriz [DIMENSAO][DIMENSAO];
    int soma;
    for (iLinha=0; iLinha < DIMENSAO; iLinha++){
        for (iColuna=0; iColuna < DIMENSAO; iColuna++){
            printf ("Entre item %d %d:", iLinha + 1, iColuna + 1);
            scanf ("%d", &aMatriz[iLinha][iColuna]);
        }
    }
    printf("\n");    

    //imprimir matriz
    printf ("Matriz:\n");
    for (iLinha=0; iLinha < DIMENSAO; iLinha++){
        for (iColuna=0; iColuna < DIMENSAO; iColuna++){
            printf ("%d ", aMatriz[iLinha][iColuna]);
        }
        printf ("\n");
    }    
    printf("\n");    
    
    //somar linhas
    for (iLinha=0; iLinha < DIMENSAO; iLinha++){
        soma = 0;        
        for (iColuna=0; iColuna < DIMENSAO; iColuna++){
            soma += aMatriz[iColuna][iLinha];
        }
        printf("Soma da linha %d: %d\n", iLinha + 1, soma);
    }
    printf("\n");
    
    //somar colunas
    soma = 0;
    for (iColuna=0; iColuna < DIMENSAO; iColuna++){
        for (iLinha=0; iLinha < DIMENSAO; iLinha++){
            soma += aMatriz[iLinha][iColuna];
        }
        printf("Soma da coluna %d: %d\n", iColuna + 1, soma);
        soma = 0;
    }

    
}