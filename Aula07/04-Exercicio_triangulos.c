/******************************************
*        Autor: Matteus Silvestre         *
*        Aula: 07                         *
*        Título: Exercício com triângulos *
*        Data: 08/03/2019                 *
*******************************************/
/*	Exercício: Para escreva um programa que leia
	as medidas dos lados de um triângulo e escreva
	em tela se ele é equilátero, isósceles ou escaleno.
	Lembrando que:
		Equilátero: três lados iguais
		Isósceles: dois lados iguais
		Escaleno: três lados diferentes
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Avaliando Tri%cngulos\n\n", 131);
	double lado1, lado2, lado3;
	printf("Informe a medida da primeira aresta do tri%cngulo: ", 131);
	scanf("%lf", &lado1);
	printf("Informe a medida da segunda aresta do tri%cngulo: ", 131);
	scanf("%lf", &lado2);
	printf("Informe a medida da terceira aresta do tri%cngulo: ", 131);
	scanf("%lf", &lado3);
	//As três medidas formam um triângulo?
	 if((lado1 >= lado2 + lado3) || (lado2 >= lado3 + lado1) || (lado3 >= lado1 + lado2)){
	 	printf("\nEssas medidas n%co formam um tri%cngulo.", 198, 131);
	 }
	 else{
	 	//Temos pelo menos dois lados iguais?
	 	if( (lado1 == lado2) || (lado2 == lado3) || (lado3 == lado1)){
	 		//Dado que temos pelo menos dois lados iguais, temos 3 iguais?
			if((lado1 == lado2) && (lado2 == lado3)){
				printf("\nO tri%cngulo %c equil%ctero.\n\n", 131, 130, 160);
			}
			else{
				printf("\nO tri%cngulo %c is%csceles.\n\n", 131, 130, 162);
			}
		}
		else{
			printf("\nO tri%cngulo %c escaleno.\n\n", 131, 130);
		}
	}
	system("pause");
}
