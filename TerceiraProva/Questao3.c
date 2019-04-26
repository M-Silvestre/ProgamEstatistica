/*****************************************************
*        Autor: Matteus Silvestre                    *
*        Aula: 13                                    *
*        Título: Terceira Avaliação: Terceira Questão *
*        Data: 26/04/2019                            *
******************************************************/

/*	Questão 3: Crie uma função que que retorne o fatorial
	de um número natural.
*/

#include <stdio.h>

int fat(int n);

void main(void){
	printf("Fatorial de um n%cmero\n\n", 163);
	int n;
	printf("Informe um n%cmero natural: ", 163);
	scanf("%d", &n);
	printf("\n%d! = %d", n, fat(n));
	
};

//Resposta:
int fat(n){
	if(n ==0 || n == 1)
		return 1;
	else
		return n * fat(n - 1);
}
