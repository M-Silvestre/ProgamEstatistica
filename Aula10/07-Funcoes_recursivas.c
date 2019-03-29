/**************************************
*        Autor: Matteus Silvestre     *
*        Aula: 10                     *
*        Título: Função Recursiva     *
*        Data: 29/03/2019             *
***************************************/
/*	
	Exercício: Escreva em programa em C que recebe um
	número interio positivo e exiba seu fatorial.
*/
#include <stdio.h>

long unsigned int fat(int);

int main(void){
	printf("Exerc%ccio Fatorial\n\n", 161);
	long int num;
	printf("Informe o n%cmero: ", 163);
	scanf("%d", &num);
	if(num >= 0)
		printf("\nO fatorial de %d %c %ld", num, 130, fat(num));
	else
		printf("\nO fatorial est%c definido apenas para inteiros n%co negativos.", 160, 198);
};

long unsigned int fat(int x){
	int i;
	if(x == 0)
		return 1;
	long unsigned int res = 1;
	for(i = 1; i <= x; i++)
		res *= i;
	return res;
}

