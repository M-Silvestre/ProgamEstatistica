/*******************************************
*        Autor: Matteus Silvestre          *
*        Aula: 08                          *
*        Título: Saindo de loops com break *
*        Data: 15/03/2019                  *
****************************************/
/*	
	O comando "break" permite que uma estrutura de repetição
	termine antes do que sua condição indica.
	
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Exemplo de loop com break\n\n");
	int i;
	for(i = 1; i <= 100; i = i + 1){
		//O loop termina antes de i > 100
		if( i == 30)
			break;
		else
			printf ("%2d\n", 2 * i);
	}
	printf("\n\nFim do la%co.\n\n", 135);
	system("pause");
}
