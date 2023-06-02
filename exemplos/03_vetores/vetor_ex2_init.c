

    #include <stdio.h>

    int main(){
        char c[] = "Mike Tyson";
        int i, tam;
        
        printf("%s\n", c);
        
        tam = 0;
        while( c[tam] != ' ' ){
            printf("%c", c[tam]);
            tam++;
        }
        printf("\n");
        
        for( i = tam-1; i >= 0; i-- )
            printf("%c", c[i]);
        printf("\n");
        
        return 0;
    }
