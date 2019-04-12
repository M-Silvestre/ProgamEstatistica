/**************************************
*        Autor: Matteus Silvestre     *
*        Aula: 10                     *
*        T�tulo: Fun��o Recursiva     *
*        Data: 29/03/2019             *
***************************************/
/*	
	Fun��o recursiva � aquelas que chama a si mesma em sua
	execu��o. Isso � desej�vel em alguns casos por deixar
	o c�digo mais compacto, mas elas possuem maior custo
	computacional, pois ela � executada v�rias vezes.
	
	Exerc�cio: Escreva em programa em C que recebe um
	n�mero interio positivo e exiba seu fatorial.
*/
#include <stdio.h>

int fat(int), fat_r(int);


int main(void){
	printf("Exerc%ccio Fatorial\n\n", 161);
	long int num;
	printf("Informe o n%cmero: ", 163);
	scanf("%d", &num);
	if(num >= 0)
		//printf("\nO fatorial de %d %c %d", num, 130, fat(num));
		printf("\nO fatorial de %d %c %d", num, 130, fat_r(num));
	else
		printf("\nO fatorial est%c definido apenas para inteiros n%co negativos.", 160, 198);
};

//Fatorial de forma n�o recursiva
int fat(int n){
	int i;	
	long unsigned int res = 1;
	//Vamos fazer o produto de i * (i - 1) * (i - 2)... = i!
	for(i = n; i > 1; i--)
		res *= i;
	return res;
}

//Fatorial de forma recursiva
int fat_r(int n){
	if(n < 1) return 1;
	else return (n * fat_r(n - 1));
}

/*Digamos que come�amos com n = 3
		fat_r(3) retorna 3*fat_r(2),
		fat_r(2) retorna 2*fat_r(1),
		fat_r(1) retorna 1*fat_r(0),
		fat_r(0) retorna 1 (cai no if(n < 1)), e a recurs�o para.
		
		Portanto, fat(3) retorna 3*2*1*1 = 6, e 6 = 3!

*/
