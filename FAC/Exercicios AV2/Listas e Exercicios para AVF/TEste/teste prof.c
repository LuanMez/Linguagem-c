/*
	FAETERJ-Rio
	FAC - Turma B - Professor Leonardo Vianna
	2022/2 - Data: 23/11/2022
	
	Lista de Exerc�cios XI (Vetores)
	
	QUEST�O 04: 
	Fazer uma fun��o que armazene em um vetor os 50 primeiros termos 
	da seguinte sequ�ncia:
	
					S = 1, 2, 4, 7, 11, 16, ... 

	Nota: observem que a diferen�a entre o 1� e 2� elementos � igual a 1,
	entre o 2� e 3� � igual a 2, entre o 3� e o 4� � igual a 3, e assim 
	sucessivamente. 
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 50

//prot�tipos de fun��es
void preencherVetor (int vetor[], int tamanho);

void exibirVetor (int vetor[], int tamanho); 

//main
void main ()
{
	//declara��o de vari�veis
	int v[TAM];
	
	//chamando a fun��o que preencher� o vetor
	preencherVetor (v, TAM);
	
	//exibindo o vetor
	exibirVetor (v, TAM); 
}

//implementa��o das fun��es
void exibirVetor (int vetor[], int tamanho)
{
	//declara��o de vari�veis
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
	//declara��o de vari�veis
	int i, j;
	
	//percorrendo o vetor
	for (i=0,j=1;i<tamanho;i++,j+=i)
	{
		vetor[i] = j;
	}
}
