/*********************************************
*        Autor: Matteus Silvestre            *
*        Aula: 10                            *
*        Título: Loops Infinitos             *
*        Data: 29/03/2019                    *
**********************************************/
/*	
	Às vezes, é de interesse criar um loop que continue
	indefinidamente. É possível fazer isso usando uma condição
	que é sempre verdadeira
	Ex:
	while(1)
		instrução;
		
	for( ; ; )
		instrução;

	do
		instrução;
	while(1)
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	int i=1;
	while(i <= 10){
		printf("%d\n", i);
		i++; /*Incrementando a variável i em 1
		É equivalente a i = i + 1 */
	}
	
}
