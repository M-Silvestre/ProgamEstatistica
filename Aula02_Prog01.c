/********************************************
*        Autor: Matteus Silvestre           *
*        Aula: 02                           *
*        Título: Operações entre Variáveis  *
*        Data: 01/02/2019                   *
*********************************************/

#include <stdio.h>
#include <math.h> //Biblioteca de funções matemáticas

void main(void){
    int num1, num2;
    double raiz;
    num1 = 2;
    num2 = 6;
    soma = num1 + num2;
    raiz = sqrt(num1 + num2); //sqrt() vem de "square root", raiz quadrada

    printf("A raiz quadra de (%d + %d) eh %.3f\n", num1, num2, raiz);
    //printf aceita funções de variáveis no argumento
    printf("A raiz quadra de (%d + %d) eh %.3f\n", num1, num2, sqrt(soma));
    printf("A raiz quadra de (%d + %d) eh %.3f\n\n", num1, num2, sqrt(num1+num2));

    //Lembrete que em C, operação entre inteiros sempre retorna inteiro!
    double div = num1/num2; //2 dividido por 6
    printf("%d dividido por %d eh %.3f\n", a, b , div);

    double num3, num4;
    num3 = 2.0;
    num4 = 6.0;
    div = num3/num4; //2.0 dividido por 6.0
    printf("%.1f dividido por %.1f eh %.3f\n\n", num3, num4, div);

    /*Não somente é possível atribuir valores a mais de uma variável em uma mesma linha,
    tamém é possível atribuir um mesmo valor a elas numa mesma linha*/
    int a, b;
    a = b = 7; //Lê-se da direita para a esquerda: "b" recebe 7, e "a" recebe "b"
    printf("O valor de a eh %d e o valor de b eh %d\n\n", a, b);

    /*Algumas operações entre inteiros não necessitam da biblioteca math.h
        +  : Soma
        -  : Subtração
        *  : Produto
        /  : Divisão(Quociente). Ex: 21/4 retorna 5
        %  : Módulo(Resto da divisão). Ex: 21%4 retorna 1
    */

}
