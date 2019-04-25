#include <math.h> //Precisaremos da função pow(), para potências

#define e 2.718281 //Precisamos do valor de "e" para a geométrica

/*
	Variável Binomial
	X~Bin(n,p)
	P(X = x) = (n! / (x! * (n - x)!) ) * (p ^ x) * ((1 - p) ^(n - x))

OBS: É possível criar uma função que usa outra, desde que a a função de dentro
	seja declarada antes da função maior. Veja:
*/

//Primeira função: retorna o fatorial de um número dado
int fat(int y){
	int i, f;
	f = 1;
	//Vamos fazer o produto de i * (i - 1) * (i - 2)... = i!
	for(i = y; i > 1; i--){
		f *= i;
	};
	return f;
};

//Segunda função: retorna a combinação de n para escolher x (usa o fatorial)
int comb(int n, int x){
	int c;
	c = fat(n)/(fat(x)*fat(n-x));
	return c;
};

//Terceira função: retorna a probabilidade de uma v.a. binomial (usa a combinação)
float bin(int n, float p, int x){
	float prob;
	prob = 100 * comb(n, x) * pow(p, x) * pow(1- p, n - x);
	return prob; //OBS: Retorna como percentual: 0 <= prob <= 100
};

/*	V.A. Geométrica
	X~Geo(p)
	P(X = x) = p * ((1 - p) ^ (x - 1))
*/
float geo(float p, int x){
	float px;
	px = 100* pow(1 - p, x - 1) * p;
	return px;
};

/*	V.A. de Poisson
	X~Poisson(lambda)
	P(X = x) = (e ^ (-lambda)) * (lambda ^ x) / (x!)
*/
float poisson(int x, double par){
	double p_poi;
	p_poi = (double)(pow(e, -par) * pow(par, x)) / fat(x);
	return 100*p_poi;
};

/*	V.A. Hipergeométrica
	X~Hipergeo(N, n, r)
	P(X = x) = combinacao(r, x) * combinacao(N - r, n - x) / combinacao(N, n)
*/
double hipergeo(int N, int n, int r, int x){
	return (double) comb(r,x)*comb(N-r,n-x)/comb(N,n);
}
