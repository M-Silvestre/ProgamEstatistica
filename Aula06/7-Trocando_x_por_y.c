/****************************************
*        Autor: Matteus Silvestre       *
*        Aula: 06                       *
*        T�tulo: Trocando X por Y       *
*        Data: 01/03/2019               *
*****************************************/

/*	Exerc�cio: Implemente um programa leia dois numeros
	e os apresente de forma cresente
	(valores em ordem crescente, vari�veis na ordem)*/

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
		Mas, para trocar seus valores, precisaremos de uma vari�vel adicional
		para guardar o valor de uma das var�aveis antes que ela seja
		igualada � outra. Caso contr�rio, seu valor ser� perdido.*/
		float temp;
		temp = Y;
		Y = X;
		X = temp;		
	};
	//Se n�o h� uma a��o necess�ria para o caso da condi��o ser falsa, o else � opcional
	printf("\nEm ordem crescente: %.2f <= %.2f", X, Y);
}
