/****************************************
*        Autor: Matteus Silvestre       *
*        Aula: 08                       *
*        T�tulo: Soma e produto de n    *
*        Data: 15/03/2019               *
****************************************/
/*	
	Exerc�cio: Escreva um programa que calcule a soma e o
	produto dos n primeiros n�meros naturais.
	
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("Soma dos n primeiros naturais\n\n");
	
	int i, n, soma, produto;
	/*Uma vari�vel usada na repeti��o, outra para guardar o
	�ltimo n�mero do loop, uma para a soma e outra para 
	o produto*/
	printf("Informe o %cltimo natural da sequ%cncia: ", 163);
	scanf("%d", &n);
	//Vamos incializar a soma e o produto
	soma = 0;
	produto = 1;
	/*Come�ando com i = 1, enquanto i <= 10
	aumentando i em 1 ap�s cada repeti��o*/
	for(i = 1; i <= n; i = i + 1){
		soma = soma + i;
		produto = produto * i;
	}
	printf("Soma dos naturais de 1 a %d: %d\n", n, soma);
	printf("Produto dos naturais de 1 a %d: %d\n\n", n, produto);
	system("pause");
}
