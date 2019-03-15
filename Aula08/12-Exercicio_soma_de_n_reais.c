/*********************************************
*        Autor: Matteus Silvestre            *
*        Aula: 08                            *
*        T�tulo: Exerc�cio soma de n numeros *
*        Data: 15/03/2019                    *
**********************************************/
/*	
	Exerc�cio: Crie um program a em C que calcule a soma
	de uma quantidade arbitr�ria de n�meros reais. O usu�rio
	dever� ser perguntado a respeito da quantidade de elementos
	a ser somados. Com essa informa��o, utilize uma estrutura de
	la�o para solicitar cada n�mero a ser somado.
	
	Opcional: tamb�m informe o produto dos n�meros.
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
	
	//Inicialmente, os n�meros n�o foram informados
	soma = 0;
	produto = 1;
	
	for(i = 1; i <= n; i++){
		printf("Informe o n%cmeros %d: ", 163, i);
		scanf("%f", &num);
		
		//A soma e o produto aumentam a cada n�mero informado
		soma = soma + num;
		produto = produto * num;
	}
	
	printf("\nA soma dos %d n%cmeros %c igual a %.2f\n", n, 163, 130, soma);
	printf("O produto dos %d n%cmeros %c igual a %.2f\n\n", n, 163, 130, produto);
	system("pause");
}
