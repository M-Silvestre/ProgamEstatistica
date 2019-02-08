/*****************************************
*        Autor: Matteus Silvestre        *
*        Aula: 01                        *
*        Título: Começando a programar   *
*        Data: 14/12/2018                *
*****************************************/

/*OBS: Compilador vs Interpretador de Linguagem de Programação

A linguagem de programação C é uma linguagem compilada, isto é,
antes de um código ser executado, ele é transformado por inteiro
em um arquivo executável por um programa chamado compilador.

Linguagens interpretadas, como Python ou R, são diferentes: 
O código fonte é transformado em linguagem de máquina linha por
linha, durante a execução, através de um interpretador.

Em geral, linguagens compiladas geram programas mais eficientes,
enquanto as interpretadas permitem melhor acompanhamento do
funcionamento do código.

O compilador/interpretador é apenas uma parte de um IDE (Ambiente 
de Desenvolvimento Integrado), que também inclui o editor de texto 
onde o código é escrito. Alguns IDEs de C/C++ são o CodeBlocks e o DevC++
*/


#include <stdio.h>
/*Tecnicamente, a diretiva "include" do compilador não é código C.
Antes de rodar o código, ela recebe uma biblioteca e suas
funções a partir de um arquivo tipo .h (header ou cabeçalho)

Por padrão, um programa C não inclui nenhuma biblioteca. Mas, dependendo do
compilador, a stdio ("Standard Input and Output", Entrada e Saída Padrão)
pode já vir inclusa em um novo programa.

A função main() é a função principal, necessária para qualquer programa em C
(mas não para todo código C. Uma biblioteca de funções, por exemplo,
não precisa de um main())

OBS: A Linguagem C é Case Sensitive, ou seja, diferencia maiúsculas e minúsculas!

No código abaixo, a função main() tem "void" como argumento (não tem argumentos)
e tem retorno do tipo "void" (não retorna informação utilizável).
Omitir essas especificações pode causar erros, dependendo do compilador utilizado.
 */
void main(void){
    printf("Hello Cruel World...\n"); 
    /*A função printf() recebe uma "string" (cadeia de caracteres) como argumento
    e exibe-a. O nome vem de "print", imprimir (na tela), e o "f" de formatado.
    
    OBS: Todo comando em C termina em ";" para separá-lo dos que vem antes e/ou depois.
    Sem o ";" erros de compilação VÃO ocorrer!*/
}
