/************************************
*        Autor: Matteus Silvestre   *
*        Aula: 10                   *
*        Título: Funções            *
*        Data: 29/03/2019           *
*************************************/
/*	
	Exercicio: Refaça o exercício anterior, mas agora tanto
	o caractere quanto o número de caracteres deverão ser
	informados por você.		
*/
#include <stdio.h>
#include <stdlib.h>
#include "04-1-Exercicio_linhas.h"

int main(void){
	printf("Exerc%ccio fun%c%ces (3)\n\n", 161,135, 228);
	int j, k;
	char ch;
	printf("Informe o n%cmero de caracteres: ", 163);
	scanf("%d", &k);
	
	fflush(stdin);
	
	printf("Informe o caractere: ");
	scanf("%c", &ch);
	
	linha3(k, ch);
	printf("N%cmeros entre 1 e 5\n", 163);
	linha3(k, ch);
	for(j = 1; j <= 5; j++)
		printf("\t%d\n", j);
	linha3(k, ch);
	
	return 0;
};
