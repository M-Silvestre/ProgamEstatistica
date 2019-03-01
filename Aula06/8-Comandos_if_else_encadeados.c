/*****************************************
*        Autor: Matteus Silvestre        *
*        Aula: 06                        *
*        Título: if() else encadeados    *
*        Data: 01/03/2019                *
******************************************/

/*	Em algumas situações, um único teste de condições não
	é suficiente. Sendo, é preciso testar mais de uma condição.
	Para isoo, C permite comandos if() else dentro de outros if() else.
	
	OBS: todo else deve estrar associado a um if()
	
	Exercício: escreva um programa em C que solicite um salário
	ao usuário e mostre o imposto a pagar.
		Se o salário for negativo, informar ao usário e parar o programa
		Se o salário for maior que 1000, a taxa de imposte é 10%
		Se o salário for menor ou igual que 1000, a taxa de imposte é 5%
			Adicional: Se o imposto é menor que R$ 1,00; exibir em centavos*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	double salario;
	printf("Informe um valor para o sal%crio: ", 160);
	scanf("%lf", &salario);
	if(salario <= 0){
		printf("\nImposto n%co pode ser calculado para esse valor.\n\n", 198);
	} else{
		if(salario > 1000){
			printf("Imposto de 10%%: R$ %.2f\n\n", salario*0.10);
		} else{
			if((salario * 0.05) < 1.0){
				salario= salario * 100;
				printf("Imposto de 5%%: %.0f centavos\n\n", salario*0.05);
			} else{
				printf("Imposto de 5%%: R$ %.2f\n\n", salario*0.05);
			};
		}
	};
	system("pause");
}
