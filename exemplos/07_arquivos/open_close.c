#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE *fPtr;
    fPtr = fopen("teste.txt","a");
    if( fPtr == NULL ){
        fprintf(stderr,"Erro na abertura de arquivo!\n");
        exit(1);
    }else{
        printf("Arquivo aberto com sucesso!\n");
    }
    fclose(fPtr);
}
            
