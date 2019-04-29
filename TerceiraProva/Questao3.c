/*****************************************************
*        Autor: Matteus Silvestre                    *
*        Aula: 13                                    *
*        Título: Terceira Avaliação: Terceira Questão *
*        Data: 26/04/2019                            *
******************************************************/

/*	
	Questão 3: Crie uma função que que retorne o fatorial
	de um número natural.
*/

#include <stdio.h>

int fat(int n), fat_r(int n);

void main(void){
	printf("Fatorial de um n%cmero\n\n", 163);
	int n;
	printf("Informe um n%cmero natural: ", 163);
	scanf("%d", &n);
	printf("\n%d! = %d", n, fat(n));
	printf("\n%d! = %d", n, fat_r(n));
	
};

//Resposta:

//De forma não recursiva:
int fat(int n){
	if(n == 0 || n == 1)
		return 1;
	int i;	
	int res = 1;
	for(i = n; i > 1; i--)
		res *= i;
	return res;
};

//De forma recursiva
int fat_r(int n){
	if(n ==0 || n == 1)
		return 1;
	else
		return n * fat(n - 1);
}
