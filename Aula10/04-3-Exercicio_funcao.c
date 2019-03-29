/************************************
*        Autor: Matteus Silvestre   *
*        Aula: 10                   *
*        Título: Funções            *
*        Data: 29/03/2019           *
*************************************/
/*	
	Exercicio: Refaça o exercício anterior, mas o número
	de asteriscos devera ser informado por você.	
*/
#include <stdio.h>
#include <stdlib.h>
#include "04-1-Exercicio.h"

int main(void){
	printf("Exerc%ccio fun%c%ces (2)\n\n", 161,135, 228);
	int j, k;
	printf("Informe o n%cmero de asteriscos: ", 163);
	scanf("%d", &k);
	linha2(k);
	printf("N%cmeros entre 1 e 5\n", 163);
	linha2(k);
	for(j = 1; j <= 5; j++)
		printf("\t%d\n", j);
	linha2(k);
	
	return 0;
};
