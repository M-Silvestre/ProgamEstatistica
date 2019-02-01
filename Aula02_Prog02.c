/*****************************************
*        Autor: Matteus Silvestre        *
*        Aula: 02                        *
*        Título: Variáveis (continuação) *
*        Data: 14/12/2018                *
*****************************************/

#include <stdio.h>

void main(void){
    /*É possível atribuir valores a variáveis no
    momento em que são declaradas*/
    int mortalidade = 10, natalidade = 1000 ;
    float taxa;
    
    /*Por padrão, em C divisão de entre inteiros retorna inteiro
    (casas decimais são descartadas). 
    Ex: 9 dividido por 5 é igual 1.8, mas em C a divisão retornará 1*/
    taxa = mortalidade/natalidade;
    printf("O valor da taxa eh %.2f\n\n", taxa);
    
    /*Para forçar o retorno  tipo float,
    é preciso usar o "cast", que converte tipos*/
    taxa = (float) mortalidade/natalidade;
    printf("O valor da taxa eh %.2f\n\n", taxa);
    //O uso se %.2f em vez de %f limita o número de casas decimais para 2
}
