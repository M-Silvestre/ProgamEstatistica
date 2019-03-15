/*************************************
*        Autor: Matteus Silvestre    *
*        Aula: 08                    *
*        Título: Exemplo de while()  *
*        Data: 15/03/2019            *
**************************************/
/*	
	Exercício: Escreva um programa que exiba os primeiros
	10 números inteiros.
	
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
	
	/*Pergunta: Você saberia dizer o que aconteceria se não
	houvesse chaves no bloco de código acima?
	E se, ainda sem chaves, o printf() e a incrementação 
	tivessem sua ordem invertida?*/
	
	system("pause");
}
