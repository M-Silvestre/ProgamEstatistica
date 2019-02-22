/*********************************************
*        Autor: Matteus Silvestre            *
*        Aula: 05                            *
*        Título: Caracteres e inteiros (cont)*
*        Data: 22/02/2019                    *
**********************************************/

/*Exercício 06: Escreva um programa que receba uma valor inteiro (entre 0 e 255)
				e exiba o inteiro seguinte e o caractere associado a esse número 
				pela tabela ASCII.*/

#include <stdio.h>

void main(void){
	int num;
	printf("Digite um inteiro: ");
	scanf("%d", &num);
	printf("O inteiro %d e sucedido por %d, que representa %c na tabela ASCII\n\n", num, (num + 1), (char) (num + 1));

	system("pause");
}
