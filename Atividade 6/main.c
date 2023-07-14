#include <stdio.h>
#include <stdlib.h>
#include "MyString.h"

int main()
{

    char s2[] = {"Augusto"};

    char s1[] = {"Almondes"};

    char res[100];
   // int n;

  // scanf("%i",&n);

   mystrncat(s2,s1);

    printf("%s", s2);

}


