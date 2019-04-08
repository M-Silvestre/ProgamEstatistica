/****************************************************
*        Autor: Matteus Silvestre                   *
*        Aula: 10                                    *
*        Título: Exercício: Sequência de Fibonacci  *
*        Data: 29/03/2019                           *
*****************************************************/
/*	
	Exercício: Construa um programa em C que calcule e exiba os n
	primeiros termos da Sequência de Fibonacci.
	
	A sequência de Fibonacci é uma sequência de interios em que os
	dois primeiros números são 1, e cada termo a partir do terceiro
	é igual à soma dos dois imediatamente anteriores.
	
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

//Nossa função tem o número de termos como único argumento
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
	/*Precisaremos de quatro variáveis:
		i: iteração dentro de um loop
		ant2: número duas posições antes do atual
		ant1: número uma posições antes do atual
		atual: número atual, soma de ant2 e ant1
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
		
		//Pela definição da sequência:	
		atual = ant2 + ant1; 
		printf("%d\n", atual);
		
		//Então, moveremos ant2 e ant1 uma posição na sequência
		ant2 = ant1;
		ant1 = atual;
	};
	
	putchar('\n');
}
