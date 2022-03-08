#include <stdio.h>
#include <math.h>

int main() {

    double A, B, C,bhaskara, raiz1, raiz2, raizBase;

    scanf("%lf %lf %lf", &A, &B, &C);

    bhaskara = (B*B) - 4 * A * C;
    raizBase = sqrt(bhaskara);
    raiz1 = (-B + raizBase) / (2 * A);
    raiz2 = (-B - raizBase) / (2 * A);

    if(bhaskara < 0 || A == 0){
        printf("Impossivel calcular\n");
    } else{
        printf("R1 = %.5lf\nR2 = %.5lf\n", raiz1, raiz2);
    }    

    return 0;
}