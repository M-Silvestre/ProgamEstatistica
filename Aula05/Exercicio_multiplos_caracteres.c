/***********************************************
*        Autor: Matteus Silvestre              *
*        Aula: 05                              *
*        T�tulo: Exerc�cio ( multiplos caract) *
*        Data: 22/02/2019                      *
************************************************/

/*Exerc�cio 04: Escreva um programa que leia dois caracterea pela
fun��o scanf() e os escreva na tela entre aspas simples.*/

#include <stdio.h>

void main(void){
	char char1, char2;
	printf("Digite um caractere: ");
	scanf("%c", &char1);
	//fflush(stdin);
	printf("Digite um outro caractere: ");
	scanf("%c", &char2); 
	/*Na tabela ASCII, o Enter tamb�m � um caractere. Al�m disso, o teclado
	possui uma mem�ria chamada buffer que guarda os caracteres que escrevemos.
	Da maneira que o c�digo est� escrito, a vari�vel "b" receber� o Enter
	em vez do valor que ainda vamos informar, usando o scanf() ou o getchar().
	
	A fun��o fflush(stdin) "limpa" a entrada do teclada e serve para separar os
	valores que ser�o etribu�dos a char1 e char2.
	*/
	printf("Os caracteres digitados foram '%c' e '%c'\n", char1, char2);
	system("pause");
}
