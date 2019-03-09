/*****************************************
*        Autor: Matteus Silvestre        *
*        Aula: 07                        *
*        Título: Exercício de empréstimo *
*        Data: 08/03/2019                *
******************************************/
/*	Exercício: Um empresa abriu uma linha de crédito para
	os funcionários. O valor da prestação não pode
	ultrapassar 30% do salário. Faça um programa que
	receba o salário, o valor do empréstimo e o número
	de prestações e informe se o empréstimo pode ser concedido.
	Nenhum dos valores pode ser zero ou negativo. Sendo assim,
	o programa deverá alertar o usuário que cometer esse
	equívoco.
	
	Opcional: Limite as prestações para 36.
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Empr%cstimo empresarial\n\n", 130);
	double salario, emprestimo;
	int n_prestacao;
	
	printf("Informe o sal%crio: ", 160);
	scanf("%lf", &salario);
	printf("Informe valor do empr%cstimo: ", 130);
	scanf("%lf", &emprestimo);
	printf("Informe o n%cmero de presta%c%ces: ", 163, 135, 228);
	scanf("%d", &n_prestacao);
	if((salario <= 0.0) || (emprestimo <= 0.0)){
		printf("\nForam informados valores inv%clidos para o sal%crio ou valor do empr%cstimo.\n\n",
			160, 160, 130);
	}
	else{
		if(n_prestacao > 36){
			printf("\nN%co %c poss%cvel realizar empr%cstimo com mais de 36 parcelas.\n\n", 198, 130, 161, 130);
		}
		else{
			double prestacao;
			prestacao = emprestimo / n_prestacao;
			if(prestacao > 0.3 * salario){
				printf("\nAs presta%c%ces excedem 30%% com seu sal%crio\n\n", 135, 228, 160);			
			}
			else{
				printf("\nEmpr%cstimo aprovado\n"
					"Valor Total: R$ %.2f\n"
					"N%cmero de presta%c%ces: %d\n"
					"Valor das presta%c%ces: R$ %.2f\n\n",
					130, emprestimo, 163, 135, 228, n_prestacao, 135, 228, prestacao);
			}			
		}
	}
	system("pause");
}
