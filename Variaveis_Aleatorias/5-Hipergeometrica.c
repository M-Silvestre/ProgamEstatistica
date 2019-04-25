/*
	Exercício: Um programa em C que calcula a probabilidade de
	uma variável aleatória X hipergeométrica ser igual a um valor informado.
	
	O parâmetros também serão informados pelo usuário.
*/

#include <stdio.h>
#include "distrib_probs.h"
    
int main (void){
    int n, x , N , r ;
    double z;
    
    printf( "Informe o n%cmero total de elementos: ", 163);
    scanf("%d", &N);
    printf("Informe o n%cmero de elementos da amostra: ", 163);
    scanf("%d", &n);
    printf("Informe  o n%cmero total de elementos de interesse: ", 163);
    scanf("%d", &r);
    printf("Informe um n%cmero de elementos de interesse da amostra: ", 163);
    scanf("%d", &x);
    z = hipergeo(N, n, r, x);
    printf("\nA probabilidade de X ser igual a %d %c %.2f%%\n\n", x, 130, 100*z);
}
