/***************************************
*        Autor: Matteus Silvestre      *
*        Aula: 07                      *
*        Título: Exercício par ou ímpar*
*        Data: 08/03/2019              *
****************************************/
/*	Exercício: Escreva um programa em C que recebe um inteiro
	e diga se ele é par ou ímpar.
	Dica: use o operador matemático % (resto de divisão)*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Determinar n%cmero par ou %cmpar\n\n", 163, 161);
	int num;
	printf("Digite um n%cmero inteiro: ", 163);
	scanf("%d", &num);
	
	/*Vamos usar o resto da divisão por 2 na condição. Lembrando que,
	na lógica de C, valores nulos representam "falso" e não-nulos
	representam "verdadeiro".*/
	
	//Condição verdadeira vem de resto diferente de zero
	if(num % 2){
		printf("\nO n%cmero %d %c %cmpar.\n\n", 163, num, 130,161);
	}
	//Condição é falsa, isto é, resto zero 
	else{
		printf("\nO n%cmero %d %c par.\n\n", 163, num, 130);
	}
	system("pause");
}
