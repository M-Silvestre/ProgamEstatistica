/************************************
*        Autor: Matteus Silvestre   *
*        Aula: 10                   *
*        T�tulo: Fun��es            *
*        Data: 29/03/2019           *
*************************************/
/*	
	Em C, voc� tamb�m pode criar suas pr�prias bibliotecas, caso
	n�o se queira que elas apare�am no c�digo fonte. Como, por exemplo,
	se seu c�digo tem v�rias fun��es implementadas.
	
	Bibliotecas padr�o C t�m seu nome entre <>, enquanto bibliotecas
	geradas pelo usu�rio usam "".
*/
#include <stdio.h>
#include <stdlib.h>
#include "03-3-Biblioteca.h" //Nossa fun��o square() est� arquivo 03-3-Biblioteca.h

int main(void){
	printf("Fun%c%ces (2)\n\n", 135, 228);
	int x;
	
	for(x = 1; x <= 10; x++)
		printf("%d\n", square(x));
	printf("\n");
	
	return 0;
};

