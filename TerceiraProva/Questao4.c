/*****************************************************
*        Autor: Matteus Silvestre                    *
*        Aula: 13                                    *
*        Título: Terceira Avaliação: Quarta Questão *
*        Data: 26/04/2019                            *
******************************************************/

/*	Questão 4: Crie uma função que que retorne o n-ésimo
	termo da sequência de Fibonacci. Ela é possui primeiro e
	segundo elementos iguais a 1, e todos os outros seguintes
	iguais à soma dos dois elementos anteriores.
	
	1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
	
*/

#include <stdio.h>

int fib(int n), fib_r(int n);

void main(void){
	printf("Sequ%cncia de Fibonacci\n\n", 136);
	int n;
	printf("Informe um n%cmero do termo desejado: ", 163);
	scanf("%d", &n);
	printf("\nFib(%d)= %d", n, fib(n));
	printf("\nFib_r(%d)= %d", n, fib_r(n));
	
};

//Resposta
//De forma não recursiva
int fib(n){
	/*O primeiro e o segundo números são iguais a 1,
	e a fórmula não se aplica ainda. */
	if(n == 1 || n == 2)
		return 1;
	
	int a, b, atual, i;
	a = 1; //Número duas posições antes do atual
	b = 1; //Número uma posição antes do atual
	for(i = 3; i <= n; i++){
		atual = a + b;
		a = b;
		b = atual;
	}
	return atual;
}
