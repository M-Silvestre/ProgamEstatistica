/*******************************************
*        Autor: Matteus Silvestre          *
*        Aula: 05                          *
*        Título: Relação entre char e int  *
*        Data: 22/02/2019                  *
********************************************/

/*Exercício 05: Escreva um programa que receba uma valor inteiro e represente
			o caractere associado a esse número pela tabela ASCII
*/

#include <stdio.h>

void main(void){
	printf("Relacao entre caracteres e inteiros pela tabela ASCII\n\n");
	int num;
	printf("Inteiro para caractere\n"
			"\tDigite um inteiro: ");
	scanf("%d", &num);
	fflush(stdin);
	printf("\tO inteiro %d equivale a '%c' na tabela ASCII\n\n", num, num);
	/*Ocorreu o chamado "casting" automático, ou seja, a conversão de tipos
	feita pela máquina (int para char)*/
	
	char ch;
	printf("Caractere para inteiro\n"
			"\tDigite um caractere: ");
	/*Inteiros menores que 0 ou maiores que 255 não  da tabela ASCII,
	por isso serão associados a caracteres fora da tabela*/
	scanf("%c", &ch);
	printf("\tO caractere '%c' equivale a %d na tabela ASCII\n\n", ch, (int) ch);
	/*Já aqui ocorreu "casting" não automático, ou seja, a conversão explicitade
	(char para int)
	O casting não automático é considerado boa prática de programação, pois
	explicita conversões de tipo no código. Além disso, algumas conversões não
	podem ser feitas automaticamente, como inteiro para real.*/
	system("pause");
}
