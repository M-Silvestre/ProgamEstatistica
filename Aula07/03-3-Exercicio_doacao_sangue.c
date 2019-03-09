/***************************************
*        Autor: Matteus Silvestre      *
*        Aula: 07                      *
*        T�tulo: Operados Logicos      *
*        Data: 08/03/2019              *
****************************************/
/*	Exerc�cio: Para doar sangue, � necess�rio ter entre
	18 e 67 anos. Al�m disso, a pressoa s� poder� doar sangue
	se n�o tiver nenhuma doen�� que comprometa a qualidade do
	sangue doado. Construa um programa em C qe pergunte a 
	idade de uma pessoa e se ela possua alguma doen�a que
	possa comprometer a doa��o. O programa dever� informar se
	a pessoa � uma poss�vel doadora ou n�o, dependendo das
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
