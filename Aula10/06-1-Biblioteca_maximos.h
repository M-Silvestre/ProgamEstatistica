/************************************
*        Autor: Matteus Silvestre   *
*        Aula: 10                   *
*        T�tulo: Fun��es            *
*        Data: 29/03/2019           *
*************************************/
/*	
	Biblioteca com as fun��es para determinar o m�ximo
	entre n�meros reais.
*/


float max2(float, float);
float max3(float, float, float);

//A fun��o max2 retorna o maior entre 2 n�meros reais
float max2(float n1, float n2){
	if(n1 > n2)
		return n1;
	else
		return n2;
};

//A fun��o max3 retorna o maior entre 3 n�meros reais
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
