/*************************************************
*        Autor: Matteus Silvestre                *
*        Aula: 06                                *
*        Título: Exercício 01: Operaçoes com int *
*        Data: 01/03/2019                        *
**************************************************/
/*
	Exercício 01: Escreva um programa em C que peça ao usuário
	dois números inteiros e apresente o resultado da realização
	das operações aritméticas tradicionais.
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
	printf("\nDiferença: num1 - num2 = %d", (num1 - num2));
	printf("\nProduto: num1 + num2 = %d", (num1 * num2));
	printf("\nQuociente da divisao: num1 / num2 = %d", (num1 / num2));
	printf("\nResto da divisao: num1 %% num2 = %d\n\n", (num1 % num2));
	system("pause");
}
