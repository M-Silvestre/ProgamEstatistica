/*****************************************
*        Autor: Matteus Silvestre        *
*        Aula: 06                        *
*        T�tulo: if() else encadeados    *
*        Data: 01/03/2019                *
******************************************/

/*	Em algumas situa��es, um �nico teste de condi��es n�o
	� suficiente. Sendo, � preciso testar mais de uma condi��o.
	Para isoo, C permite comandos if() else dentro de outros if() else.
	
	OBS: todo else deve estrar associado a um if()
	
	Exerc�cio: escreva um programa em C que solicite um sal�rio
	ao usu�rio e mostre o imposto a pagar.
		Se o sal�rio for negativo, informar ao us�rio e parar o programa
		Se o sal�rio for maior que 1000, a taxa de imposte � 10%
		Se o sal�rio for menor ou igual que 1000, a taxa de imposte � 5%
			Adicional: Se o imposto � menor que R$ 1,00; exibir em centavos*/

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
