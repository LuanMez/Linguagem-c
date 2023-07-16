/*QUESTÃO 05:
Implementar uma função que, dada uma matriz
M10×8, gere um vetor V de tamanho 8, onde
cada elemento do vetor consiste na soma dos
elementos de uma coluna de M. Ou seja, o
elemento V[0] consiste na soma dos elementos
da primeira coluna de M, o elemento V[1]
consiste na soma dos elementos da segunda
coluna de M, e assim por diante.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define L 10
#define C 8
#define TAM 8

void preencher(int M[L][C])
{
	int i, j;
	
	srand (time(NULL));
	
	for(i=0; i<L; i++)
	{
		for(j=0; j<C; j++)
		{
			M[i][j]=rand()%10;
		}
	}
}

void exibir (int M[L][C])
{
	int i, j;
	
	for(i=0 ;i<L; i++)
	{
		for(j=0; j<C; j++)
		{
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
}

void preencherVetor(int matriz [L][C], int vetor[], int tamanho)
{
	int i, j, soma=0;
	
	for(i=0; i<C; i++)
	{
		for(j=0; j<L; j++)
		{
			soma+=matriz[j][i];
		}
		vetor[i]=soma;
		
		soma=0;
	}
}

void main ()
{
	int matriz[L][C];
	int vetor[TAM];
	int i;
	
	preencher(matriz);
	exibir(matriz);
	preencherVetor(matriz, vetor, TAM);
	
	for(i=0; i<TAM; i++)
	{
		printf("%d ", vetor[i]);
	}
	
}
