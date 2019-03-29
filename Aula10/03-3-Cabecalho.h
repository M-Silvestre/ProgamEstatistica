/************************************
*        Autor: Matteus Silvestre   *
*        Aula: 10                   *
*        T�tulo: Bibliotecas        *
*        Data: 29/03/2019           *
*************************************/
/*	
	No arquivo tipo.h ficam as fun��es a serem chamadas por outros c�digos.
	A cria��o de fun��es na biblioteca funciona como num programa .c
	
	Quando se precisa implementar v�rias fun��es a serem usadas em outros
	programas, conv�m criar apenas uma biblioteca e adicionar fun��es nela
	conforme a necessidade.
	
*/

//Prot�tipo da fun��o square, que retorna inteiro
int square();

//Defini��o da fun��o square(). Ela recebe um inteiro e retorna seu quadrado
int square(int y){
	return y * y;
}
