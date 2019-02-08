/********************************************
*        Autor: Matteus Silvestre           *
*        Aula: 03                           *
*        Título: Exercício 01               *
*        Data: 08/02/2019                   *
*********************************************/

#include <stdio.h>

void main(void){
    double real, valor, dolar = 0.30796;
    
    printf("Transformacao de reais em dolar\n\n");
    printf("Informe um valor em reais: R$ ");
    scanf("%lf", &real);
    /*A tag %lf corresponde a "long float", isto é, representar
    números do tipo double (maior precisão que float)
    OBS: Em C++ existe o tipo long double, mas não em C*/
    
    valor = real*dolar;    
    printf("R$ %.2f equivale a : US$ %.2f", real , valor);
    /*Lembrete: é possível especificar o número de casas decimais de um float
    ou double num printf(). O programa continua trabalhando com a mesma 
    precisão, mas as casas desnecessárias não são exibidas.*/
}
