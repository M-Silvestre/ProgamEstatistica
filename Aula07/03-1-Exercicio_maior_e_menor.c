/*************************************************
*        Autor: Matteus Silvestre                *
*        Aula: 07                                *
*        T�tulo: Exercicio maior e menor entre 3 *
*        Data: 08/03/2019                        *
*************************************************/
/*	Exerc�cio: Crie um programa em C que solicite tr�s n�meros
	ao usu�rio e apresente em tela o n�mero maior e o menor.*/

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
	partes reduntantes da condi��o sejam omitidas*/
	
	//num1 � o maior?
	if((num1 > num2) && (num1 > num3)){
		maior = num1;
		//Qual � o maior entre num2 e num3?
		if(num2 > num3) menor = num3;
		else menor = num2;
	}
	//Se cair no else, � porque num1 ou � o menor valor ou est� entre num2 e num3 
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
