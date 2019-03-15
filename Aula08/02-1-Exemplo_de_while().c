/*************************************
*        Autor: Matteus Silvestre    *
*        Aula: 08                    *
*        T�tulo: Exemplo de while()  *
*        Data: 15/03/2019            *
**************************************/
/*	
	Exerc�cio: Escreva um programa que exiba os primeiros
	10 n�meros inteiros.
	
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Exemplo de while()\n\n");
	
	int i = 1;
	while(i <= 10){
		printf("i = %d\n", i);
		i = i + 1; //Incremento de i em 1
	}
	
	/*Pergunta: Voc� saberia dizer o que aconteceria se n�o
	houvesse chaves no bloco de c�digo acima?
	E se, ainda sem chaves, o printf() e a incrementa��o 
	tivessem sua ordem invertida?*/
	
	system("pause");
}
