/*********************************************
*        Autor: Matteus Silvestre            *
*        Aula: 10                            *
*        T�tulo: Loops Infinitos             *
*        Data: 29/03/2019                    *
**********************************************/
/*	
	�s vezes, � de interesse criar um loop que continue
	indefinidamente. � poss�vel fazer isso usando uma condi��o
	que � sempre verdadeira
	Ex:
	while(1)
		instru��o;
		
	for( ; ; )
		instru��o;

	do
		instru��o;
	while(1)
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	int i=1;
	while(i <= 10){
		printf("%d\n", i);
		i++; /*Incrementando a vari�vel i em 1
		� equivalente a i = i + 1 */
	}
	
}
