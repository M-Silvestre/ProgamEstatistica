/*******************************************
*        Autor: Matteus Silvestre          *
*        Aula: 08                          *
*        T�tulo: Exerc�cio multiplos de x  *
*        Data: 15/03/2019                  *
*******************************************/
/*	
	Exerc�cio: Escreva um programa que exiba na tela
	a tabuada (1 a 10) de um n�mero inteiro entre 1 e 10
	introduzido pelo usu�rio.
	
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("M%cltiplos de x\n\n", 163);
	
	int x, i;
	printf("Informe um n%cmero inteiro entre 1 e 10: ", 163);
	scanf("%d", &x);
	if(x < 1 || x > 10){
		printf("Foi informado um n%cmero inv%clido.\n\n", 163, 160);
	}
	else{
		i = 1;
		int y;
		while( i <= 10){
		y = x * i;
		printf("\t%2d x %2d = %3d\n", i, x, y);
		i = i + 1; 
		}
	}
	
	printf("\n");
	system("pause");
}
