#include <stdio.h>
 
int main() {

    double entrada;
    int cont100 = 0, cont50 = 0, cont20 = 0, cont10 = 0, cont5 = 0, cont2 = 0, cont1 = 0, 
    cont050 = 0, cont025 = 0, cont010 = 0, cont05 = 0, cont01 = 0, i ;

    scanf("%lf", & entrada);

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

    for(i = 0; entrada >= 0.50; i++){
        entrada = entrada - 0.50;
        cont050 ++;
    }

    for(i = 0; entrada >= 0.25; i++){
        entrada = entrada - 0.25;
        cont025 ++;
    }

    for(i = 0; entrada >= 0.10; i++){
        entrada = entrada - 0.10;
        cont010 ++;
    }

    for(i = 0; entrada >= 0.05; i++){
        entrada = entrada - 0.05;
        cont05 ++;
    }

    for(i = 0; entrada >= 0.001; i++){
        entrada = entrada - 0.01;
        cont01 ++;
    }    

    
    printf("NOTAS:\n%i nota(s) de R$ 100.00\n%i nota(s) de R$ 50.00\n%i nota(s) de R$ 20.00\n%i nota(s) de R$ 10.00\n%i nota(s) de R$ 5.00\n%i nota(s) de R$ 2.00\nMOEDAS:\n%i moeda(s) de R$ 1.00\n%i moeda(s) de R$ 0.50\n%i moeda(s) de R$ 0.25\n%i moeda(s) de R$ 0.10\n%i moeda(s) de R$ 0.05\n%i moeda(s) de R$ 0.01\n"
, cont100, cont50, cont20, cont10, cont5, cont2, cont1, cont050, cont025, cont010, cont05, cont01);
    
    return 0;
}