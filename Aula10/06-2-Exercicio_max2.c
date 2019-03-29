/**************************************
*        Autor: Matteus Silvestre     *
*        Aula: 10                     *
*        Título: Exercício de Máximo  *
*        Data: 29/03/2019             *
***************************************/
/*	
	Exercício: Escreva em programa em C que recebe dois
	números reais e determine o maior entre eles.
*/
#include <stdio.h>
#include <stdlib.h>
#include "06-1-Biblioteca_maximos.h"

int main(void){
	printf("Exerc%ccio m%cximos (2)\n\n", 161, 160);
	float n1, n2, maior;
	printf("Informe o primeiro n%cmero: ", 163);
	scanf("%f", &n1);
	printf("Informe o segundo n%cmero: ", 163);
	scanf("%f", &n2);
	
	maior = max2(n1, n2);
	
	printf("\nO maior n%cmero entre %.2f e %.2f %c %.2f", 163, n1, n2, 130, maior);
	
	return 0;
};
