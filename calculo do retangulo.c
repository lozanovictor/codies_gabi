#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double main() {
    float largura=0;
    float comprimento=0;
    float area=0;
    printf("Calculo da area de um retangulo\n");
    printf("Entre a largura:\n");
    scanf("%f", &largura);
    while (largura<=0){
        printf("Valor invalido, impossivel de calcular, por favor insira um valor valido:\n");
        scanf("%f", &largura);
    }
    printf("Entre a comprimento:\n");
    scanf("%f", &comprimento);
    while (comprimento<=0){
        printf("Valor invalido, impossivel de calcular, por favor insira um valor valido:\n");
        scanf("%f", &comprimento);
    }
    area = largura * comprimento;
    printf("Area do retangulo: %f", area);
    return 0;
}
