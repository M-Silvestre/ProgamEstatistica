/********************************************
*        Autor: Matteus Silvestre           *
*        Aula: 02                           *
*        Título: Exercício 01 (sizeof())    *
*        Data: 01/02/2019                   *
*********************************************/

/*Exercício: Crie um programa que apresente tamanho (em número de bytes)
dos tipos de dados int, char, float e double*/

#include <stdio.h>

void main(void){
    printf("Tamanho em bytes dos tipos de dados na linguagem C:\n\n");

    /*Forma 1: Sem declarar variáveis
    printf("O tamanho de um inteiro eh %d byte(s).\n", sizeof(int));
    printf("O tamanho de um caractere eh %d byte(s).\n", sizeof(char));
    printf("O tamanho de um float eh %d byte(s).\n", sizeof(float));
    printf("O tamanho de um double eh %d byte(s).\n\n", sizeof(double));*/

    //Forma 2: Variáveis já declaradas
    int a;
    char b;
    float c;
    double d;
    printf("O tamanho de um inteiro eh %d byte(s).\n", sizeof(a));
    printf("O tamanho de um caractere eh %d byte(s).\n", sizeof(b));
    printf("O tamanho de um float eh %d byte(s).\n", sizeof(c));
    printf("O tamanho de um double eh %d byte(s).\n\n", sizeof(d));

    /*Forma 3: em um único printf()
    printf("O tamanho de um inteiro eh %d byte(s).\n"
            "O tamanho de um caractere eh %d byte(s).\n"
            "O tamanho de um float eh %d byte(s).\n"
            "O tamanho de um double eh %d byte(s).\n\n",
           sizeof(a), sizeof(b), sizeof(c), sizeof(d)); */
}
