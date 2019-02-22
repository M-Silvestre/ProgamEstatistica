/********************************************
*        Autor: Matteus Silvestre           *
*        Aula: 03                           *
*        Título: Exercício 03 (Temperaturas)*
*        Data: 08/02/2019                   *
*********************************************/

#include <stdio.h>

//Celsius para Fahrenheit
void main(void){
    double C, F; //C: Celsius, F: Fahrenheit
    printf("Transformador de temperatura (Celsius para Fahrenheit)\n\n");
    printf("Informe uma temperatura em graus Celsius: ");
    scanf("%lf", &C);
    F = C * (9.0/5.0) + 32.0;
    printf("%.2f graus Celsius equivale a %.2f graus Fahrenheit", C, F);
}

/*Fahrenheit para Celsius
void main(void){
    double C, F;
    printf("Transformador de temperatura (Fahrenheit para Celsius)\n\n");
    printf("Informe uma temperatura em Fahrenheit: ");
    scanf("%lf", &F);
    C = (F - 32.0)*(5.0/9.0);
    printf("%.2f graus Fahrenheit equivale a %.2f graus Celsius", F, C);
}*/
