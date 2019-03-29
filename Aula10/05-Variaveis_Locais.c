/*********************************************
*        Autor: Matteus Silvestre            *
*        Aula: 10                            *
*        T�tulo: Vari�veis Locais            *
*        Data: 29/03/2019                    *
**********************************************/
/*	
	� poss�vel declarar vari�veis de mesmo nome em escopos diferentes.
	Isto �, se em um bloco mais interno declaramos/usamos uma vari�vel x,
	ela n�o interfere em uma vari�vel x declarada e usada fora desse bloco.
	
	Se tentarmos usar uma vari�vel dentro do bloco mais interno sem defini-la,
	o programa busca essa vari�vel em escopos mais externos.
	
	
*/
#include <stdio.h>
#include <stdlib.h>
#include "04-1-Exercicio.h"

int main(void){
	printf("Vari%cveis locais\n\n", 160);
	float i = 7.0, j = 9.0;
	
	{ //In�cio do bloco mais interno
		float i = 77.0;
		printf("O valor de i %c %.2f e o valor de j %c %.2f\n", 130, i, 130, j);
	} //Fim do bloco mais interno
	printf("O valor de i %c %.2f\n", 130, i);
	
};
