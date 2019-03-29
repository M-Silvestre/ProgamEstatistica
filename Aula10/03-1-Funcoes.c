/************************************
*        Autor: Matteus Silvestre   *
*        Aula: 10                   *
*        Título: Funções            *
*        Data: 29/03/2019           *
*************************************/
/*	
	Na programação, muitas vezes não é necessário implementar
	algo que já existe, ou "reinventar a roda". Podemos usar 
	funções já existententes, implementadas por outras pessoas,
	a partir de bibliotecas, ou arquivos tipo .h ("header" ou cabeçalho).
	A sintaxe do uso de uma função qualquer é:
	
	nome_da_funcao(parâmetros da funçao);
	
	Obs: Se a função tem mais de um argumento, eles deverão ser
	separados por vírgula. 
	Exemplo:
		printf("%.2f", sqrt(900.0));
		
	A função sqrt() vem da biblioteca math.h, e retorna a raiz
	quadrada do número dado como argumento.
		
	Existem duas maneiras para implementar uma função:
	
	1) Declara-se um "protótipo" antes do main(), que diz o tipo
	de retorno, e define-se seus argumentos e instruções após o main()
	
	2) Define-se a funções e suas instruções antes do main()
	
	A primeira maneira pode deixar o código mais organizado, apesar de
	não haver diferença na execução.
	
*/

#include <stdio.h>
#include <stdlib.h>

int square(int); /*Protótipo de uma função que recebe um único inteito
					como argumento e retorna um inteiro*/

int main(void){
	//Nossa função main() retorna um inteiro
	printf("Fun%c%ces (1)\n\n", 135, 228);
	int x;
	
	for(x = 1; x <= 10; x++)
		printf("%d\n", square(x));
	printf("\n");
	
	return 0; //O retorna da função main()
};

/*Definindo nossa função square(). Ela deverá receber um inteiro
y e retornar o seu quadrado, ou y * y  */

int square(int y){
	return y * y;
}
