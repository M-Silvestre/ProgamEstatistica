/*****************************************
*        Autor: Matteus Silvestre        *
*        Aula: 01                        *
*        Título: Introdução a Variáveis  *
*        Data: 14/12/2018                *
*****************************************/

/*Variável é um espaço de memória usado para guardar e manipular
determinado dado.

Se define uma variável assim:
tipo nome_da_variavel;

Para mais de uma do mesmo tipo:
tipo var1, var2, var3;

Por exemplo:
char nome;
int nota1, nota2, nota3;
float altura, largura, comprimento;
double taxa;

Existem quatro tipos básicos, cada um com um propósito específico:
    char: caracteres e strings
    int: números inteiros (sem casas decimais)
    float: números reais (com casas decimais)
    double: número reais de maior precisão
    
Existe um outro tipo de variável que pode ser considerado tipo básico,
o ponteiro, que indica um endereço de memória e será abordadado em outro
momento do curso.

C aceita letras (padrão ASCII), números e o _ (undescore) para 
o nome de variáveis, lembrando que a lingugem C é Case Sensitive.
Porém, nomes de variável inciados por número não são aceitos.

É possível declarar variáveis de tipos diferentes em uma mesma linha,
de nome iniciado por _, ou declaradas fora da função main(),
mas essas não são boas práticas de programação.
*/

#include <stdio.h>

void main(void){
    //É preciso declarar variáveis antes de usá-las
    int a, b; //"a" e "b" são espaços de memória diferentes
    
    /*Na atribuição de valores, a variável que recebe o valor deve
	estar à esquerda e o valor, à direita. Também é possível atribuir
	um valor vindo de outra variável, gerando uma cópia dele.*/ 
    a = 1; //"a" recebe o valor 1
	
    /*O símbolo % é usado em tags do printf para exibir valores de variáveis.
    Algumas delas são:
	%d ou %i : números inteiros
	%f : números com ponto flutuante (casas decimais)
	%c : caractere
	%s : string
    A variável (ou variáveis) cujo valor será exibido deve ser especificada após as aspas,
    separada do texto entre aspas e outras variáveis por vírgula.
    */
    printf("O valor de \"a\" eh %d\n\n", a);
	/*O valor da variável "a" está guardado em um único byte, conjunto de zeros e uns.
	A tag %d será substituído pelo valor de "a" como número inteiro no formato decimal (base 10)*/
    
    b = a; //"b" recebe uma cópia do valor atual de a
    a = 2; //"a" tem seu valor modificado, mas "b" não muda!
    printf("O valor de \"a\" era %d e agora eh %d\n\n", b, a);
}
