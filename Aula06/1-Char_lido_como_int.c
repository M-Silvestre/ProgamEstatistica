/***********************************************
*        Autor: Matteus Silvestre              *
*        Aula: 06                              *
*        Título: Outros Detalhes (int e char)  *
*        Data: 01/03/2019                      *
************************************************/
/*
	Nesse exemplo, ao ser pedido a entrada de um inteiro, introduza o número 16706
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	char ch1 = 'X', ch2 = 'Y';
	/*Cada variável char ocupa um byte (8 bits). Normalmente, varáveis do tipo char
	ocupam espaços consecutivos de memória.
	O caractere X corresponde ao inteiro 88, ou (01011000) em binário
	O caractere Y corresponde ao inteiro 89, ou (01011001) em binário
	*/
	printf("Introduza um Inteiro: ");
	scanf("%d", &ch2);
	/*16706 em binário é (01000001 01000010), ocupa 2 bytes
	O programa tenta colocar esse conteúdo em ch2, mas o primeiro byte
	extravaza para ch1
	ch1 recebe o byte (01000001), ou 65, que corresponde a 'A'
	ch2 recebe o byte (01000010), ou 66, que corresponde a 'B'*/
	printf("O valor de ch1  = '%c' e o valor de ch2 = '%c'\n\n", ch1, ch2);
	/*Conclusão: é possível instanciar o valor de um char através de um int.
	Porém, se o inteiro ocupa mais de 1 byte (maior que 255), ocorre estravazamento
	de memória, isto é, endereços de memória além do desejado podem ser alterados,
	ou o programa tenta acessar endereços de memória não disponíveis.
	
	É importante sempre usar os tipos corretos na leitura de dados e não usar o
	casting automático, para evitar resultados imprevisíveis ou indesejados.*/
	system("pause");
}
