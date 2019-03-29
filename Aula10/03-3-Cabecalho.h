/************************************
*        Autor: Matteus Silvestre   *
*        Aula: 10                   *
*        Título: Bibliotecas        *
*        Data: 29/03/2019           *
*************************************/
/*	
	No arquivo tipo.h ficam as funções a serem chamadas por outros códigos.
	A criação de funções na biblioteca funciona como num programa .c
	
	Quando se precisa implementar várias funções a serem usadas em outros
	programas, convém criar apenas uma biblioteca e adicionar funções nela
	conforme a necessidade.
	
*/

//Protótipo da função square, que retorna inteiro
int square();

//Definição da função square(). Ela recebe um inteiro e retorna seu quadrado
int square(int y){
	return y * y;
}
