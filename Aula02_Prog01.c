/*****************************************
*        Autor: Matteus Silvestre        *
*        Aula: 02                        *
*        T�tulo: Introdu��o a Vari�veis  *
*        Data: 14/12/2018                *
*****************************************/

/*Vari�vel � um espa�o de mem�ria usado para guardar e manipular
determinado dado.

Se define uma vari�vel assim:
tipo nome_da_variavel;

Para mais de uma do mesmo tipo:
tipo var1, var2, var3;

Por exemplo:
char nome;
int nota1, nota2, nota3;
float altura, largura, comprimento;
double taxa;

Sendo cada tipo tem um prop�sito espec�fico:
    char: caracteres e strings
    int: n�meros inteiros (sem casas decimais)
    float: n�meros reais (com casas decimais)
    double: n�mero reais de maior precis�o

C aceita letras (padr�o ASCII), n�meros e o _ (undescore) para 
o nome de vari�veis, lembrando que a lingugem C � Case Sensitive.
Por�m, nomes de vari�vel inciados por n�mero n�o s�o aceitos.

� poss�vel declarar vari�veis de tipos diferentes em uma mesma linha,
de nome iniciado por _, ou declaradas fora da fun��o main(),
mas essas n�o s�o boas pr�ticas de programa��o.
*/

#include <stdio.h>

void main(void){
    //� preciso declarar vari�veis antes de us�-las
    int a, b; //"a" e "b" s�o espa�os de mem�ria diferentes
    
    /*Na atribui��o de valores, a vari�vel que recebe o valor deve
	estar � esquerda e o valor, � direita. Tamb�m � poss�vel atribuir
	um valor vindo de outra vari�vel, gerando uma c�pia dele.*/ 
    a = 1; //"a" recebe o valor 1
    
    /*O s�mbolo % � usado em tags do printf para exibir valores de vari�veis.
	Algumas delas s�o:
    %d : n�meros inteiros (formato decimal)
    %f : n�meros reais
    %c : caractere
    %s : string
    A vari�vel a cujo valor ser� exibido deve ser especificada
    */
    printf("O valor de \"a\" eh %d\n\n", a);
    
    b = a; //"b" recebe uma c�pia do valor atual de a
    a = 2; //"a" tem seu valor modificado, mas "b" n�o muda!
    printf("O valor de \"a\" era %d e agora eh %d\n\n", b, a);
}
