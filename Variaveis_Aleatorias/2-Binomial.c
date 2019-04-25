/*
	Exercício: Um programa em C que calcula a probabilidade de
	uma variável aleatória binomial X ser igual a um valor informado.
	
	O número de repetições e a probabilidade de sucesso em cada 
	repetição também são informados pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>
#include "1-Biblioteca.h"

void main(void){
	printf("Probabilidade de uma v. a. Binomial\n\n");
	int n, x;
	float p;
	printf("Informe o n%cmero de repeti%c%ces: ", 163, 135, 228);
	scanf("%d", &n);
	printf("Informe a probabilidade de sucesso: ");
	scanf("%f", &p);
	printf("\nTemos X%cBin(%d, %.2f)\n\n", 126, n, p);
	printf("Informe um valor para X: ");
	scanf("%d", &x);
	printf("\nA probabilidade de X ser igual a %d %c %.2f%%\n\n", x, 130, bin(n, p, x));
	system("pause");
};
