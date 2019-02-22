/***********************************************
*        Autor: Matteus Silvestre              *
*        Aula: 05                              *
*        Título: Exercício ( multiplos caract) *
*        Data: 22/02/2019                      *
************************************************/

/*Exercício 04: Escreva um programa que leia dois caracterea pela
função scanf() e os escreva na tela entre aspas simples.*/

#include <stdio.h>

void main(void){
	char char1, char2;
	printf("Digite um caractere: ");
	scanf("%c", &char1);
	//fflush(stdin);
	printf("Digite um outro caractere: ");
	scanf("%c", &char2); 
	/*Na tabela ASCII, o Enter também é um caractere. Além disso, o teclado
	possui uma memória chamada buffer que guarda os caracteres que escrevemos.
	Da maneira que o código está escrito, a variável "b" receberá o Enter
	em vez do valor que ainda vamos informar, usando o scanf() ou o getchar().
	
	A função fflush(stdin) "limpa" a entrada do teclada e serve para separar os
	valores que serão etribuídos a char1 e char2.
	*/
	printf("Os caracteres digitados foram '%c' e '%c'\n", char1, char2);
	system("pause");
}
