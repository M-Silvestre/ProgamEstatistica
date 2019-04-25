/*
	Exercício: Um programa em C que calcula a probabilidade de
	uma variável aleatória X de distribuição de Poisson ser igual a um valor informado.
	
	O parâmetro também é informada pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>
#include "1-Bibliotecas.h"

void main(void){
	printf("Probabilidade de uma v. a. de Poisson\n\n", 130);
	int x;
	double par;
	printf("Informe o n%cmero m%cdio de ocorrencias (parametro): ", 163, 130);
	scanf("%lf", &par);
	printf("\nTemos X%cPoisson(%.2f)\n\n", 126, par);
	printf("Informe um valor x para X: ");
	scanf("%d", &x);
	printf("\nA probabilidade de X ser igual a %d %c %.2f%%\n\n", x, 130, poisson(x, par));
	system("pause");
}
