#include <stdio.h>
#define L 2
#define C 3
#define N 20

int main(){
    char nomes[L][C];
    int i, j, n[ L ][ C ];
    float soma, media[L];
    for(i=0; i < L; i++){
    	printf("Aluno %d: ", i+1);
        scanf("%[^\n]s", nomes[i]);
        setbuf(stdin,NULL);        
        for ( j = 0; j < C; j++ ) {
        	printf("Aluno %d nota %d: ", i+1, j+1);
            scanf("%d", &n[ i ][ j ]);
        }
        setbuf(stdin,NULL);
    }
    printf("\n");    
    
    for ( i = 0; i < L; i++ ) {
    	soma = 0.0;
        for ( j = 0; j < C; j++ ) {
            soma += n[i][j];
        }
        media[i] = soma/C;
    }    

    //imprimir matriz
    for(i=0; i < L; i++){
	    printf("Aluno %i: ", i+1);
    	for( j=0; j < N; j++ ){
	    	if( nomes[i][j] != ' '){
	        	printf("%c", nomes[i][j]);
			}else{
				printf(" %d", j);
				j=N;
			}
		}
		printf(" %0.2f\n", media[i]);
    }
    printf("\n");
}
