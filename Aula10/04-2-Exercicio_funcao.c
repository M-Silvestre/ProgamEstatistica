/************************************
*        Autor: Matteus Silvestre   *
*        Aula: 10                   *
*        Título: Funções            *
*        Data: 29/03/2019           *
*************************************/
/*	
	Exercicio: Escreva um código C que escreva em tela a saída:
	
	********************
	Números entre 1 e 5
	********************
		1
		2
		3
		4
		5
	********************		
*/
#include <stdio.h>
#include <stdlib.h>
#include "04-1-Exercicio_linhas.h"

int main(void){
	printf("Exerc%ccio fun%c%ces (1)\n\n", 161,135, 228);
	int j;
	linha();
	printf("N%cmeros entre 1 e 5\n", 163);
	linha();
	for(j = 1; j <= 5; j++)
		printf("\t%d\n", j);
	linha();
	
	return 0;
};
