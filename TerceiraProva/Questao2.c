/*****************************************************
*        Autor: Matteus Silvestre                    *
*        Aula: 13                                    *
*        Título: Terceira Avaliação: Segunda Questão *
*        Data: 26/04/2019                            *
******************************************************/

/*	
	Questão 2: Crie uma função que que retorne o valor de pi
	pela aproximação:
		pi = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 ...
	Dica: use o número de termos da soma como argumento
	
	OBS: As questões pediam apenas a função como resposta. O resto
	de programa era opcional.
*/

#include <stdio.h>

double pi(int n), pi_r(int n); //Respostas na forma convencional e recursiva

void main(void){
	printf("C%clculo aproximado de pi\n\n", 160);
	int n;
	printf("Informe o n%cmero de termos da aproxima%c%co: ", 163, 135, 198);
	scanf("%d", &n);
	printf("\nPi aproximado com %d termos %c %f", n, 130, pi(n));
	printf("\nPi aproximado recursivamente com %d termos %c %f", n, 130, pi_r(n));
	
};

//Respostas:

//De forma não recursiva
double pi(n){
	int i;
	double soma;
	
	soma = 0.0; //Precisamos assegurar que a soma começa em zero
	
	for(i = 1; i <= n; i++){
		/*Dependendo do índice do termo, ele será somado ou subtraído
		da soma. Começando em 1, todos os ímpares são somados e os ímpares
		serão subtraídos*/
		if(i%2 == 0)
			soma = soma - ( 4.0 / ( (2 * i) - 1.0) );
		else
			soma = soma + ( 4.0 / ( (2 * i) - 1.0) );
		
	};
	return soma;
}

//De forma recursiva
double pi_r(n){
	if(n == 1)
		return 4;
	if(n%2 == 0)
		return pi(n - 1) - 4.0/(2*n - 1.0);
	else
		return pi(n - 1) + 4.0/(2*n - 1.0);
}

/*	OBS:A soma não fornece uma aproximação boa de pi com valores de n pequeno.
	Tente testar valores de n como 20, 30 ou 40 em vez de 1~10
*/
