/*********************************************
*        Autor: Matteus Silvestre            *
*        Aula: 10                            *
*        T�tulo: Operadores de incrementa��o *
*        Data: 29/03/2019                    *
**********************************************/
/*	
	Para incrementa��o, var++ e ++var geram o mesmo resultado.
	Eles diferem quando se quer usar o valor de var em uma fun��o
	ou atribui��o a outra vari�vel.
	
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
	
	/*Aten��o! Se os operadores forem usados na condi��o de um if,
	a vari�vel ser� alterada mesmo que as instru��es do if n�o sejam*/
	i = 0;
	if(i++)
		printf("%d\n", i);
	
}
