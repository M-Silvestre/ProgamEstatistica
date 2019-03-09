/***************************************
*        Autor: Matteus Silvestre      *
*        Aula: 07                      *
*        Título: Operados Logicos      *
*        Data: 08/03/2019              *
****************************************/
/*	Exercício: Para doar sangue, é necessário ter entre
	18 e 67 anos. Além disso, a pressoa só poderá doar sangue
	se não tiver nenhuma doençã que comprometa a qualidade do
	sangue doado. Construa um programa em C qe pergunte a 
	idade de uma pessoa e se ela possua alguma doença que
	possa comprometer a doação. O programa deverá informar se
	a pessoa é uma possível doadora ou não, dependendo das
	respostas apresentadas ao programa. */

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Doa%c%co de sangue\n\n", 135, 198);
	int idade;
	char doenca;
	
	printf("Informe a idade do indiv%cduo: ", 161);
	scanf("%d", &idade);
	printf("O indiv%cduo possui alguma doen%ca que possa"
	"comprometer a doa%c%co?\n(S para \"Sim\", N para \"N%co\") ",
	161, 135, 135, 198, 198);
	fflush(stdin); //Porque vamos usar scanf() para um char
	scanf("%c", &doenca);
	
	if( (doenca == 'N') && (idade >= 18) && (idade <= 67)){
		printf("O indiv%cduo pode doar sangue.\n\n", 161);
	} else{
		printf("O indiv%cduo n%co pode doar sangue.\n\n", 161, 198);
	}
	system("pause");
}
