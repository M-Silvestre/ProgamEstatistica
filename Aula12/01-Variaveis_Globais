/*******************************************
*        Autor: Matteus Silvestre          *
*        Aula: 12                          *
*        Título:  Variáveis Globais        *
*        Data: 12/04/2019                  *
********************************************/
/*
	Chama-se de variáveis globais aquelas declaradas antes da
	função main(). Elas são visíveis para funções em todo o
	programa.
	Quando uma variável local tem o mesmo nome que uma global,
	o programa prioriza a variável de escopo mais próximo.
	
	Raramente se usam, pois usar muitas delas no programa pode 
	exigir maior custo computacional do que variáveis locais,
	e o uso de variáveis locais com mesmo nome de globais pode 
	gerar efeitos colaterais.
*/


#include <stdio.h>
#include <stdlib.h>

float a = 1.3; //Isso é uma variável global

void funcao(void);

void main(void){
	//float a = 1.3
	funcao();	
};

void funcao(void){
	float a = 2.7;
	/*Mesmo nome, mas em outro endereço de memória.
	O programa procura*/
	printf("O valor de a %c: %.1f", 130, a);
}
