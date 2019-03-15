/************************************
*        Autor: Matteus Silvestre   *
*        Aula: 08                   *
*        Título: O comando for()    *
*        Data: 15/03/2019           *
*************************************/
/*	
	Outra estrutura de repetição é o for(), usado quando 
	e tem uma ideia de quantas repetições sequer ou uma 
	incrementação pré determinada. Sua notação é:
	
		for( cargas inicias; condição; pós instrução)
			intrução;
		ou
		
		for( cargas inicias; condição; pós instrução){
			intrução1;
			intrução2;
			...
		}
	Onde:
		cargas iniciais: ações executadas uma única vez antes das repetições
		condição: Enquanto for verdadeira, o loop continua.
		pós instrução: ação a ser executada depois de cada loop, EX: incrementação
		
	OBS: Convém declarar uma variável tipo int e usá-la 
	exclusivamente para incrementação
	
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Exemplo de \"for()\"\n\n");
	/*Vamos tentar reproduzir o resultado de um dos
	exemplos de while(), escrever os números de 1 a 10*/
	
	int i; //Será usada para "caminhar" pelo for()
	
	/*Nosso loop começa em i = 1, roda enquanto
	 i <= 10, e a cada repetição i aumenta em 1*/
	for(i = 1; i <=10; i = i + 1)
		printf("i = %d\n", i);
	putchar('\n');
	system("pause");
}
