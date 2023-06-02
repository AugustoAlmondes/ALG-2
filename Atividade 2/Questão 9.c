#include <stdio.h>
#include <string.h>

int main ()

{   int n, i, j;
    char D, numero[200];
    
    scanf("%c", &D);
    scanf("%s", numero);
    while (D != '0')
    {
        if (D != '0')
        {
            n = strlen(numero);
            for (i = 0; i < n; i++)
            {
                if (numero[i] == D)
                {
                    for (j = i; j < n; j++){
                        numero[j] = numero[j+1];
                    numero[n-1] = 0;
                    n--;
                    i--;
                }
                }
            }
            for (i = 0; i < n-1; i++)
            {
                if (numero[i] == '0')
                {
                    for (j = i; j < n; j++)
                    {
                        numero[j] = numero[j+1];
                    numero[n-1] = 0;
                    n--;
                    i--;
                    }
                }
                else
                    break;
            }
            if (n == 0)
            {
                numero[0] = '0';

                numero[1] = '\0';
            }

            printf("%s\n", numero);
            scanf(" %c", &D);
            scanf("%s", numero);
        }
    }
    return 0;
}
