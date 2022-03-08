#include <stdio.h>

int main(){

    int cod, qtd;
    float preco, total;

    scanf("%i", &cod);
    scanf("%i", &qtd);

    switch(cod){
        case 1:
            total = 4.00 * qtd;
        break;

        case 2:
            total = 4.50 * qtd;
        break;

        case 3:
            total = 5.00 * qtd;
        break;

        case 4:
            total = 2.00 * qtd;
        break;

        case 5:
            total = 1.50 * qtd;
        break;

        default:
            printf("Insira um número correto!");   
    }

    printf("Total: R$ %.2f\n", total);

    return 0;
}