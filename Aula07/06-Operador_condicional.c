/***************************************
*        Autor: Matteus Silvestre      *
*        Aula: 07                      *
*        T�tulo: Operador condicional  *
*        Data: 08/03/2019              *
****************************************/
/*	O operador condicional � o �nico operador tern�rio
	(3 argumentos). Ele funciona da seguinte maneira:
	
		condi��o ? express�o1 : express�o2
	
	A "condi��o" � avaliada. Caso seja verdadeira,
	executa "express�o1". Caso contr�rio, executa
	"express�o2". Funciona como um if() else para
	express�es curtas.
	
	Exerc�cio: Implemente um programa que calcule os aumentos
	de ordenados para o corrente ano. Se o ordenado for maior
	que 1000 deve ser aumentado em 5%, se n�o, deve ser aumentado
	em 7%. Crie dois c�digos, um usando o if() else e outro
	usando o operador condicional "?".
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Operador Condicional\n\n");
	float ord;
	printf("Informe o ordenado: ");
	scanf("%f", &ord);
	/*Usando if() else
	if (ord > 1e3){
		ord = ord * 1.07;
	} else {
		ord = ord * 1.05;
	}*/
	
	//� poss�vel usar o operador dentro da atribui��o
	ord = ord > 1e3 ? ord * 1.07 : ord * 1.05;
	printf("Ordenado com aumento: %.1f\n\n", ord);
	/*OBS: a diferen�a entre os m�todos � apenas de representa��o,
	n�o h� diferen�as em custo computacional*/
	system("pause");
}
