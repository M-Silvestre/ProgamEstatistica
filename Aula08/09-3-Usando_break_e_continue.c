/*******************************************
*        Autor: Matteus Silvestre          *
*        Aula: 08                          *
*        Título: Usando break e continue *
*        Data: 15/03/2019                  *
****************************************/
/*	

	
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Exemplo de loop com \"break\" e \"continue\"\n\n");
	int i;
	for(i = 1; i <= 100; i = i + 1){
		if( i == 30)
			break;
		else 
			if(i%2 == 1){
				continue;
			}
			else{
				printf ("%2d\n", 2 * i);	
			}
	}
	printf("\n\nFim do la%co.\n\n", 135);
	system("pause");
}
