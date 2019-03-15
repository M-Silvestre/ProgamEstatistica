/*******************************************
*        Autor: Matteus Silvestre          *
*        Aula: 08                          *
*        Título: Saindo de loops com break *
*        Data: 15/03/2019                  *
****************************************/
/*	
	O comando "continue", quando presente dentro de um laço,
	faz com que ele passe para a próxima iteração.
	
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
	//Compare a saída desse programa com a do que usa "break"
	system("pause");
}
