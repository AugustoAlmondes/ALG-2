#include <stdio.h>
#define L 3
#define C 20

int main(){
    int i, j;
    char nomes[L][C];
    for(i=0; i < L; i++){
        scanf("%[^\n]s", nomes[i]);
        setbuf(stdin,NULL);
    }
    printf("\n");    

    //imprimir matriz
    for(i=0; i < L; i++){
	    printf("nome %i: ");
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
