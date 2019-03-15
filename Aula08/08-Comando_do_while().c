/****************************************
*        Autor: Matteus Silvestre       *
*        Aula: 08                       *
*        Título: O comando do while()    *
*        Data: 15/03/2019               *
****************************************/
/*	
	O comando do while() é muito semelhante ao while(),
	mas sua condição é checada DEPOIS da execução da
	instrução. Sintaxe:
		do
			instrução;
		while(condição)
	
	Como consequência, as intruções serão executadas pelo menos uma vez
	
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Exemplo de \"do while()\"\n\n");
	
	int num = 1; //Checa se o loop continua
	char opcao; //Informada pelo usuário
	
	do {
		printf("Informe a inicial de uma das op%c%ces abaixo:\n"
			"Clientes\n"
			"Fornecedores\n"
			"Encomendas\n"
			"Sair\n"
			"Op%c%co: ", 135, 228, 135, 198);
		scanf("%c", &opcao);
		fflush(stdin); //scanf() de char
		
		switch(opcao){
			case 'c':	
			case 'C':
				printf("\nFoi escolhida a op%c%co \"Clientes\"\n\n", 135, 198);
				break;
			case 'e':
			case 'E':
				printf("\nFoi escolhida a op%c%co \"Encomendas\"\n\n", 135, 198);
				break;
			case 'f':
			case 'F':
				printf("\nFoi escolhida a op%c%co \"Fornecedor\"\n\n", 135, 198);
				break;
			case 's':
			case 'S':
				num = 0;
				break;
			default:
				printf("\nOp%c%co inv%clida\n\n", 135, 198, 160);
		}
	}while(num);
	/*A código chega aqui apenas se sair do loop, ou seja,
	se a opção "sair" for escolhida. */
	printf("\n\nFoi escolhida a op%c%co \"Sair\".\n\n", 135, 198);
	system("pause");
}
