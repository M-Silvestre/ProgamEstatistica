/************************************
*        Autor: Matteus Silvestre   *
*        Aula: 10                   *
*        T�tulo: Fun��es            *
*        Data: 29/03/2019           *
*************************************/
/*	
	Na programa��o, muitas vezes n�o � necess�rio implementar
	algo que j� existe, ou "reinventar a roda". Podemos usar 
	fun��es j� existententes, implementadas por outras pessoas,
	a partir de bibliotecas, ou arquivos tipo .h ("header" ou cabe�alho).
	A sintaxe do uso de uma fun��o qualquer �:
	
	nome_da_funcao(par�metros da fun�ao);
	
	Obs: Se a fun��o tem mais de um argumento, eles dever�o ser
	separados por v�rgula. 
	Exemplo:
		printf("%.2f", sqrt(900.0));
		
	A fun��o sqrt() vem da biblioteca math.h, e retorna a raiz
	quadrada do n�mero dado como argumento.
		
	Existem duas maneiras para implementar uma fun��o:
	
	1) Declara-se um "prot�tipo" antes do main(), que diz o tipo
	de retorno, e define-se seus argumentos e instru��es ap�s o main()
	
	2) Define-se a fun��es e suas instru��es antes do main()
	
	A primeira maneira pode deixar o c�digo mais organizado, apesar de
	n�o haver diferen�a na execu��o.
	
*/

#include <stdio.h>
#include <stdlib.h>

int square(int); /*Prot�tipo de uma fun��o que recebe um �nico inteito
					como argumento e retorna um inteiro*/

int main(void){
	//Nossa fun��o main() retorna um inteiro
	printf("Fun%c%ces (1)\n\n", 135, 228);
	int x;
	
	for(x = 1; x <= 10; x++)
		printf("%d\n", square(x));
	printf("\n");
	
	return 0; //O retorna da fun��o main()
};

/*Definindo nossa fun��o square(). Ela dever� receber um inteiro
y e retornar o seu quadrado, ou y * y  */

int square(int y){
	return y * y;
}
