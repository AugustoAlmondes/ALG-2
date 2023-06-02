#include<stdio.h>

void main() {
    char palavra[30];

    scanf("%s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++){
        if (palavra[i] >= 97 && palavra[i] <= 122){
            printf("%c", palavra[i]-32);
        }else{
            printf("%c", palavra[i]);
        }
    }
    printf("\n");
}
