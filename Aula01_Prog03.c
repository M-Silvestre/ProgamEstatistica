/*****************************************
*        Autor: Matteus Silvestre        *
*        Aula: 01                        *
*        Título: Aspas e comentários     *
*        Data: 14/12/2018                *
*****************************************/


//Se comenta em uma única linha assim (Padrão C++)

/*Comentário em várias linhas é feito
desse jeito, abrindo e fechando o trecho*/

/*O uso de comentários ajuda explicar o
funcionamento de um código e/ou documentar seu
desenvolvimento, o que é útil se ele for
revisado e/ou reaproveitado no futuro, ou
compartilhado com outras pessoas*/

#include <stdio.h>

void main(void){
    printf("Hoje eh um dia \"LINDO\" com uma aula linda!!!\n");
    /*Por padrão, C exibe apenas caracteres ASCII, ou seja, 
	nada de acentos ou ç fora dos comentários*/
	
    printf("\nO caracter \" eh colocado no printf() ");
    /*O printf() abaixo foi usado para não deixar
    o código de uma linha muito longo */

    //Note que é possível comentar dentro do argumento de uma função...
    printf("usando \\\".\n\n" /*...mas não é recomendável!*/);
}
