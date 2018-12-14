/*****************************************
*        Autor: Matteus Silvestre        *
*        Aula: 01                        *
*        T�tulo: Come�ando a programar   *
*        Data: 14/12/2018                *
*****************************************/

#include <stdio.h>
/*Tecnicamente, a diretiva "include" do compilador n�o � c�digo C.
Antes de rodar o c�digo, ela recebe uma biblioteca e suas
funcoes a partir de um arquivo tipo .h (header ou cabe�alho)

Por padr�o, C n�o inclui nenhuma biblioteca. Mas, dependendo do
compilador, a stdio pode j� vir inclusa em um novo programa*/

//A fun��o main() � necess�ria para qualquer programa (mas n�o para todo c�digo C)
//OBS: A Linguagem C � Case Sensitive, ou seja, diferencia mai�sculas e min�sculas
void main(void) //Nossa fun��o main() n�o tem argumentos e retorna "void"
{
    printf("Hello Cruel World...\n");
    /*A fun��o printf recebe uma "string"
    (cadeia de caracteres) como argumento e exibe-a*/
}
