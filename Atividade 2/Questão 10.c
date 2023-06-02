#include <stdio.h>

int main()
{
    int i,j=0,t1,t2;

    char Q[8],S[4],F[2];

    char ti[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'};

    printf("Oitavas\n");
    for(i=0 ; i<16 ; i+=2)
    {
        scanf("%d %d",&t1,&t2);
        if(t1 > t2)
        {
            Q[j] = ti[i];
            j++;
        }
        else if(t1 < t2)
        {
            Q[j] = ti[i+1];
            j++;
        }
    }
    j=0;
    printf("Quartas\n");
    for(i=0 ; i<8 ; i+=2)
    {
        scanf("%d %d",&t1,&t2);
        if(t1 > t2)
        {
            S[j] = Q[i];
            j++;
        }
        else if(t1 < t2)
        {
            S[j] = Q[i+1];
            j++;
        }
    }
    j=0;
    printf("Semi\n");
    for(i=0 ; i<4 ; i+=2)
    {
        scanf("%d %d",&t1,&t2);
        if(t1 > t2)
        {
            F[j] = S[i];
            j++;
        }
        else if(t1 < t2)
        {
            F[j] = S[i+1];
            j++;
        }
    }
    printf("Final\n");
    scanf("%d %d",&t1,&t2);
    if(t1 > t2)
    {
        printf("%c",F[0]);
    }
    else if(t1 < t2)
    {
        printf("%c",F[1]);
    }
}
