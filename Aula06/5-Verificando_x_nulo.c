/*****************************************
*        Autor: Matteus Silvestre        *
*        Aula: 06                        *
*        T�tulo: Verficando se X � nulo  *
*        Data: 01/03/2019                *
******************************************/
/*	Exerc�cio 01: Implemente um programa que indique se
	o inteiro lido � zero ou n�o*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	int X;
	printf("Informe um n%c inteiro: ", 167);
	scanf("%d", &X);
	if(X != 0){		
		printf("O n%cmero n%co %c nulo.", 163, 198, 130);
	} else{
		printf("O n%cmero %c nulo.", 163, 130);

	};
}
