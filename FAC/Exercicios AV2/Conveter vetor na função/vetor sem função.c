/*
	FAETERJ-Rio
	FAC - Turma A - Professor Leonardo Vianna
	2022/2 - Data: 17/11/2022
	
	Vetores
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 10

//main
void main ()
{
	//declara��o de vari�veis
	int v[TAM]; 
	int i;
	
	v[0] = v[1] = 1;
	for (i=2;i<TAM;i++)
	{
		v[i] = v[i-2] + v[i-1];
	}
		
		
	//v[i-1]  � diferente de v[i]-1
		
		
	//exibindo os valores do vetor
	printf ("\n\nVetor: ");
	for (i=0;i<TAM;i++)
	{
		printf ("%d ", v[i]);
	}
}
