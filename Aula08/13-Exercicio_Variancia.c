/*******************************************************
*        Autor: Matteus Silvestre                      *
*        Aula: 9                                       *
*        T�tulo: Exerc�cio: Vari�ncia e Desvio padr�o  *
*        Data: 29/03/2019                              *
*******************************************************/
/*	
	Exerc�cio: Construa um programa em C que calcule a vari�ncia
	amostral de uma sequ�ncia de observa��es passadas pelo usu�rio.
	
	Exerc�cio: Calcule um programa em C que calcule o desvio padr�o
	amostral de uma sequ�ncia de observa��es passadas pelo usu�rio.
	
	(Dica: utilize a fun��o sqrt() da biblioteca math.h, isto �, fa�a
	#include <math.h> para ter acesso � fun��o raiz quadrada).

*/

#include <stdio.h>
#include <math.h>

void main(void){
	printf("Vari%cncia e desvio padr%co de n observa%c%ces\n\n", 131, 198, 135, 228);
	int i, n;
	double termo, soma1, soma2, media, var;
	printf("Informe o n%cmero de observa%c%ces: ", 163, 135, 228);
	scanf("%d", &n);
	
	/*A vari�ncia � dada por Soma((Xi - Xm)^2)/n, onde:
	    Soma() : somat�rio de i = 1 at� i = n
		Xm : m�dia observada da amostra
		Xi : elemento de �ndice i da amostra
		n : n�mero de elementos da amostra
		e i varia de 1 a n.
		
	Se efetuarmos o quadrado da variancia, teremos ela ser� igual a:
		Soma((Xi-Xm)*(Xi-Xm)) / n
		= Soma(Xi^2 -2*Xi*Xm + Xm^2)/n
		= (Soma(Xi^2) + Soma(- 2*Xm*Xi) + Soma(Xm^2)) / n
		= (Soma(Xi^2) - 2*Xm*Soma(Xi) + n*Xm^2)) / n
	Com os termos separados assim, podemos efetuar o c�lculo da vari�ncia usando
	nossos conhecimentos atuais.	
		*/
	soma1 = 0;
	soma2 = 0;
	putchar('\n');
	for(i = 1; i <= n; i++){
		printf("Informe o %d%c n%cmero real: ", i, 167, 163);
		scanf("%lf", &termo);
		soma1 = soma1 + termo; //Soma(Xi)
		soma2 = soma2 + pow(termo, 2); //Soma(Xi^2)
	}
	media = soma1 / n; //Media
	var = (soma2 - 2*media*soma1 + n*pow(media, 2)) / n;
	
	printf("\nA m%cdia das %d observa%c%ces %c igual a %.2f", 130, n, 135, 228, 130, media);
	printf("\nA vari%cncia das %d observa%c%ces %c igual a %.2f", 131, n, 135, 228, 130, var);
	printf("\nA desvio padr%co das %d observa%c%ces %c igual a %.2f\n", 198, n, 135, 228, 130, sqrt(var));
}
