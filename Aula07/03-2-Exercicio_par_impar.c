/***************************************
*        Autor: Matteus Silvestre      *
*        Aula: 07                      *
*        T�tulo: Exerc�cio par ou �mpar*
*        Data: 08/03/2019              *
****************************************/
/*	Exerc�cio: Escreva um programa em C que recebe um inteiro
	e diga se ele � par ou �mpar.
	Dica: use o operador matem�tico % (resto de divis�o)*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Determinar n%cmero par ou %cmpar\n\n", 163, 161);
	int num;
	printf("Digite um n%cmero inteiro: ", 163);
	scanf("%d", &num);
	
	/*Vamos usar o resto da divis�o por 2 na condi��o. Lembrando que,
	na l�gica de C, valores nulos representam "falso" e n�o-nulos
	representam "verdadeiro".*/
	
	//Condi��o verdadeira vem de resto diferente de zero
	if(num % 2){
		printf("\nO n%cmero %d %c %cmpar.\n\n", 163, num, 130,161);
	}
	//Condi��o � falsa, isto �, resto zero 
	else{
		printf("\nO n%cmero %d %c par.\n\n", 163, num, 130);
	}
	system("pause");
}
