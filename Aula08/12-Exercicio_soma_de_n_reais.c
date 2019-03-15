/*********************************************
*        Autor: Matteus Silvestre            *
*        Aula: 08                            *
*        Título: Exercício soma de n numeros *
*        Data: 15/03/2019                    *
**********************************************/
/*	
	Exercício: Crie um program a em C que calcule a soma
	de uma quantidade arbitrária de números reais. O usuário
	deverá ser perguntado a respeito da quantidade de elementos
	a ser somados. Com essa informação, utilize uma estrutura de
	laço para solicitar cada número a ser somado.
	
	Opcional: também informe o produto dos números.
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Soma de n n%cmeros reais\n\n", 163);
	int i, n;
	float num, soma;
	double produto; 
	
	printf("Informe quantos n%cmeros ser%co somados: ", 163, 198);
	scanf("%d", &n);
	
	//Inicialmente, os números não foram informados
	soma = 0;
	produto = 1;
	
	for(i = 1; i <= n; i++){
		printf("Informe o n%cmeros %d: ", 163, i);
		scanf("%f", &num);
		
		//A soma e o produto aumentam a cada número informado
		soma = soma + num;
		produto = produto * num;
	}
	
	printf("\nA soma dos %d n%cmeros %c igual a %.2f\n", n, 163, 130, soma);
	printf("O produto dos %d n%cmeros %c igual a %.2f\n\n", n, 163, 130, produto);
	system("pause");
}
