/***********************************************
*        Autor: Matteus Silvestre              *
*        Aula: 08                              *
*        T�tulo: Exerc�cio dos m�ltiplos de 5  *
*        Data: 15/03/2019                      *
************************************************/
/*	
	Exerc�cio: Escreva um programa que exiba na tela
	a tabuada (1 a 10) do n�mero 5.
	
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("M%cltiplos de 5\n\n", 163);
	
	int i = 1;
	while( i <= 10){
		printf("\t5 x %2d = %2d\n", i, 5 * i);
		i = i + 1; 
	}
	/*O %2d for�a o inteiro a ocupar o espa�o de pelo menos
	dois caracteres*/
	printf("\n");
	system("pause");
}
