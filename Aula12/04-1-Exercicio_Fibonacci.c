/****************************************************
*        Autor: Matteus Silvestre                   *
*        Aula: 10                                    *
*        T�tulo: Exerc�cio: Sequ�ncia de Fibonacci  *
*        Data: 29/03/2019                           *
*****************************************************/
/*	
	Exerc�cio: Construa um programa em C que calcule o termo de
	determinada posi��o na sequ�ncia de Fibonacci.
	
	A sequ�ncia de Fibonacci � uma sequ�ncia de interios em que os
	dois primeiros n�meros s�o 1, e cada termo a partir do terceiro
	� igual � soma dos dois imediatamente anteriores.
	
	1
	1
	2 = 1 + 1;
	3 = 1 + 2;
	5 = 2 + 3;
	8 = 3 + 5;
	13 = 5 + 8;
	...
*/

#include <stdio.h>
#include "04-2-Biblioteca_Fibonacci.h" //Fun��es fib() e fib_r() est�o aqui

void main(void){
	printf("Sequ%cncia de Fibonacci\n\n", 136);
	int n;
	printf("Informe o n%cmero do termo a exibir: ", 163);
	scanf("%d", &n);
	printf("Fib(%d): %d\n\n", n, fib(n));
	printf("Fib_r(%d): %d\n\n", n, fib_r(n));
}
