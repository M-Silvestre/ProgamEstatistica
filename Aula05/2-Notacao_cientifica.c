/***********************************************
*        Autor: Matteus Silvestre              *
*        Aula: 05                              *
*        Título: Notação científica            *
*        Data: 22/02/2019                      *
************************************************/
/*Exercício 02: Escrever um programa que converta toneladas para
 quilos e gramas escrevendo o resultado em notação tradicional
 e científica.
 
 	Números reais representados em notação científica seguem a forma
	"aaaEbbb", onde o "E" significa 10, "aaa" é o número real entre 1 e 10 
	e "bbb" o exponte. Por exemplo:
	13000 viraria 1.3E04 (1.3 vezes 10 elevado a 4)
	0.000098 viraria 9.8E-05 (9.8 vezes 10 elevado a -5)
	
	As tags do printf() e scanf() para números em notação científica
	são %e e %E (dependendo se o "e" é maísculo ou não.
	É possível representar no printf() com %E um valor recebido
	pelo scanf() com %f, e vice-versa.*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	double massaT, massaQ, massaG;	
	printf("Conversao de massa\n\n");
	printf("Informe a massa (em toneladas): ");
	scanf("%lf", &massaT); //Recebendo como float
	//scanf("%e", &massaT); Rebendo como notação científica
	massaQ = massaT * 1.0e03; //1.0e03 é 1 vezes 10 elevado a 3, ou 1000
	massaG = massaT * 1.0e06; //1.0e03 é 1 vezes 10 elevado a 3, ou 1000000

	printf("\n%.2f toneladas equivale a:\n"
			"\t%.2E ou %.2f quilogramas"
			"\n\t%.2E ou %.2f gramas\n\n",
			massaT, massaQ, massaQ, massaG, massaG);
	system("pause");
}
