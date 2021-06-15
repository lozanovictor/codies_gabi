#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double main() {
    double raio=0;
    double area=0;
    double pi=3.14;
    printf("Calculo da area de um circulo\n");
    printf("Entre o valor do raio:\n");
    while (scanf("%f", &raio)<=0){
        printf("Valor invalido, por favor insira um valor valido:\n");
    }
    area=(raio*raio)*pi;
    printf("Area do circulo: %f", &area);
    return 0;
}
