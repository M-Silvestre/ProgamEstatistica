/************************************
*        Autor: Matteus Silvestre   *
*        Aula: 10                   *
*        T�tulo: Fun��es            *
*        Data: 29/03/2019           *
*************************************/
/*	
	Exercicio: Refa�a o exerc�cio anterior, mas agora tanto
	o caractere quanto o n�mero de caracteres dever�o ser
	informados por voc�.		
*/
#include <stdio.h>
#include <stdlib.h>
#include "04-1-Exercicio.h"

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
