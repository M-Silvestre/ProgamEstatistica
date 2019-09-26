/********************************************
*        Autor: Matteus Silvestre           *
*        Aula: 03                           *
*        Título: Entrada de dados (scanf()) *
*        Data: 08/02/2019                   *
*********************************************/

#include <stdio.h>

void main(void){
    int a, b;
    printf("\nDigite um inteiro: ");
    /*A função scanf() permite que o programa receba informações
    durante sua execução e as armazene em variáveis*/
    scanf("%d", &a);
	
    printf("\nDigite um outro inteiro: ");
    scanf("%d", &b);
	
    /*É importante que os dados sejam informados na mesma maneira que o scanf() os lerá,
    Ex: inteiro, float ou char; presença de espaços ou vírgulas, parênteses ou hífen, etc.
    Caso contrário, valores incorretos podem ser recebidos (como um espaço ou um Enter 
    no lugar de um número) e levar a resultados incoerentes.
    
    O operador '&' significa endereço de memória, e no scanf() indica onde o
    valor recebido será armazenado. Neste caso, usar apenas o nome da variável 
    não é suficiente! */
    printf("\nO conteudo de \"a\" eh %d, o valor de \"b\" eh %d\n", a, b);
}
