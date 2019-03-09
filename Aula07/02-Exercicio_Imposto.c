/***************************************
*        Autor: Matteus Silvestre      *
*        Aula: 07                      *
*        Título: Exercício Imposto     *
*        Data: 08/03/2019              *
****************************************/
/*	Exercício: Escreva um programa que calcule o salário bruto,
	o Salário Líquido e o Imposto a pagar seguindo a
	seguinte regra de tributação:
	
		Salário				Taxa
		<1000				5%
		>=1000 e <5000		11%
		>=5000				35%
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Sal%crio e Imposto\n\n", 160);
	double SalBruto, SalLiquido, Imposto;
	printf("Informe o sal%crio: ", 160);
	scanf("%lf", &SalBruto);
	//O salário é menor que 1000?
	if(SalBruto < 1e3){
		Imposto = 0.05 * SalBruto;
		SalLiquido = SalBruto - Imposto;
		printf("Sal%crio Bruto: R$ %.2f\n"
			"Imposto (5%%): R$ %.2f\n"
			"Sal%crio L%cquido: R$ %.2f\n\n",
			160, SalBruto, Imposto, 160, 161, SalLiquido);
	}
	else{
		//Dado que é maior ou igual a 1000, ele é menor que 5000?
		if(SalBruto < 5e3){
			Imposto = 0.11 * SalBruto;
			SalLiquido = SalBruto - Imposto;
			printf("Sal%crio Bruto: R$ %.2f\n"
				"Imposto (11%%): R$ %.2f\n"
				"Sal%crio L%cquido: R$ %.2f\n\n",
				160, SalBruto, Imposto, 160, 161, SalLiquido);
		}
		else{
			Imposto = 0.35 * SalBruto;
			SalLiquido = SalBruto - Imposto;
			printf("Sal%crio Bruto: R$ %.2f\n"
				"Imposto (35%%): R$ %.2f\n"
				"Sal%crio L%cquido: R$ %.2f\n\n",
				160, SalBruto, Imposto, 160, 161, SalLiquido);
		}
	}
	system("pause");
}
