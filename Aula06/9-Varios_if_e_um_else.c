/************************************************
*        Autor: Matteus Silvestre               *
*        Aula: 06                               *
*        Título: Vários if() e um único else    *
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
	/*Se você tentar usar os valores positivos para "a" e entre 1 e 9 para "b", 
	verá que o programa não analisa "a" corretamente. 
	Isso ocorre porque, na presença de múltiplos if(), o else sempre está associado
	ao if mais próximo. Para associar o else do código acima ao primeiro if(),
	seria necessário o uso de chaves:
	
		if(a >=0){
			if(b > 10)
				printf("B e muito grande.\n\n");
		} else 
		printf("A tem um valor negativo.\n\n");
	
	Apesar da identação ser uma boa prática de programação, ela não tem poder nenhum sobre
	o funcionamento das funções em C.
	*/
	system("pause");
}
