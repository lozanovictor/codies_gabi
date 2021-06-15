#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int menu;
    double raio, largura, comprimento, area;
    double pi=3.14;
    printf("Menu\n\n");
    printf("Options:\n");
    printf("1 - Calculate the area of the rectangle\n");
    printf("2 - Calculate the area of the circle\n");
    printf("0 - Exit\n");
    do{
        scanf("%d", &menu);
        if (menu=1){
            printf("Calculating the area of the rectangle\n");
            printf("Input the width:\n");
                while (scanf("%f", &largura)<=0){
                    printf("Invalid input, please input a valid value:\n");
                }
            printf("Input the length:\n");
                while (scanf("%f", &comprimento)<=0){
                    printf("Invalid input, please input a valid value:\n");
                }
            area=largura*comprimento;
            printf("Calculatinig the area of the rectangle: %f\n\n\n", &area);

            printf("Menu\n\n");
            printf("Options:\n");
            printf("1 - Calculate the area of the rectangle\n");
            printf("2 - Calculate the area of the circle\n");
            printf("0 - Exit\n");
            scanf("%d", &menu);
            printf("\n\n\n\n");
        } else {
            if (menu=2){
                printf("Calculating the area of the circle\n");
                printf("Input the radius of the circle:\n");
                while (scanf("%f", &raio)<=0){
                    printf("Invalid input, please input a valid value:\n");
                }
                area=(raio*raio)*pi;
                printf("Area of the circle: %f", &area);

                printf("Menu\n\n");
                printf("Options:\n");
                printf("1 - Calculate the area of the rectangle\n");
                printf("2 - Calculate the area of the circle\n");
                printf("0 - Exit\n");
                scanf("%d", &menu);
                printf("\n\n\n\n");
            }
            else {
                if (menu >=3 || menu < 0)
                printf("Invalid option, please try again:\n");
                printf("Options:\n");
                printf("1 - Calculate the area of the rectangle\n");
                printf("2 - Calculate the area of the circle\n");
                printf("0 - Exit\n");
                scanf("%d", &menu);
            }
        }
    } while (menu!=0);
    printf("Thank you for using this calculator!");
    return 0;
}
