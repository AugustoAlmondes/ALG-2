#include<stdio.h>

void maiusculo(char *sPrt);

main(void)
{
    char palavra[30];

while(palavra[0] != '0'){
        gets(palavra);

        if(palavra[0] == '0')
        {
            break;
        }
        maiusculo(palavra);

}
}

void maiusculo(char *sPrt)
{
    int i;
    for (i = 0; sPrt[i] != '\0'; i++)
    {

        if (sPrt[i] >= 97 && sPrt[i] <= 122)
        {
            printf("%c",sPrt[i]-32);
        }
        else
        {
            printf("%c",sPrt[i]);
        }
    }
printf("\n");
}
