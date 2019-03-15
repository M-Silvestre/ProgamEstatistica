/*******************************************
*        Autor: Matteus Silvestre          *
*        Aula: 08                          *
*        T�tulo: Saindo de loops com break *
*        Data: 15/03/2019                  *
****************************************/
/*	
	O comando "continue", quando presente dentro de um la�o,
	faz com que ele passe para a pr�xima itera��o.
	
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Exemplo de loop com \"continue\"\n\n");
	int i;
	for(i = 1; i <= 100; i = i + 1){
		if( i == 30)
			continue;
		else
			printf ("%2d\n", 2 * i);
	}
	printf("\n\nFim do la%co.\n\n", 135);
	//Compare a sa�da desse programa com a do que usa "break"
	system("pause");
}
