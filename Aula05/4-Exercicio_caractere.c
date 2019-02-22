/****************************************
*        Autor: Matteus Silvestre       *
*        Aula: 05                       *
*        Título: Exercício (caractere)  *
*        Data: 22/02/2019               *
*****************************************/

/*Exercício 03: Escreva um programa que leia um caractere enviado 
pelo teclado e o escreva na tela

	Para um único caractere, a função getchar() pode ser usada
	no lugar de scanf(). Ela é feita especificamente para receber
	um caractere.
*/

#include <stdio.h>

void main(void){
	char char1 ;
	printf("Digite um caractere: ");
	char = getchar();
	printf("O caractere digitado foi %c\n", char1);
	system("pause");
}
