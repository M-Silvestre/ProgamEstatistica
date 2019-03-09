/***************************************
*        Autor: Matteus Silvestre      *
*        Aula: 07                      *
*        T�tulo: comando switch        *
*        Data: 08/03/2019              *
****************************************/
/*	Quando avaliamos uma express�o que pode ter v�rios valores
	poss�veis podemos usar o comando switch() em vez de v�rios if() else.
	Ele funciona da seguinte maneira:
	
		switch(express�o){
			case constante_1: instru��es_1;
				break;
			case constante_2: instru��es_2;
				break;
			...
			case constante_n: instru��es_n;
				break;
			default: instru��es;
		}
	
	A "express�o" � avaliada e comparada aos valores das constantes.
	Caso corresponda a uma das n constantes (int, char, float, etc.),
	apenas a instru��o (ou bloco de instru��es) correspondente ser� executado.
	Caso a express�o n�o corresponda a nenhuma das constantes, ela cai
	no caso "default". O default � opcional para o comando.
	
	Por padr�o, a switch() executda TODOS os cases a partir do primeiro
	verdadeiro. Os "breaks" servem para sair do switch sem executar os
	cases seguintes.
	
	Exerc�cio: Escreva um programa que retorne  o estado civil do
	usu�rio, recebendo uma letra como argumento usando o if() else.
	Depois, implemente um programa semelhante usando apenas switch().
	Qual programa ficou mais confuso? Explique.
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Estado Civil\n\n");
	char estado;
	
	//puts() vem de "put string", � como um printf() que j� vem com o \n
	puts("Informe a letra inicial do seu estado civil");
	scanf("%c", &estado);
	
	/*Vamos deixar os cases de letras min�sculas sem instru��es nem breaks,
	para que as intru��es seguintes (das letras mai�sculas) sejam executadas*/
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
