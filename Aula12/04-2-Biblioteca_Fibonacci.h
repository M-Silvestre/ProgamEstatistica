/****************************************************
*        Autor: Matteus Silvestre                   *
*        Aula: 10                                    *
*        Título: Exercício: Sequência de Fibonacci  *
*        Data: 29/03/2019                           *
*****************************************************/

/*	Nossa funções para a sequência têm o número n do termo como
	único argumento (int), e retornam o n-ésimo termo (int)
*/

//De forma não recursiva
int fib(int n){
	/*Precisaremos de quatro variáveis:
		i: iteração dentro de um loop
		ant2: número duas posições antes do atual
		ant1: número uma posição antes do atual
		atual: número atual
	*/
	int i, ant1, ant2, atual;
	ant2 = 0;
	ant1 = 1;
	
	for(i = 1; i <= n; i++){
		
		if(i == 1){ //Para o primeiro termo
			atual = 0;
			continue;
		};
		
		if(i == 2){ //Para o segundo termo
			atual = 1;
			continue;
		};
		
		//Pela definição da sequência:	
		atual = ant2 + ant1; 
		
		//Então, moveremos ant2 e ant1 uma posição na sequência
		ant2 = ant1;
		ant1 = atual;
	};
	
	return atual;
};

//Recursivamente:
int fib_r(n){
	//Temos que o termo (1) é 0
	if(n == 1)
		return 0;
	//Temos que o termo (2) é 1
	if(n == 2)
		return 1;
	//Para n diferente de 1 e 2, temos que termo (n) é termo(n - 2) + termo(n - 1)
	return (fib(n - 2) + fib(n - 1));
}
