/*********************************************
*        Autor: Matteus Silvestre            *
*        Aula: 10                            *
*        Título: Operadores de incrementação *
*        Data: 29/03/2019                    *
**********************************************/
/*	
	Para incrementação, var++ e ++var geram o mesmo resultado.
	Eles diferem quando se quer usar o valor de var em uma função
	ou atribuição a outra variável.
	
	var++ e var-- alteram var DEPOIS de usar seu valor, enquanto
	++var e --var alteram var ANTES de usar seu valor.
	
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Operadores de incrementa%c%co (2)\n\n", 135, 198);
	int a = 7, b = 7;
	//Observe como a ordem altera o resultado
	printf("a = %d e b = %d\n", a--, --b);
	printf("a = %d e b = %d\n", a, b);
	
	/*Atenção! Se os operadores forem usados na condição de um if,
	a variável será alterada mesmo que as instruções do if não sejam*/
	i = 0;
	if(i++)
		printf("%d\n", i);
	
}
