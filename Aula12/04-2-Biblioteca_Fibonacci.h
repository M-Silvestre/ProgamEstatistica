/****************************************************
*        Autor: Matteus Silvestre                   *
*        Aula: 10                                    *
*        T�tulo: Exerc�cio: Sequ�ncia de Fibonacci  *
*        Data: 29/03/2019                           *
*****************************************************/

/*	Nossa fun��es para a sequ�ncia t�m o n�mero n do termo como
	�nico argumento (int), e retornam o n-�simo termo (int)
*/

//De forma n�o recursiva
int fib(int n){
	/*Precisaremos de quatro vari�veis:
		i: itera��o dentro de um loop
		ant2: n�mero duas posi��es antes do atual
		ant1: n�mero uma posi��o antes do atual
		atual: n�mero atual
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
		
		//Pela defini��o da sequ�ncia:	
		atual = ant2 + ant1; 
		
		//Ent�o, moveremos ant2 e ant1 uma posi��o na sequ�ncia
		ant2 = ant1;
		ant1 = atual;
	};
	
	return atual;
};

//Recursivamente:
int fib_r(n){
	//Temos que o termo (1) � 0
	if(n == 1)
		return 0;
	//Temos que o termo (2) � 1
	if(n == 2)
		return 1;
	//Para n diferente de 1 e 2, temos que termo (n) � termo(n - 2) + termo(n - 1)
	return (fib(n - 2) + fib(n - 1));
}
