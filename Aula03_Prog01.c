/********************************************
*        Autor: Matteus Silvestre           *
*        Aula: 03                           *
*        Título: Entrada de dados (scanf()) *
*        Data: 08/02/2019                   *
*********************************************/

#include <stdio.h>

void main(void){
    int a, b;
    printf("\nDigite dois inteiros no formato (a b): ");
    /*A função scanf() permite que o programa receba informações
    durante sua execução e as armazene em variáveis*/
    
    scanf("(%d %d)", &a, &b);
    /*É importante que os dados sejam informados no mesmo formato que o scanf() os lerá,
    Ex: separados por espaços, vírgulas, presença de parenteses ou hífen, etc.
	  Caso contrário, valores incorretos podemser recebidos (como um espaço ou um Enter 
	  no lugar de um número) e levar a resultados incoerentes.
    
    O símbolo "&" siginifica endereço de memória, e no scanf() significa onde o
	  valor recebido será armazenado. Neste caso, usar apenas o nome da variável 
	  não é sufuciente!
    */
    printf("\n o conteudo de \"a\" eh %d, o valor de \"b\" eh %d\n", a, b);
}
