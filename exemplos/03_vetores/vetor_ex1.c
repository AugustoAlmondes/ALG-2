

    #include <stdio.h>

    int main(){
        int i, c, n[ 10 ];
c = 0;
        for ( i = 1; i < 11; i++ ) {
                n[i]= 0;
        }
        printf( "%s%13s\n", "Elemento", "Valor" );

        for ( i = 1; i < 11; i++) {
            printf( "%7d%13d\n", i, n[ i ] );
        }

        return 0;
    }
