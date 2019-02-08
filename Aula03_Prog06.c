/**********************************************
*        Autor: Matteus Silvestre             *
*        Aula: 03                             *
*        Título: Exercício 04 (grau e radiano)*
*        Data: 08/02/2019                     *
***********************************************/

#include <stdio.h>

void main(void){
    double R, G, pi = 3.1415926535 ;
    printf("Transformador de Graus em Radianos  \n\n");
    printf("informe o angulo em Graus : ");
    scanf("%lf", &G);
    R = G*(pi/180);
    printf("%f Graus equivale a %f Radianos", G, R);
}
