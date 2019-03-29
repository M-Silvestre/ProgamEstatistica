/*********************************************
*        Autor: Matteus Silvestre         *
*        Aula: 10                         *
*        Título: Atribuição composta      *
*        Data: 29/03/2019                    *
**********************************************/
/*	
	Em C, há duas maneiras de se atribuir um valor a uma variável
	usando seu valor atual. Uma delas é a atribuição normal, que
	já vimos. Já outra é a atribuição composta, que permite uma
	representação menos carregada da mesma operação.
	Exemplo: Queremos incrementar a variável VariavelDeNomeLongo
	em 7. Há duas formas de fazer isso:
	
	Atribuição simples:
		VariavelDeNomeLongo = VariavelDeNomeLongo + 7
		
	Atribuição composta:
		VariavelDeNomeLongo += 7
	
	É possível realizar atribuição composta com que operações
	além da adição. Veja:
	
	x += 1       : equivale a:  x = x + 1
	y -= 2       : equivale a:  y = y - 2
	a -= b + 1   : equivale a:  a = a - (b + 1)
	b *= 3       : equivale a: b = b * 3;
	r /= 4       : equivale a: r = r / 4
	p %= 5       : equivale a: p = p % 5
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){	
}
