/***************************************
*        Autor: Matteus Silvestre      *
*        Aula: 08                      *
*        T�tulo: Exemplo 2 de while()  *
*        Data: 15/03/2019              *
****************************************/
/*	
	Exemplo: Antes de executar, voc� conseguiria
	prever a sa�da deste programa?
	
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Exemplo 2 de while()\n\n");
	
	int n = 10;
	while(n){
		printf("n = %d\n", n);
		n = n -1; 
	}
	
	/*� importante destacar que o while() checa
	a condi��o ANTES de executar a instru��o*/
	
	system("pause");
}
