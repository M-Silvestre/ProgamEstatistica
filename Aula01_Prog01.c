/*****************************************
*        Autor: Matteus Silvestre        *
*        Aula: 01                        *
*        Título: Começando a programar   *
*        Data: 14/12/2018                *
*****************************************/

#include <stdio.h>
/*Tecnicamente, a diretiva "include" do compilador não é código C.
Antes de rodar o código, ela recebe uma biblioteca e suas
funções a partir de um arquivo tipo .h (header ou cabeçalho)

Por padrão, C não inclui nenhuma biblioteca. Mas, dependendo do
compilador, a stdio ("Standard Input and Output", Entrada e Saída Padrão)
pode já vir inclusa em um novo programa.*/

/*A função main() é a função principal, necessária para qualquer programa em C
(mas não para todo código C)*/

//OBS: A Linguagem C é Case Sensitive, ou seja, diferencia maiúsculas e minúsculas

/*Nossa função main() tem "void" como argumentos (não tem argumentos)
e retorna "void" (não retorna informação). Omitir essas especificações
 pode causar erros, dependendo do compilador utilizado.*/
void main(void) 
{
    printf("Hello Cruel World...\n"); //Todo comando em C termina em ";"
    /*A função printf recebe uma "string" (cadeia de caracteres) como argumento
    e exibe-a. O nome vem de "print", imprimir (na tela), e o "f" de formatado.*/
}
