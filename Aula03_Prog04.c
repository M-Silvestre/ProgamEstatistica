/********************************************
*        Autor: Matteus Silvestre           *
*        Aula: 03                           *
*        Título: Exercício 02               *
*        Data: 08/02/2019                   *
*********************************************/

#include <stdio.h>

void main(void){
    double Peso, Altura, IMC ;
    printf("Calculo do IMC \n\n");
    printf("Insira os dados relativos a peso e altura (separados por espaco): ");
    scanf("%lf %lf", &Peso, &Altura);
    IMC = (Peso)/(Altura*Altura);
    printf("IMC: %.2f", IMC);
}
