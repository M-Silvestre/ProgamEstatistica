/****************************************************
*        Autor: Matteus Silvestre                   *
*        Aula: 10                                    *
*        T�tulo: Exerc�cio: Sequ�ncia de Fibonacci  *
*        Data: 29/03/2019                           *
*****************************************************/
/*	
	Exerc�cio: Construa um programa em C que calcule e exiba os n
	primeiros termos da Sequ�ncia de Fibonacci.
	
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
#include <stdlib.h>

//Nossa fun��o tem o n�mero de termos como �nico argumento
void fibonacci(int);

void main(void){
	printf("Sequ%cncia de Fibonacci\n\n", 136);
	int n;
	printf("Informe o n%cmero de termos a exibir: ", 163);
	scanf("%d", &n);
	fibonacci(n);
	system("pause");
};

void fibonacci(int n){
	/*Precisaremos de quatro vari�veis:
		i: itera��o dentro de um loop
		ant2: n�mero duas posi��es antes do atual
		ant1: n�mero uma posi��es antes do atual
		atual: n�mero atual, soma de ant2 e ant1
	*/
	int i, ant1, ant2, atual;
	ant2 = 1;
	ant1 = 1;
	
	putchar('\n');
	
	for(i = 1; i <= n; i++){
		
		if(i == 1){ //Para o primeiro termo
			printf("1\n");
			continue;
		};
		
		if(i == 2){ //Para o segundo termo
			printf("1\n");
			continue;
		};
		
		//Pela defini��o da sequ�ncia:	
		atual = ant2 + ant1; 
		printf("%d\n", atual);
		
		//Ent�o, moveremos ant2 e ant1 uma posi��o na sequ�ncia
		ant2 = ant1;
		ant1 = atual;
	};
	
	putchar('\n');
}
