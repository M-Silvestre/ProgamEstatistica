/**************************************
*        Autor: Matteus Silvestre     *
*        Aula: 08                     *
*        T�tulo: Recebendo at� um par *
*        Data: 15/03/2019             *
***************************************/
/*	
	Exerc�cio: Crie um program que pede u n�mero inteiro
	 ao usuario, e enquanto ele n�o for par, continue 
	 solicitando outros numeros.
	 
	 Resolva isso usando for() e while()
	
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Exemplo de for()\n\n");
	int n;
	do{
		printf("Informe um n%cmero inteiro: ", 163);
		scanf("%d", &n);
		if(n%2 == 0)
			break;
		else
			printf("O n%cmero %d %c %cmpar.\n\n", 163, n, 130, 161);
		
	} while(n%2 == 1);
	printf("\nO n%cmero %d %c par.\n\n", 163, n, 130);
	system("pause");
}
