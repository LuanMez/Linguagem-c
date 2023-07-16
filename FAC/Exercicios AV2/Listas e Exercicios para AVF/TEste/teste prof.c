/*
	FAETERJ-Rio
	FAC - Turma B - Professor Leonardo Vianna
	2022/2 - Data: 23/11/2022
	
	Lista de Exercícios XI (Vetores)
	
	QUESTÃO 04: 
	Fazer uma função que armazene em um vetor os 50 primeiros termos 
	da seguinte sequência:
	
					S = 1, 2, 4, 7, 11, 16, ... 

	Nota: observem que a diferença entre o 1º e 2º elementos é igual a 1,
	entre o 2º e 3º é igual a 2, entre o 3º e o 4º é igual a 3, e assim 
	sucessivamente. 
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 50

//protótipos de funções
void preencherVetor (int vetor[], int tamanho);

void exibirVetor (int vetor[], int tamanho); 

//main
void main ()
{
	//declaração de variáveis
	int v[TAM];
	
	//chamando a função que preencherá o vetor
	preencherVetor (v, TAM);
	
	//exibindo o vetor
	exibirVetor (v, TAM); 
}

//implementação das funções
void exibirVetor (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}

void preencherVetor (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i, j;
	
	//percorrendo o vetor
	for (i=0,j=1;i<tamanho;i++,j+=i)
	{
		vetor[i] = j;
	}
}
