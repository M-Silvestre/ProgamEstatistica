/*********************************************
*        Autor: Matteus Silvestre            *
*        Aula: 12                            *
*        T�tulo: Vari�veis Locais            *
*        Data: 12/04/2019                    *
**********************************************/
/*	
	� poss�vel declarar vari�veis de mesmo nome em escopos diferentes.
	Isto �, se em um bloco mais interno declaramos/usamos uma vari�vel x,
	ela n�o interfere em uma vari�vel x declarada e usada fora desse bloco.
	
	Se tentarmos usar uma vari�vel dentro do bloco mais interno sem defini-la,
	o programa busca essa vari�vel em escopos mais externos.
	
	OBS: A informa��o contida em uma vari�vel local � destru�da ao fim do
	bloco de c�digo em que ela foi declarada. O �nico valor de uma fun��o
	que pode ser usado no escopo mais externo � seu tipo de retorno.
	� conveniente guardar esse valor de retorno em uma vari�vel, caso
	se queira trabalhar com esse valor.  
	
*/
#include <stdio.h>
#include <math.h>

float funcao(void);

int main(void){
	printf("Vari%cveis locais\n\n", 160);
	float i = 7.0, j = 9.0;
	
	{ //In�cio do bloco mais interno
		float i = 77.0;
		printf("O valor de i %c %.2f e o valor de j %c %.2f\n", 130, i, 130, j);
	} //Fim do bloco mais interno
	printf("O valor de i %c %.2f\n", 130, i);
	
	float retorno = funcao();
	
	printf("\nO valor de retorno de funcao() %c %.2f\n\n", 130, retorno); 
	
};

float funcao(void){
	float a = 1.3;
	return sqrt(a + 1);
	//"a" n�o pode ser mais usada a partir daqui
}
