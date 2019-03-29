/**************************************
*        Autor: Matteus Silvestre     *
*        Aula: 10                     *
*        Título: Exercício de Máximo  *
*        Data: 29/03/2019             *
***************************************/
/*	
	Exercício: Escreva em programa em C que recebe três
	números reais e determine o maior entre eles.
*/
#include <stdio.h>
#include <stdlib.h>
#include "06-1-Biblioteca_maximos.h"

int main(void){
	printf("Exerc%ccio m%cximos (3)\n\n", 161, 160);
	float n1, n2, n3;
	printf("Informe o primeiro n%cmero: ", 163);
	scanf("%f", &n1);
	printf("Informe o segundo n%cmero: ", 163);
	scanf("%f", &n2);
	printf("Informe o terceiro n%cmero: ", 163);
	scanf("%f", &n3);
	
	printf("\nO maior n%cmero entre %.2f, %.2f e %.2f %c %.2f",
	163, n1, n2, n3, 130, max3(n1, n2, n3));
}
