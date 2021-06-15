#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double main() {
    float raio=0;
    float area=0;
    float pi=3.14;
    printf("Calculo da area de um circulo\n");
    printf("Entre o valor do raio:\n");
    scanf("%f", &raio);
    while (raio<=0){
        printf("Valor invalido, por favor insira um valor valido:\n");
        scanf("%f", &raio);
    }
    area=(raio*raio)*pi;
    printf("Area do circulo: %f", area);
    return 0;
}
