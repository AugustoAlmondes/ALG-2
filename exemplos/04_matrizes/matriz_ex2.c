#include <stdio.h>
#define L 5
#define C 50

int main(){
    int i, j;
    char nomes[L][C];
    for(i=0; i < L; i++){
    	printf("Aluno %d: ", i+1);
        scanf("%[^\n]s", nomes[i]);
        setbuf(stdin,NULL);
    }
    printf("\n");    

    //imprimir matriz
    for(i=0; i < L; i++){
	    printf("Aluno %i: ", i+1);
    	for( j=0; j < C; j++ ){
	    	if( nomes[i][j] != ' '){
	        	printf("%c", nomes[i][j]);
			}else{
				j=C;
			}
		}
		printf("\n");
    }
    printf("\n");
}
