/***********************************************
*        Autor: Matteus Silvestre              *
*        Aula: 05                              *
*        Título: Caracteres e newline          *
*        Data: 22/02/2019                      *
************************************************/

#include <stdio.h>

void main(void){
	//O "new line", ou pular linha, é um único caractere ASCII
	char caractere = '\n';
	printf("%c%c%c", caractere, caractere, caractere);
	
	//Como em int, o % pode indicar valores não vindos de uma variável
	printf("%cello %cund%c %c%cue%c\n", 'H', 'M', 'o', 'C', 'r', 'l');
		
	system("pause");
}
