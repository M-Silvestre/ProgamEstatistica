/********************************************
*        Autor: Matteus Silvestre           *
*        Aula: 02                           *
*        Título: Exercício 01               *
*        Data: 01/02/2019                   *
*********************************************/

/*Exercício: Crie um programa que apresente tamanho (em número de bytes)
dos tipos de dados int, char, float e double*/

#include <stdio.h>

void main(void){
    int a;
    char b;
    float c;
    double d;
    printf("O tamanho de um inteiro eh %d byte(s).\n", sizeof(a));
    printf("O tamanho de um caractere eh %d byte(s).\n", sizeof(b));
    printf("O tamanho de um float eh %d byte(s).\n", sizeof(c));
    printf("O tamanho de um double eh %d byte(s).\n\n", sizeof(d));


}
