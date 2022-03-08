#include <stdio.h>

int main() {

    int A, B, C, D, soma1, soma2, resto;

    scanf("%i %i %i %i", &A, &B, &C, &D);

    soma1 = A + B;
    soma2 = C + D;
    resto = A % 2;    

    if(B > C && D > A && C > 0 && D > 0 && soma2 > soma1 && resto == 0){
        printf("Valores aceitos\n");
    }else{
        printf("Valores nao aceitos\n");
    }

    return 0;
}