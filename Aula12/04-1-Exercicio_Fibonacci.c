/****************************************************
*        Autor: Matteus Silvestre                   *
*        Aula: 10                                    *
*        Título: Exercício: Sequência de Fibonacci  *
*        Data: 29/03/2019                           *
*****************************************************/
/*	
	Exercício: Construa um programa em C que calcule o termo de
	determinada posição na sequência de Fibonacci.
	
	A sequência de Fibonacci é uma sequência de inteiros em que os
	dois primeiros números são 0 e 1 (ou 1 e 1), e cada termo a
	partir do terceiro é igual à soma dos dois imediatamente anteriores.
	
	0
	1
	1 = 0 + 1;
	2 = 1 + 1;
	3 = 1 + 2;
	5 = 2 + 3;
	8 = 3 + 5;
	13 = 5 + 8;
	...
*/

#include <stdio.h>
#include "04-2-Biblioteca_Fibonacci.h" //Funções fib() e fib_r() estão aqui

void main(void){
	printf("Sequ%cncia de Fibonacci\n\n", 136);
	int n;
	printf("Informe o n%cmero do termo a exibir: ", 163);
	scanf("%d", &n);
	printf("Fib(%d): %d\n\n", n, fib(n));
	printf("Fib_r(%d): %d\n\n", n, fib_r(n));
}
