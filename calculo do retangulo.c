#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double main() {
    double largura=0;
    double comprimento=0;
    double area=0;
    printf("Calculo da area de um retangulo\n");
    printf("Entre a largura:\n");
    while (scanf("%f", &largura)<=0){
        printf("Valor invalido, impossivel de calcular, por favor insira um valor valido:\n");
    }
    printf("Entre a comprimento:\n");
    while (scanf("%f", &comprimento)<=0){
        printf("Valor invalido, impossivel de calcular, por favor insira um valor valido:\n");
    }
    area = largura * comprimento;
    printf("Area do retangulo: %f", &area);
    return 0;
}
