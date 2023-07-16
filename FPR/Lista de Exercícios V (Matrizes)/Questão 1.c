/*QUESTÃO 01:
Faça uma função que, dada uma matriz M8×5 de
reais, gere a matriz Mt, sua transposta.*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define L 8
#define C 5

void preencher(int mat[L][C])
{
	int i, j;
	
	srand (time(NULL));
	
	for(i=0 ;i<L; i++)
	{
		for(j=0; j<C; j++)
		{
			mat[i][j]=rand()%10;
		}
	}
}

void exibir1 (int mat[L][C])
{
	int i, j;
	
	for(i=0 ;i<L; i++)
	{
		for(j=0; j<C; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}

void transposta(int mat[L][C], int tra[C][L])
{
	int i, j;
	
	for(i=0; i<L; i++)
	{
		for(j=0; j<C; j++)
		{
			tra[j][i]=mat[i][j];
		}
	}
}

void exibir2 (int tra[C][L])
{
	printf("\n");
	
	int i, j;
	
	for(i=0 ;i<C; i++)
	{
		for(j=0; j<L; j++)
		{
			printf("%d ", tra[i][j]);
		}
		printf("\n");
	}
}

void main ()
{
	int mat[L][C];
	int tra[C][L];
	
	preencher(mat);
	exibir1(mat);
	transposta(mat,tra);
	exibir2(tra);
	
}
