/*****************************************
*        Autor: Matteus Silvestre        *
*        Aula: 01                        *
*        T�tulo: O comando printf()      *
*        Data: 14/12/2018                *
*****************************************/

#include <stdio.h>

void main(void){
    /*O uso de identa��o deixa o c�digo mais organizado
    e � considerado boa pr�tica de programa��o.*/
    //Os cinco printf() abaixo...
    printf("Hello");
    printf(" ");
    printf("Mundo");
    printf(" ");
    printf("Cruel");
    /*...equivalem a printf("Hello Mundo Cruel") pois, por padr�o
    a fun��o printf() n�o muda de linha. Uma nova linha �
    representada pelo s�mbolo \n */
    printf("\nHello\nMundo\nCruel\n");
    /*A contrabarra � um caractere reservdado para tags do printf.
    Para exibir a pr�pria contrabarra, basta usar duas contrabarras!*/
    printf("\nContrabarra: \\");
    //Voltando ao que tentamos no comando inicial
    printf("\n\nHello\n\nMundo\n\nCruel\n\n");
    //H� v�rias tags para o printf(). Por exemplo:
    printf("\aBeep: \\a"); //A tag \a representa um "beep" sonoro
}
