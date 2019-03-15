/*************************************************
*        Autor: Matteus Silvestre                *
*        Aula: 08                                *
*        Título: estruturas de repetição (loops) *
*        Data: 15/03/2019                        *
**************************************************/
/*	
	Controle de fluxo vai além de estruturas condicionais
	como if() e switch(). Todas as linguagens de programação
	possuem os "loops", ou estruturas de repetição, que permitem
	que o computador execute um mesmo trecho de código várias vezes,
	seja um número determinado de vezes, ou enquanto uma certa
	condição for verdadeira.
	A condição é checada a cada repetição, de forma que
	eventualmente as repetições parem.
	
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Estruturas de Repeti%c%co\n\n", 135, 198);
	
	int i = 1;
	
	/*Construindo nosso primeiro loop usando o while():
		O comando while() recebe uma condição como argumento
		e repete um bloco de intruções enquanto a condição for
		verdadeira..
		
		while( condição ) instrução;
		
		ou
		
		while( condição ){
			instrução1;
			instrução2;
			...
		}
		OBS 1: Caso a condição seja sempre verdadeira, como while( 1 );
		ocorre o chamado "loop infinito", o programa repete as intruções
		indefinidamente.
		
		OBS 2: Caso a condição seja falsa no início do while(),
		o bloco de intruções não será executado nenhuma vez.
	*/
	
	//O loop abaixo repete as 3 linhas enquanto i for 1
	while(i == 1){
		printf("Informe o valor de i: ");
		scanf("%d", &i);
		printf("Estamos dentro do loop.\n\n");
	}
	
	//Depois de sair do while(), o programa continua
	printf("\nSa%cmos do while().\n\n", 161);
	system("pause");
}
