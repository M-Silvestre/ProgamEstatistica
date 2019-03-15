/************************************************
*        Autor: Matteus Silvestre               *
*        Aula: 08                               *
*        T�tulo: Exerc�cio multiplos de 1 a 10  *
*        Data: 15/03/2019                       *
*************************************************/
/*	
	Exerc�cio: Escreva um programa que exiba na tela
	as tabuada dos n�meros de 1 a 10, pulando uma linha
	entre cada uma.
	
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("M%cltiplos de 1 a 10\n\n", 163);
	
	//Precisaremos usar um while dentro de outro while!
	
	int n, i; //N�mero da tabuada e itera��o
	
	n = 1;
	while(n <= 10){ //Tabuadas de 1 a 10
		
		i = 1; //Lembre que recome�amos a contagem em cada tabuada!
		
		printf("Tabuada de %d:\n", n);
		
		while(i <= 10){ //Tabuada de n
			printf("%2d x %2d = %2d\n", n, i, n * i);
			i = i + 1;
		}
		
		putchar('\n'); //Pula uma linha
		
		n = n + 1; //Tabuada do pr�ximo n�mero
		
		//system("pause");
		/*Caso queira-se pausar entre cada tabuada, at� o usu�rio
		pressionar uma tecla qualquer.
		*/ 
	}
	putchar('\n');
	system("pause");
}
