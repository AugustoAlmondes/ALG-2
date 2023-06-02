#include <stdio.h>

int main(){

int x, z, d = 2, m, ma, mod;
int i;
scanf("%i",&z);
scanf("%i",&x);

if(z < x){
    m = z;
    ma = x;
} else {
    m = x;
    ma = z;
    //MDC = (m, ma)
    //MDC = (ma,m)

}
    for(int i = 0; m != 0; i++){
     mod = ma % m;
     ma = m;
     m = mod;
    d++;
    }
    printf("\nRepeticoes = %i",d);
    printf("\nMDC = %i",ma);
}
