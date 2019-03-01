/****************************************
*        Autor: Matteus Silvestre       *
*        Aula: 06                       *
*        Título: Trocando X por Y       *
*        Data: 01/03/2019               *
*****************************************/

/*	Exercício: Implemente um programa leia dois numeros
	e os apresente de forma cresente
	(valores em ordem crescente, variáveis na ordem)*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	double X, Y;
	printf("Informe um n%cumero real: ", 163);
	scanf("%lf", &X);
	printf("Informe um outro n%cumero real: ", 163);
	scanf("%lf", &Y);
	if(X > Y){
		/*Podemos facilmente fazer X receber Y ou Y receber X.
		Mas, para trocar seus valores, precisaremos de uma variável adicional
		para guardar o valor de uma das varíaveis antes que ela seja
		igualada à outra. Caso contrário, seu valor será perdido.*/
		float temp;
		temp = Y;
		Y = X;
		X = temp;		
	};
	//Se não há uma ação necessária para o caso da condição ser falsa, o else é opcional
	printf("\nEm ordem crescente: %.2f <= %.2f", X, Y);
}
