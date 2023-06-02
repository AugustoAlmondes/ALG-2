#include <stdio.h>
#define m 3
#define n 2
#define p 2

int main()
{

    int A[m][n];  
    int B[n][p];
    int C[m][p];

    printf("Primeira Matriz: \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j <2; j++)
        {
            C[i][j] = 0;
            scanf("%i", &A[i][j]);

        }
    }
    printf("Segunda Matriz: \n");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j <2; j++)
        {

            scanf("%i", &B[i][j]);

        }
    }
for (int i=0; i<3; i++ ){

     for ( int j=0; j<2; j++ ){

          for (int  k=0; k<2; k++ ){

            C[i][j] = C[i][j] + A[i][k] * B[k][j];
        }
    }
}

     for ( int i=0; i<m; i++ ){

          for (int  j=0; j<n; j++ ){

            printf("%i ", C[i][j]);

        }
        printf("\n");
    }
}



