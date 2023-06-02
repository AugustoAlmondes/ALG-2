#include<stdio.h>

void somaComplexo( float rz1, float iz1, float rz2, float iz2, float *rz3, float *iz3 );

int main()
{
    float rz1, rz2, iz1, iz2, rz3, iz3;
   do {
        scanf("%f",&rz1);

        if(rz1 == 0){
            break;
        }

        scanf("%f %f %f",&iz1, &rz2, &iz2);

       // printf("%.2f %.2f %.2f %.2f\n",rz1, rz2, iz1, iz2);

        somaComplexo(rz1,iz1,rz2,iz2,&rz3,&iz3);
        printf("%.1f + %.1fi", rz3, iz3);
        printf("\n");

    }while(rz1 != 0);

}

void somaComplexo( float rz1, float iz1, float rz2, float iz2, float *rz3, float *iz3 )
{

    *rz3 = rz1 + rz2;
    *iz3 = iz1 + iz2;


}
