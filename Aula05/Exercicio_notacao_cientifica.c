/***********************************************
*        Autor: Matteus Silvestre              *
*        Aula: 05                              *
*        T�tulo: Exerc�cios(nota��o cient�fica)*
*        Data: 22/02/2019                      *
************************************************/
/*Exerc�cio 02: Escrever um programa que converta toneladas para
 quilos e gramas escrevendo o resultado em nota��o tradicional
 e cient�fica.
 
 	N�meros reais representados em nota��o cientpifica seguem a forma
	"aaaEbbb", onde o "E" significa 10, "aaa" � o n�mero real entre 1 e 10 
	e "bbb" o exponte. Por exemplo:
	13000 viraria 1.3E04 (1.3 vezes 10 elevado a 4)
	0.000098 viraria 9.8E-05 (9.8 vezes 10 elevado a -5)
	
	As tags do printf() e scanf() para n�meros em nota��o cient�fica
	s�o %e e %E (dependendo se o "e" � ma�sculo ou n�o.
	� poss�vel representar no printf() com %E um valor recebido
	pelo scanf() com %f, e vice-versa.*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	double massaT, massaQ, massaG;	
	printf("Conversao de massa\n\n");
	printf("Informe a massa (em toneladas): ");
	scanf("%lf", &massaT); //Recebendo como float
	//scanf("%e", &massaT); Rebendo como nota��o cient�fica
	massaQ = massaT * 1.0e03; //1.0e03 � 1 vezes 10 elevado a 3, ou 1000
	massaG = massaT * 1.0e06; //1.0e03 � 1 vezes 10 elevado a 3, ou 1000000

	printf("\n%.2f toneladas equivale a:\n"
			"\t%.2E ou %.2f quilogramas"
			"\n\t%.2E ou %.2f gramas\n\n",
			massaT, massaQ, massaQ, massaG, massaG);
	system("pause");
}
