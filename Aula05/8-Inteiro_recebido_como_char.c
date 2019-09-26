/**********************************************
*        Autor: Matteus Silvestre             *
*        Aula: 05                             *
*        Título: Caracteres e inteiros (Obs)  *
*        Data: 22/02/2019                     *
***********************************************/

/*Observação: Apesar de ser possível converter int em char e vice-versa,
ler um int usando %c ou um char usando %d pode levar a comportamentos imprevisíveis.*/

#include <stdio.h>

void main(void){
	int num = 1000; //Valor inteiro, 00000011 11101000 em binário (ocupa 2 bytes)
	printf("Digite um caractere: ");
	scanf("%c", &num);
	/*Variáveis char ocupam apenas um byte. Logo, scanf() vai receber apenas um byte.
	Ou seja, apenas o segundo byte do inteiro é alterado!*/
	
	printf("O inteiro num = %d representa '%c' na tabela ASCII\n\n", num, (char) num);
	//Observe que inteiro não corresponde ao caractere!
	system("pause");
}
