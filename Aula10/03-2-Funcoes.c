/************************************
*        Autor: Matteus Silvestre   *
*        Aula: 10                   *
*        Título: Funções            *
*        Data: 29/03/2019           *
*************************************/
/*	
	Em C, você também pode criar suas próprias bibliotecas, caso
	não se queira que elas apareçam no código fonte. Como, por exemplo,
	se seu código tem várias funções implementadas.
	
	Bibliotecas padrão C têm seu nome entre <>, enquanto bibliotecas
	geradas pelo usuário usam "".
*/
#include <stdio.h>
#include <stdlib.h>
#include "03-3-Biblioteca.h" //Nossa função square() está arquivo 03-3-Biblioteca.h

int main(void){
	printf("Fun%c%ces (2)\n\n", 135, 228);
	int x;
	
	for(x = 1; x <= 10; x++)
		printf("%d\n", square(x));
	printf("\n");
	
	return 0;
};

