/*QUESTÃO 01:
Faça uma função que, dada uma matriz M8×5 de
reais, gere a matriz M sua transposta.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define L 8
#define C 5

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
	printf("\n");
}

void criarTransposta(int M[L][C], int M2[C][L])
{
	int i, j;
	
	for(i=0; i<L; i++)
	{
		for(j=0; j<C; j++)
		{
			M2[j][i]=M[i][j];
		}
	}
}

void exibir2 (int M2[C][L])
{
	int i, j;
	
	for(i=0 ;i<C; i++)
	{
		for(j=0; j<L; j++)
		{
			printf("%d ", M2[i][j]);
		}
		printf("\n");
	}
}

void main ()
{
	int M[L][C];
	int M2[C][L];
	
	preencher(M);
	exibir (M);
	criarTransposta(M,M2);
	exibir2 (M2);
}
