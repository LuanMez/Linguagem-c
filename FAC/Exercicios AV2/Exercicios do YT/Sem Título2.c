/*
	FAETERJ-Rio
	FAC - Turma A - Professor Leonardo Vianna
	2022/2 - Data: 17/11/2022
	
	Lista de Exercícios XI (vetores)
	
	QUESTÃO 02:
	Implementar uma função que, dado um vetor 
	de reais, troque o 1º e o 2º elementos, em 
	seguida o 3º e o 4º elementos e assim 
	sucessivamente, até se chegar ao final 
	do vetor.
	
	Exemplo 1:
	
				vetor:	1 5 7 9 6 3 1 4 6 2 (antes)
						0 1 2 3 4 5 6 7 8 9

				vetor:	5 1 9 7 3 6 4 1 2 6 (depois)
						0 1 2 3 4 5 6 7 8 9


	Exemplo 2:
	
				vetor:	1 5 7 9 6 3 1 4 6 (antes)
						0 1 2 3 4 5 6 7 8

				vetor:	5 1 9 7 3 6 4 1 6 (depois)
						0 1 2 3 4 5 6 7 8


*/

//importação de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//definição de constantes
#define TAM 11

//protótipos das funções
void trocarElementosVetor (int vetor[], int tamanho);

void exibir (int vetor[], int tamanho);
void preencherAleatorio (int vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int v[TAM];
	
	//preenchendo o vetor com números aleatórios
	preencherAleatorio (v, TAM);
	
	//exibindo os elementos do vetor antes das trocas
	exibir (v, TAM);
	
	//chamando a função para as trocas
	trocarElementosVetor (v, TAM);
	
	//exibindo os elementos do vetor depois das trocas
	exibir (v, TAM);
}

//implementação das funções
void trocarElementosVetor (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i, j, temp;
	
	//realizando as trocas, dois a dois
	for (i=0,j=1;j<tamanho;i=i+2,j=j+2)
	{
		temp = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = temp;
	}
}

void preencherAleatorio (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//garantindo que as sequências serão diferentes
	srand (time(NULL));
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		vetor[i] = 1 + rand()%10;
	}
}

void exibir (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\n\nVetor: ");
	
	//percorrendo todas as posições do vetor
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}
