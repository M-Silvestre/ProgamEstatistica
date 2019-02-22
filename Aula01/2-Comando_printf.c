/*****************************************
*        Autor: Matteus Silvestre        *
*        Aula: 01                        *
*        Título: O comando printf()      *
*        Data: 14/12/2018                *
*****************************************/

#include <stdio.h>

void main(void){
    /*O uso de identação deixa o código mais organizado
    e é considerado boa prática de programação.*/
    
    //Os cinco printf() abaixo...
    printf("Hello");
    printf(" ");
    printf("Mundo");
    printf(" ");
    printf("Cruel");
    /*...equivalem a printf("Hello Mundo Cruel") pois, por padrão
    a função printf() não muda de linha. Uma nova linha é
    representada pelo símbolo \n */
    printf("\nHello\nMundo\nCruel\n");
    
    /*A contrabarra é um caractere reservdado para tags do printf.
    Para exibir a própria contrabarra, basta usar duas contrabarras!*/
    printf("\nContrabarra: \\");
    //Voltando ao que tentamos no comando inicial
    printf("\n\nHello\n\nMundo\n\nCruel\n\n");
    //Há várias tags para o printf(). Por exemplo:
    printf("\aBeep: \\a"); //A tag \a representa um "beep" sonoro
}
