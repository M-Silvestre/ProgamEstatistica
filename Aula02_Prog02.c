/********************************************
*        Autor: Matteus Silvestre           *
*        Aula: 02                           *
*        T�tulo: Inteiros e varia��es       *
*        Data: 01/02/2019                   *
*********************************************/

#include <stdio.h>

void main(void){
    /*Dependendo da arquitetura do computador (32 ou 64 bits),
    um n�mero inteiro pode ser representado por quantidades
    diferentes de bytes. Al�m disso, o primeiro bit do n�mero � usado para
    representar seu sinal (positivo ou negativo).
    Isso influencia a representatividade dos dados, isto �; quantos n�meros
    podem ser representados por esse n�mero de bytes. N�meros muito grandes
    ou de muitas casas decimais podem exigir mais espa�o para serem armazenados.
    */
    int a, tamanho;
    tamanho = sizeof(a);
    printf("O tamanho de um inteiro eh %d bytes\n\n", tamanho);

    /*C permite que um programa a mesma quantidade de bytes
    independente da arquitetura do computador, usando quatro prefixos:
        short: Inteiro pequeno (2 bytes)
        long: inteiro grande (4 bytes)
        signed: inteiro com sinal (padr�o)
        unsigned: inteiro positivo (maior representatividade)
    */
    short signed int b;
    printf("O valor de a (short int) eh %d\n", sizeof(b));

    long unsigned int c;
    printf("O valor de b (long int) eh %d\n", sizeof(c));
}
