/*********************************************
*        Autor: Matteus Silvestre            *
*        Aula: 12                            *
*        Título: Variáveis Locais            *
*        Data: 12/04/2019                    *
**********************************************/
/*	
	É possível declarar variáveis de mesmo nome em escopos diferentes.
	Isto é, se em um bloco mais interno declaramos/usamos uma variável x,
	ela não interfere em uma variável x declarada e usada fora desse bloco.
	
	Se tentarmos usar uma variável dentro do bloco mais interno sem defini-la,
	o programa busca essa variável em escopos mais externos.
	
	OBS: A informação contida em uma variável local é destruída ao fim do
	bloco de código em que ela foi declarada. O único valor de uma função
	que pode ser usado no escopo mais externo é seu tipo de retorno.
	É conveniente guardar esse valor de retorno em uma variável, caso
	se queira trabalhar com esse valor.  
	
*/
#include <stdio.h>
#include <math.h>

float funcao(void);

int main(void){
	printf("Vari%cveis locais\n\n", 160);
	float i = 7.0, j = 9.0;
	
	{ //Início do bloco mais interno
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
	//"a" não pode ser mais usada a partir daqui
}
