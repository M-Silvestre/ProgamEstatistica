/***************************************
*        Autor: Matteus Silvestre      *
*        Aula: 08                      *
*        Título: Exemplo 2 de while()  *
*        Data: 15/03/2019              *
****************************************/
/*	
	Exemplo: Antes de executar, você conseguiria
	prever a saída deste programa?
	
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
	
	/*É importante destacar que o while() checa
	a condição ANTES de executar a instrução*/
	
	system("pause");
}
