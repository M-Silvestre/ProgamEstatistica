/*****************************************************
*        Autor: Matteus Silvestre                    *
*        Aula: 06                                    *
*        T�tulo: Valores L�givos: Verdadeiro e Falso *
*        Data: 01/03/2019                            *
******************************************************/
/*
	Como vimos antes, C possui quatro tipos b�sicos (int, float,
	double e char) e o tipo ponteiro.
	
	Por�m, n�o existe em C um tipo espec�fico para representar os 
	valores l�gicos "Verdadeiro" e "Falso", diferentemente de C++
	e outras linguagens como R, Java, etc.
	Em vez disso, por padr�o C interpreta o n�mero zero como
	"falso" e qualquer n�mero diferente de zero (int ou n�o) como
	verdadeiro. Os operadores relacionais em C s�o:
	
	== : Igualdade 
	>  : Maior que
	>= : Maior ou igual a
	<  : Menor que
	<= : Menor ou igual
	!= : Diferen�a
	
	Express�es que usam esses operadores retornam 0 quando falsas,
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
	/*OBS1: N�o confundir o operador relacional ==
	e o operador de atribui��o =*/
	printf("\n\tX e maior que Y? %d", (X > Y));
	printf("\n\tX e maior ou igual a Y? %d", (X >= Y));
	printf("\n\tX e menor que Y? %d", (X < Y));
	printf("\n\tX e menor ou igual a Y? %d", (X <= Y));
	printf("\n\tX e diferente de Y? %d\n\n", (X != Y));
	/*OBS2: � poss�vel usar os operadores para comparar
	express�es, como por exemplo (x + y) <= (Y - X*Y - 4)*/
	system("pause");
}
