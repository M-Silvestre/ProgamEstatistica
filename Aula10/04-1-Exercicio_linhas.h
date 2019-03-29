/************************************
*        Autor: Matteus Silvestre   *
*        Aula: 10                   *
*        Título: Funções            *
*        Data: 29/03/2019           *
*************************************/
/*
	Quando uma função retorna void (ou não possui return), chama-se ela de
	procedimento.
	
	Nessa biblioteca estão os procedimentos a ser utilizadas nos códigos
	04-2, 04-3 e 04-4
*/

void linha1(void);
void linha2(int);
void linha3(int, char);

//Exibe uma linha de 20 asteriscos
void linha(){
	int i;
	for(i = 1; i <= 20; i++)
		printf("*");
	putchar('\n');
};

//Exibe uma linha de asteriscos do tamanho informado
void linha2(int y){
	int i;
	for(i = 1; i <= y; i++)
		printf("*");
	putchar('\n');
};

//Exibe uma linha de caractere e tamanho informados
void linha3(int y, char ch){
	int i;
	for(i = 1; i <= y; i++)
		printf("%c", ch);
	putchar('\n');
}
