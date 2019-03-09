/***************************************
*        Autor: Matteus Silvestre      *
*        Aula: 07                      *
*        Título: Operados Logicos      *
*        Data: 08/03/2019              *
****************************************/

/*	Além dos operadores relacionais, também temos
	os operadores lógicos:
	
	&&		AND ("E" lógico)
	||		OR ("Ou" lógico)
	!		NOT (Negação lógica)
	
	OBS: && e || necessitam de duas expressões, mas
	! apenas uma.
	
	Exercício: Crie um programa que solicite 3 notas separadas
	por vírgula e informe se o aluno foi aprovado, reprovado
	ou está na final. O programa deverá imprimir em tela as
	três notas digitadas pelo aluno, sua média, a sua situação
	(aprovado, reprovado, ou na final) e, caso o aluno estaja
	na final, informe também quanos pontos ele precisa para
	passar na disciplina. Caso o aluno seja reprovado, não 
	esqueça de passar a informação educadamente dando-o
	uma palavra de apoio :)
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	/*A média para aprovação direta deve ser maior ou igual 7.0
	 A média para reprovação direta deve ser menor que 4.0
	 A média para avaliação final deve ser menor que 7.0 e
	 maior ou igual a 4.0
	 
	 Caso a média seja menor que 7, mas maior ou igual a 4.0,
		ele tem direito a uma avaliação final. Para ser aprovado
		pela final, é preciso que a média e a nota da final sigam a
		seguinte relação:
		
			(6 * Média + 4 * NotaFinal ) / 10 >= 5
			
		Isolando a NotaFinal, teremos:
			NotaFinal >= (50 - 6 * Média) / 4
	 */
	printf("M%cdia entre 3 notas e situa%c%co do aluno\n\n", 130, 135, 198);
	float nota1, nota2, nota3, media;
	printf("Informe a primeira nota: ");
	scanf("%f", &nota1);
	printf("Informe a sgunda nota: ");
	scanf("%f", &nota2);
	printf("Informe a terceira nota: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3.0;
	
	printf("\nNota 1: %.1f", nota1);
	printf("\nNota 2: %.1f", nota2);
	printf("\nNota 3: %.1f", nota3);
	printf("\nM%cdia: %.1f", 130, media);
	/*Atenção à identação (recuo da margem esquerda dado pela tecla Tab)
	dos comandos! Apesar de não alterar o funcionamento de programas em C,
	ela pode deixar o código mais claro para outra pessoa ler.
	
	Na representação abaixo, if() e else associados terão a mesma identação,
	e blocos de código "dentro" de outro comando têm maior identação.*/
	
	//A média é maior ou igual a 7.0?
	if(media >= 7.0){ //Se sim
		printf("\n\nAluno aprovado por m%cdia.\n\n", 130);
	}
	//Caso contrário (média menor que 7.0)
	else{
		//Dado que a média é menor que 7.0, ela é maior ou igual a 4.0?
		if(media >= 4.0){
			printf("\n\nAluno em avalia%c%co final precisando de %.2f\n\n",
			135, 198, (25 - 3 * media) / 2 );
		}
		else{
			printf("\n\nAluno reprovado por m%cdia.\n"
			"Se esforce mais no per%codo que vem.\n", 130, 161);
		}	
	}
	system("pause");
}
