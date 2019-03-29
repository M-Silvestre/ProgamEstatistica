/************************************
*        Autor: Matteus Silvestre   *
*        Aula: 10                   *
*        Título: Funções            *
*        Data: 29/03/2019           *
*************************************/
/*	
	Biblioteca com as funções para determinar o máximo
	entre números reais.
*/


float max2(float, float);
float max3(float, float, float);

//A função max2 retorna o maior entre 2 números reais
float max2(float n1, float n2){
	if(n1 > n2)
		return n1;
	else
		return n2;
};

//A função max3 retorna o maior entre 3 números reais
float max3(float n1, float n2, float n3){
	if(n1 > n2 && n1 > n3){
			return n1;
	}
	else{
		if(n2 > n3)
			return n2;
		else
			return n3;
	}
}
