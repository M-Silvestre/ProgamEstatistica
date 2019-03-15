/************************************
*        Autor: Matteus Silvestre   *
*        Aula: 08                   *
*        Título: Diretiva define    *
*        Data: 15/03/2019           *
*************************************/
/*	Exercício: Escreva um programa que escreva números na forma:
	
	1
	1 2
	1 2 3
	...
	1 2 3 4 5 6 7 8 9 10
	
	De tal forma que ele possa ser genralizado para sequências
	maiores ou menores que 10.

	Opcional: para exercitar seu conhecimento, tente resolver os exemplos
	anteriores que involem while() usando for(), e os que envolvem for()
	usando o while().
*/

#include <stdio.h>
#include <stdlib.h>

#define N 10 /*A diretiva define permite substituir um termo por um valor
				em todo o programa. NÃO é o mesmo que criar uma variável!*/

void main(void){
	printf("Loops com break e diretiva define\n\n");
	int i,j;
	
	//OBS: var++ equivale à incrementeção var = var + 1
	
	for(i = 1; i <= N; i++){
		for(j = 1; j <= N; j++){
			printf("%d ", j);
			if(i == j)
				break;
		}
		putchar('\n');
	}
	
	/*Sem usar o break:
	for(i = 1; i <= N; i++){
		for(j = 1; j <= i; j++){
			printf("%d ", j);
		}
		putchar('\n');
	}*/
	
	system("pause");
}
