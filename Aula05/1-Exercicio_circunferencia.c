/********************************************
*        Autor: Matteus Silvestre           *
*        Aula: 05                           *
*        Título: Exercícios                 *
*        Data: 22/02/2019                   *
*********************************************/
/*Exercício 01: Escrever um programa que calcule o perímetro
 e a área de uma circunferência.*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main(void){
	double raio, pi = 3.1416, area, perimetro;
	printf("Perimetro e area de uma circunferencia\n\n");
	printf("Informe o raio da circunferencia: ");
	scanf("%lf", &raio);
	perimetro = 2 * pi * raio;
	area = pi * pow(raio, 2.0); //Ou raio * raio
	printf("\nUma circunferencia de raio %.2f tem perimetro %.2f e area %.2f\n\n",
			raio, perimetro, area);
	system("pause");
}
