/*
	Exercício: Um programa em C que calcula a probabilidade de
	uma variável aleatória geométrica X ser igual a um valor informado.
	
	A probabilidade de sucesso em cada repetição também é informada pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>
#include "1-Biblioteca.h"

void main(void){
	printf("Probabilidade de uma v. a. Geom%ctrica\n\n", 130);
	int x;
	float p;
	printf("Informe a probabilidade de sucesso: ");
	scanf("%f", &p);
	printf("\nTemos X%cGeo(%.2f)\n\n", 126, p);
	printf("Informe n%cmero de tentativas at%c o primeiro sucesso: ", 163, 130);
	scanf("%d", &x);
	printf("\nA probabilidade de sucesso na %d%c tentativa %c %.2f%%\n\n", x, 166, 130, geo(p, x));
	system("pause");
}
