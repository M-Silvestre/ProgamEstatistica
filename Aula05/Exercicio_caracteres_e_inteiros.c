/****************************************
*        Autor: Matteus Silvestre       *
*        Aula: 05                       *
*        Título: Caracteres e inteiros  *
*        Data: 22/02/2019               *
*****************************************/

/*Exercício 05: Escreva um programa que receba uma valor inteiro e represente
			o caractere associado a esse número pela tabela ASCII
*/

#include <stdio.h>

void main(void){
	printf("Relacao entre caracteres e inteiros pela tabela ASCII\n\n");
	int ch;
	printf("Inteiro para caractere\n"
			"\tDigite um inteiro: ");
	scanf("%d", &ch);
	printf("\tO inteiro %d equivale a %c na tabela ASCII\n\n", ch, ch);
	
	fflush(stdin);
	printf("Caractere para inteiro\n"
			"\tDigite um caractere: ");
	scanf("%c", &ch);
	printf("\tO caractere %c equivale a %d na tabela ASCII\n\n", ch, ch);
	system("pause");
}
