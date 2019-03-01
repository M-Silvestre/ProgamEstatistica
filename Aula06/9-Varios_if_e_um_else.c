/************************************************
*        Autor: Matteus Silvestre               *
*        Aula: 06                               *
*        T�tulo: V�rios if() e um �nico else    *
*        Data: 01/03/2019                       *
*************************************************/

/*	Vamos ver o que acontece ao usar mais de um if() e
	apenas um else
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	int a,b;
	printf("Introduza dois n%cmeros: ", 163);
	scanf("%d,%d", &a, &b);
	if(a >= 0)
		if(b > 10)
			printf("B %c muito grande.\n\n", 130);
	else 
	printf("A tem um valor negativo.\n\n");		
	/*Se voc� tentar usar os valores positivos para "a" e entre 1 e 9 para "b", 
	ver� que o programa n�o analisa "a" corretamente. 
	Isso ocorre porque, na presen�a de m�ltiplos if(), o else sempre est� associado
	ao if mais pr�ximo. Para associar o else do c�digo acima ao primeiro if(),
	seria necess�rio o uso de chaves:
	
		if(a >=0){
			if(b > 10)
				printf("B e muito grande.\n\n");
		} else 
		printf("A tem um valor negativo.\n\n");
	
	Apesar da identa��o ser uma boa pr�tica de programa��o, ela n�o tem poder nenhum sobre
	o funcionamento das fun��es em C.
	*/
	system("pause");
}
