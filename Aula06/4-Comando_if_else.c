/***********************************
*        Autor: Matteus Silvestre  *
*        Aula: 06                  *
*        T�tulo: Comando if() else *
*        Data: 01/03/2019          *
************************************/

/*
	Um dos comandos usados para controlar o fluxo do do programa
	� o if() else. O nome vem do ingl�s "if", que significa "se",
	e "else", "caso contr�rio". A sintaxe do comando �:
	
	if(express�o l�gica){
		comandos a serem executados se
		a express�o � verdadeira (retorna valor
		diferente de zero)
	} else{
		comandos a serem executados se
		a express�o � falsa (retorna zero)
	}

	Exerc�cio: Implemente um programa que receba um inteiro e
	infor se ele � n�o negativo ou negativo

*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	int num;
	printf("Informe um n%c inteiro: ", 167);
	//O inteiro 167 corresponde ao caractre '�'
	scanf("%d", &num);
	if(num >= 0){
		printf("O n%cmero %d %c n%co negativo.", 163, num, 130, 198);
		//O inteiro 163 corresponde ao caractere '�'
		//O inteiro 130 corresponde ao caractere '�'
		//O inteiro 198 corresponde ao caractere '�'
	} else{
		printf("O n%cmero %d e negativo", 163, num);
	};
}
