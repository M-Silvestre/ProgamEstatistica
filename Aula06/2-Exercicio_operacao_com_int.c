/*************************************************
*        Autor: Matteus Silvestre                *
*        Aula: 06                                *
*        T�tulo: Exerc�cio: Opera�oes com int *
*        Data: 01/03/2019                        *
**************************************************/
/*
	Exerc�cio: Escreva um programa em C que pe�a ao usu�rio
	dois n�meros inteiros e apresente o resultado da realiza��o
	das opera��es aritm�ticas tradicionais.
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	int num1, num2;
	printf("Informe um numero inteiro: ");
	scanf("%d", &num1);
	printf("Informe um segundo numero inteiro: ");
	scanf("%d", &num2);
	printf("\nSoma: num1 + num2 = %d", (num1 + num2));
	printf("\nDiferen�a: num1 - num2 = %d", (num1 - num2));
	printf("\nProduto: num1 + num2 = %d", (num1 * num2));
	printf("\nQuociente da divisao: num1 / num2 = %d", (num1 / num2));
	printf("\nResto da divisao: num1 %% num2 = %d\n\n", (num1 % num2));
	system("pause");
}
