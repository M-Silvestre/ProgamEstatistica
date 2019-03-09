/***************************************
*        Autor: Matteus Silvestre      *
*        Aula: 07                      *
*        Título: comando switch        *
*        Data: 08/03/2019              *
****************************************/
/*	Quando avaliamos uma expressão que pode ter vários valores
	possíveis podemos usar o comando switch() em vez de vários if() else.
	Ele funciona da seguinte maneira:
	
		switch(expressão){
			case constante_1: instruções_1;
				break;
			case constante_2: instruções_2;
				break;
			...
			case constante_n: instruções_n;
				break;
			default: instruções;
		}
	
	A "expressão" é avaliada e comparada aos valores das constantes.
	Caso corresponda a uma das n constantes (int, char, float, etc.),
	apenas a instrução (ou bloco de instruções) correspondente será executado.
	Caso a expressão não corresponda a nenhuma das constantes, ela cai
	no caso "default". O default é opcional para o comando.
	
	Por padrão, a switch() executda TODOS os cases a partir do primeiro
	verdadeiro. Os "breaks" servem para sair do switch sem executar os
	cases seguintes.
	
	Exercício: Escreva um programa que retorne  o estado civil do
	usuário, recebendo uma letra como argumento usando o if() else.
	Depois, implemente um programa semelhante usando apenas switch().
	Qual programa ficou mais confuso? Explique.
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Estado Civil\n\n");
	char estado;
	
	//puts() vem de "put string", é como um printf() que já vem com o \n
	puts("Informe a letra inicial do seu estado civil");
	scanf("%c", &estado);
	
	/*Vamos deixar os cases de letras minúsculas sem instruções nem breaks,
	para que as intruções seguintes (das letras maiúsculas) sejam executadas*/
	switch(estado){
		case 's':
		case 'S':
			printf("\nSolteiro(a)\n\n");
			break;
		case 'c':
		case 'C':
			printf("\nCasado(a)\n\n");
			break;
		case 'd':
		case 'D':
			printf("\nDivorciado(a)\n\n");
			break;
		case 'v':
		case 'V':
			printf("\nVi%cvo(a)\n\n", 163);
			break;
		default: 
			printf("\nEstado civil indefinido.");
	}
	system("pause");
}
