/*****************************************************
*        Autor: Matteus Silvestre                    *
*        Aula: 06                                    *
*        Título: Valores Lógicos: Verdadeiro e Falso *
*        Data: 01/03/2019                            *
******************************************************/
/*
	Como vimos antes, C possui quatro tipos básicos de variáveis
	(int, float, double e char) e o tipo ponteiro.
	
	Porém, não existe em C um tipo específico para representar os 
	valores lógicos "Verdadeiro" e "Falso", diferentemente de C++
	e outras linguagens como R, Java, etc.
	Em vez disso, por padrão C interpreta o número zero como
	"falso" e qualquer valor diferente de zero (int ou não) como
	verdadeiro. Os operadores relacionais em C são:
	
	== : Igualdade 
	>  : Maior que
	>= : Maior ou igual a
	<  : Menor que
	<= : Menor ou igual
	!= : Diferença
	
	Expressões que usam esses operadores retornam 0 quando falsas,
	e 1 quando verdadeiras
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	int X, Y;
	printf("Informe um numero inteiro: ");
	scanf("%d", &X);
	printf("Informe um segundo numero inteiro: ");
	scanf("%d", &Y);
	printf("\nOperacoes Relacionais (0 : Falso, 1 : Verdadeiro)\n");
	printf("\n\tX e igual a Y? %d", (X == Y));
	/*OBS1: Não confundir o operador relacional ==
	e o operador de atribuição = */
	printf("\n\tX e maior que Y? %d", (X > Y));
	printf("\n\tX e maior ou igual a Y? %d", (X >= Y));
	printf("\n\tX e menor que Y? %d", (X < Y));
	printf("\n\tX e menor ou igual a Y? %d", (X <= Y));
	printf("\n\tX e diferente de Y? %d\n\n", (X != Y));
	/*OBS2: É possível usar os operadores para comparar
	expressões, como por exemplo (x + y) <= (Y - X*Y - 4)*/
	system("pause");
}
