#include <stdio.h>
#define L 2
#define C 2

int main( ){
    int i, j;
    float n[ L ][ C ], soma, media[L];
    for ( i = 0; i < L; i++ ) {
        for ( j = 0; j < C; j++ ) {
        	printf("Aluno %d nota %d: ", i+1, j+1);
            scanf("%f", &n[ i ][ j ]);
        }
    }

    for ( i = 0; i < L; i++ ) {
    	soma = 0.0;
        for ( j = 0; j < C; j++ ) {
            soma += n[i][j];
        }
        media[i] = soma/C;
    }

    printf("Media Notas\n");
    for ( i = 0; i < L; i++ ) {
        printf("Aluno %d: %0.2f\n",i+1, media[i] );
    }

    return 0;
}
