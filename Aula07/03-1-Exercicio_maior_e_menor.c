/*************************************************
*        Autor: Matteus Silvestre                *
*        Aula: 07                                *
*        Título: Exercicio maior e menor entre 3 *
*        Data: 08/03/2019                        *
*************************************************/
/*	Exercício: Crie um programa em C que solicite três números
	ao usuário e apresente em tela o número maior e o menor.*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Maior e menor entre 3 n%cmeros\n\n", 163);
	float num1, num2, num3, maior, menor;
	printf("Informe o primeiro n%cmero: ", 163);
	scanf("%f", &num1);
	printf("Informe o segundo n%cmero: ", 163);
	scanf("%f", &num2);
	printf("Informe o terceiro n%cmero: ", 163);
	scanf("%f", &num3);
	
	/*O uso de um if() else dentro de outro permite que
	partes reduntantes da condição sejam omitidas*/
	
	//num1 é o maior?
	if((num1 > num2) && (num1 > num3)){
		maior = num1;
		//Qual é o maior entre num2 e num3?
		if(num2 > num3) menor = num3;
		else menor = num2;
	}
	//Se cair no else, é porque num1 ou é o menor valor ou está entre num2 e num3 
	else{
		if(num2 > num3){
			maior = num2;
			if(num1 > num3) menor = num3;
			else menor = num1;
		}
		else{
			maior = num3;
			if(num1 > num2) menor = num2;
			else menor = num1;
		}
	}
	printf("Maior n%cmero: %.2f\nMenor n%cmero: %.2f\n\n", 163, maior, 163, menor);
	system("pause");
}
