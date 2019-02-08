/********************************************
*        Autor: Matteus Silvestre           *
*        Aula: 02                           *
*        Título: Inteiros e variações       *
*        Data: 01/02/2019                   *
*********************************************/

#include <stdio.h>

void main(void){
    /*Dependendo da arquitetura do computador (32 ou 64 bits),
    um número inteiro pode ser representado por quantidades
    diferentes de bytes. Além disso, o primeiro bit do número é usado para
    representar seu sinal (positivo ou negativo).
    Isso influencia a representatividade dos dados, isto é; quantos números
    podem ser representados por esse número de bytes. Números muito grandes
    ou de muitas casas decimais podem exigir mais espaço para serem armazenados.
    */
    int a, tamanho;
    tamanho = sizeof(a);
    printf("O tamanho de um inteiro eh %d bytes\n\n", tamanho);

    /*C permite que um programa a mesma quantidade de bytes
    independente da arquitetura do computador, usando quatro prefixos:
        short: Inteiro pequeno (2 bytes)
        long: inteiro grande (4 bytes)
        signed: inteiro com sinal (padrão)
        unsigned: inteiro positivo (maior representatividade)
    O comando sizeof() tem como argumento uma variável ou tipo de
    variável e retorna seu tamanho em número inteiro de bytes.
    */
    short signed int b;
    printf("O valor de a (short int) eh %d\n", sizeof(b));

    long unsigned int c;
    printf("O valor de b (long int) eh %d\n", sizeof(c));
}
