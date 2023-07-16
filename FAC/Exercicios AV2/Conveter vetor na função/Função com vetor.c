/*
	FAETERJ-Rio
	FAC - Turma A - Professor Leonardo Vianna
	2022/2 - Data: 17/11/2022
	
	Vetores
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 10

void conta (int vetor[], int tamanho)
{
	int i;
	
	vetor[0] = vetor[1] = 1;
	for (i=2;i<tamanho;i++)
	{
		vetor[i] = vetor[i-2] + vetor[i-1];
	}
}

void exibir (int vetor[], int tamanho)
{
	int i;
	
	printf ("\n\nVetor: ");
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);
	}
}

//main
void main ()
{
	//declaração de variáveis
	int v[TAM]; 
	
	conta (v, TAM);
	
	exibir (v, TAM);
	
}
