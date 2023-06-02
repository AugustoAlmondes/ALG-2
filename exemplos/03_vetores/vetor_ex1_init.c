

        #include <stdio.h>

        int main(){
            int v[] = {32,27,64,11,7};
            int max, i;
            max = 5;
            
            for( i = 0; i < max; i++ )
                printf("%d ", v[i]);
            printf("\n");    
            
            for( i = max-1; i >= 0; i-- )
                printf("%d ", v[i]);
            printf("\n");
            
            return 0;
        }
