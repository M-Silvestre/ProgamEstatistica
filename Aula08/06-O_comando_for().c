/************************************
*        Autor: Matteus Silvestre   *
*        Aula: 08                   *
*        T�tulo: O comando for()    *
*        Data: 15/03/2019           *
*************************************/
/*	
	Outra estrutura de repeti��o � o for(), usado quando 
	e tem uma ideia de quantas repeti��es sequer ou uma 
	incrementa��o pr� determinada. Sua nota��o �:
	
		for( cargas inicias; condi��o; p�s instru��o)
			intru��o;
		ou
		
		for( cargas inicias; condi��o; p�s instru��o){
			intru��o1;
			intru��o2;
			...
		}
	Onde:
		cargas iniciais: a��es executadas uma �nica vez antes das repeti��es
		condi��o: Enquanto for verdadeira, o loop continua.
		p�s instru��o: a��o a ser executada depois de cada loop, EX: incrementa��o
		
	OBS: Conv�m declarar uma vari�vel tipo int e us�-la 
	exclusivamente para incrementa��o
	
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Exemplo de \"for()\"\n\n");
	/*Vamos tentar reproduzir o resultado de um dos
	exemplos de while(), escrever os n�meros de 1 a 10*/
	
	int i; //Ser� usada para "caminhar" pelo for()
	
	/*Nosso loop come�a em i = 1, roda enquanto
	 i <= 10, e a cada repeti��o i aumenta em 1*/
	for(i = 1; i <=10; i = i + 1)
		printf("i = %d\n", i);
	putchar('\n');
	system("pause");
}
