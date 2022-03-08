#include <stdio.h>

int main() {

    int entrada ,cont100 = 0, cont50 = 0, cont20 = 0, cont10 = 0, cont5 = 0, cont2 = 0, cont1 = 0, i, exibicao ;

    scanf("%i", & entrada);

    exibicao = entrada;

    for(i = 0; entrada >= 100; i++){
        entrada = entrada - 100;
        cont100 ++;
    }

    for(i = 0; entrada >= 50; i++){
        entrada = entrada - 50;
        cont50 ++;
    }

    for(i = 0; entrada >= 20; i++){
        entrada = entrada - 20;
        cont20 ++;
    }

    for(i = 0; entrada >= 10; i++){
        entrada = entrada - 10;
        cont10 ++;
    }

    for(i = 0; entrada >= 5; i++){
        entrada = entrada - 5;
        cont5 ++;
    }

    for(i = 0; entrada >= 2; i++){
        entrada = entrada - 2;
        cont2 ++;
    }

    for(i = 0; entrada >= 1; i++){
        entrada = entrada - 1;
        cont1 ++;
    }
    
    printf("%i\n%i nota(s) de R$ 100,00\n%i nota(s) de R$ 50,00\n%i nota(s) de R$ 20,00\n%i nota(s) de R$ 10,00\n%i nota(s) de R$ 5,00\n%i nota(s) de R$ 2,00\n%i nota(s) de R$ 1,00\n"
, exibicao, cont100, cont50, cont20, cont10, cont5, cont2, cont1);

    return 0;
}