/*****************************************************
*        Autor: Matteus Silvestre                    *
*        Aula: 13                                    *
*        Título: Terceira Avaliação: Quinta Questão  *
*        Data: 26/04/2019                            *
******************************************************/

/*	Questão 5: Crie uma função que que retorne a
	aproximação de e^x pela soma de n termos. A soma é:
	
	e^x = somatório( x^n / n!)
	
	Sua função precisará de x e n como argumentos, e poderá
	aproveitar a função fatorial usada na Questão 3.
*/

#include <stdio.h>
#include <math.h>

//Da questão 3, temos:
int fat(n){
	if(n ==0 || n == 1)
		return 1;
	else
		return n * fat(n - 1);
};

//Nossa função recebe um inteiro e um número real
double aprox_ex(int n, double x), aprox_ex_r(int n, double x);

void main(void){
	printf("C%clculo aproximado da exponencial\n\n", 160);
	int n;
	double x;
	printf("Informe o n%cmero de termos da soma: ", 163);
	scanf("%d", &n);
	printf("Informe o expoente x: ");
	scanf("%lf", &x);
	printf("\ne^%f aproximado com %d termos %c %f", x, n, 130, aprox_ex(n, x));
	printf("\ne^%f aproximado recursivamente com %d termos %c %f", x, n, 130, aprox_ex_r(n, x));
	
};

//Respostas:

//De forma não-recursiva:
double aprox_ex(int n, double x){
	int i;
	double soma = 0;
	for(i = 0; i < n; i++){
		soma += (pow(x, i) / fat(i) );
	}
	return soma;
};

//Recursivamente
double aprox_ex_r(int n, double x){
	if(n == 0)
		return 1;
	return ( pow(x, n) / fat(n) ) + aprox_ex(n - 1, x);
}
