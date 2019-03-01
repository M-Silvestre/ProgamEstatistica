/*****************************************
*        Autor: Matteus Silvestre        *
*        Aula: 06                        *
*        Título: if() else encadeados    *
*        Data: 01/03/2019                *
******************************************/

/*	
	Exercício: Crie um programa que solicite 3 notas separadas por vírgula
	ao aluno e informe se ele foi reprovado ou aprovado. O programa deverá 
	imprimir ao usuário do programa digitadas, a média final e a situação 
	do aluno (aprovado ou reprovado). Não é necessário tratar a situação 
	do aluno que tem direito a ir para a prova final. Veremos isso adiante
	quando os operadores lógicos forem apresentados.
	
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	printf("M%cdia entre 3 notas\n\n", 130);
	float nota1, nota2, nota3, media;
	printf("Informe a primeira nota: ");
	scanf("%f", &nota1);
	printf("Informe a sgunda nota: ");
	scanf("%f", &nota2);
	printf("Informe a terceira nota: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3.0;
	
	if(media < 0.0){
		printf("Foram informados valores inv%clidos para as notas.\n\n", 160);
	} else {
		printf("\nNota 1: %.1f", nota1);
		printf("\nNota 2: %.1f", nota2);
		printf("\nNota 3: %.1f", nota3);
		if(media < 7.0){
			printf("\n\nAluno reprovado com m%cdia %.2f\n\n", 130, media);
		} else{
			printf("\n\nAluno aprovado com m%cdia %.2f\n\n", 130, media);
		}
	}

	system("pause");
}
