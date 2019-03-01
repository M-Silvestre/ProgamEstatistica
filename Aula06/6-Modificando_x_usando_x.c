/*****************************************
*        Autor: Matteus Silvestre        *
*        Aula: 06                        *
*        T�tulo: Mudando X usando X *
*        Data: 01/03/2019                *
******************************************/
/*	Exerc�cio: Implemente um programa que recebe um valor de
	salario e, se o salario for menor que 100000, adiciona 1000
	*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	double salario;
	printf("Informe um sal%crio: ", 160);
	//O inteiro 160 corresponde ao caractere '�'
	scanf("%lf", &salario);
	if(salario < 1e05){ //salario � menor que 100000?
		salario = salario + 1e03;
		/*C permite instanciar um novo valor para uma vari�vel
		usando seu valor anterior. Por exemplo, se temos um x = 5,
		podemos usar x = x + 1, e ent�o x ser� igual a 6*/ 
		printf("\nO novo sal%crio %c R$ %.2f", 160, 130, salario);
	} else{
		printf("\nN%co houve alterac%co no sal%crio de R$ %.2f", 198, 198, 130, salario);
	}
}
