/*****************************************
*        Autor: Matteus Silvestre        *
*        Aula: 02                        *
*        T�tulo: Vari�veis (continua��o) *
*        Data: 14/12/2018                *
*****************************************/

#include <stdio.h>

void main(void){
    /*� poss�vel atribuir valores a vari�veis no
    momento em que s�o declaradas*/
    int mortalidade = 10, natalidade = 1000 ;
    float taxa;
    
    //Por padr�o, em C divis�o de entre inteiros retorna inteiro
    taxa = mortalidade/natalidade;
    printf("O valor da taxa eh %.2f\n\n", taxa);
    
    /*Para for�ar o retorno  tipo float,
    � preciso usar o "cast", que converte tipos*/
    taxa = (float) mortalidade/natalidade;
    printf("O valor da taxa eh %.2f\n\n", taxa);
    //O uso se %.2f em vez de %f limita o n�mero de casas decimais para 2
}
