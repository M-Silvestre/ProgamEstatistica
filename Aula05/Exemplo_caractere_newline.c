/***********************************************
*        Autor: Matteus Silvestre              *
*        Aula: 05                              *
*        T�tulo: Caracteres                     *
*        Data: 22/02/2019                      *
************************************************/

#include <stdio.h>

void main(void){
	//O "new line", ou pular linha, � um �nico caractere ASCII
	char caractere = '\n';
	printf("%c%c%c", caractere, caractere, caractere);
	
	printf("%cello %cund%c %c%cue%c\n", 'H', 'M', 'o', 'C', 'r', 'l');
		
	system("pause");
}
