/*****************************************
*        Autor: Matteus Silvestre        *
*        Aula: 01                        *
*        T�tulo: Aspas e coment�rios     *
*        Data: 14/12/2018                *
*****************************************/


//Se comenta em uma �nica linha assim

/*Coment�rio em v�rias linhas � feito
desse jeito, abrindo e fechando o trecho*/

/*O uso de coment�rios ajuda explicar o
funcionamento de um c�digo e/ou documentar seu
desenvolvimento, o que � �til se ele for
revisado e/ou reaproveitado no futuro, ou
compartilhado com outras pessoas*/

#include <stdio.h>

void main(void){
    printf("Hoje eh um dia \"LINDO\" com uma aula linda!!!\n");
    /*Por padr�o, C exibe apenas caracteres ASCII, ou seja, 
	nada de acentos ou � fora dos coment�rios*/
	
    printf("\nO caracter \" eh colocado no printf() ");
    /*O printf() abaixo foi usado para n�o deixar
    o c�digo de uma linha muito longo */

    //Note que � poss�vel comentar dentro do argumento de uma fun��o...
    printf("usando \\\".\n\n" /*...mas n�o � recomend�vel!*/);
}
