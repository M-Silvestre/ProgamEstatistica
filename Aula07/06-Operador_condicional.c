/***************************************
*        Autor: Matteus Silvestre      *
*        Aula: 07                      *
*        Título: Operador condicional  *
*        Data: 08/03/2019              *
****************************************/
/*	O operador condicional é o único operador ternário
	(3 argumentos). Ele funciona da seguinte maneira:
	
		condição ? expressão1 : expressão2
	
	A "condição" é avaliada. Caso seja verdadeira,
	executa "expressão1". Caso contrário, executa
	"expressão2". Funciona como um if() else para
	expressões curtas.
	
	Exercício: Implemente um programa que calcule os aumentos
	de ordenados para o corrente ano. Se o ordenado for maior
	que 1000 deve ser aumentado em 5%, se não, deve ser aumentado
	em 7%. Crie dois códigos, um usando o if() else e outro
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
	
	//é possível usar o operador dentro da atribuição
	ord = ord > 1e3 ? ord * 1.07 : ord * 1.05;
	printf("Ordenado com aumento: %.1f\n\n", ord);
	/*OBS: a diferença entre os métodos é apenas de representação,
	não há diferenças em custo computacional*/
	system("pause");
}
