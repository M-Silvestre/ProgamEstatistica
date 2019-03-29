/*********************************************
*        Autor: Matteus Silvestre            *
*        Aula: 10                            *
*        Título: Operadores de incrementação *
*        Data: 29/03/2019                    *
**********************************************/
/*	
	Existem operadores para a incrementação e decrementação
	de uma variável em 1. Para uma variável var, por exemplo, eles são:
	
	var++ ou ++var : equivale a var = var + 1
	var-- ou --var : equivale a var = var - 1

*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Operadores de incrementa%c%co (1)....\n\n", 135, 198)
	int i=1;
	while(i <= 10){
		printf("%d\n", i);
		i++;
	}
	
	putchar('\n');
	
	i = 1;
	/*E se usarmos um operador dentro de uma função, o que ocorre?
	Você consegue prever o que o loop abaixo faz?*/
	while(i <= 10){
		printf("%d\n", i++);
	}
	
}
