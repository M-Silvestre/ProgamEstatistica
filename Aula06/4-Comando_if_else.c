/***********************************
*        Autor: Matteus Silvestre  *
*        Aula: 06                  *
*        Título: Comando if() else *
*        Data: 01/03/2019          *
************************************/

/*
	Um dos comandos usados para controlar o fluxo do do programa
	é o if() else. O nome vem do inglês "if", que significa "se",
	e "else", "caso contrário". A sintaxe do comando é:
	
	if(expressão lógica){
		comandos a serem executados se
		a expressão é verdadeira (retorna valor
		diferente de zero)
	} else{
		comandos a serem executados se
		a expressão é falsa (retorna zero)
	}

	Exercício: Implemente um programa que receba um inteiro e
	infor se ele é não negativo ou negativo

*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	int num;
	printf("Informe um n%c inteiro: ", 167);
	//O inteiro 167 corresponde ao caractre 'º'
	scanf("%d", &num);
	if(num >= 0){
		printf("O n%cmero %d %c n%co negativo.", 163, num, 130, 198);
		//O inteiro 163 corresponde ao caractere 'ú'
		//O inteiro 130 corresponde ao caractere 'é'
		//O inteiro 198 corresponde ao caractere 'ã'
	} else{
		printf("O n%cmero %d e negativo", 163, num);
	};
}
