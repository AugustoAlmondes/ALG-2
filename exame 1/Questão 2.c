#include <stdio.h>
#include <math.h>

struct ponto{

    double x, y;

};

typedef struct ponto Ponto;

double distancia(Ponto p1, Ponto p2);

int main(){

    Ponto p1, p2;

    scanf("%lf %lf", &p1.x, &p1.y);

        scanf("%lf %lf", &p2.x, &p2.y);

        printf("%.4lf\n", distancia(p1, p2));


}

double distancia(Ponto p1, Ponto p2){
double result, result2;

        result = pow(p2.x - p1.x, 2);
        result2 = pow(p2.y - p1.y, 2);
        result = sqrt(result + result2);

        return result;
}
