/*Questão 01 [2,5 pontos]:
Desenvolver uma função que receba duas matrizes de
inteiros, ambas de ordem 10, com as seguintes
características:
a. M1: matriz contendo números inteiros
quaisquer;
b. M2: matriz contendo apenas os valores 0 ou 1.
Desenvolver uma função que a partir destas matrizes
gere a matriz M3, também de ordem 10, cujos
elementos são definidos da seguinte forma:
M2ij = 0 ? M3ij = M1ij
M2ij = 1 ? M3ij = soma dos elementos
da linha i com */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define L 6
#define C 6

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

void preencher2(int M[L][C])
{
	int i, j;
	
	for(i=0; i<L; i++)
	{
		for(j=0; j<C; j++)
		{
			printf("Digite o numero da matriz2[%d][%d]: ", i, j);
			scanf("%d", &M[i][j]);
		}
	}
}

void exibir2 (int M[L][C])
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

void preencher3(int matriz1[L][C], int matriz2[L][C], int matriz3[L][C])
{
	int i, j, k, soma=0, linha,coluna;
	
	for(i=0; i<L; i++)
	{
		for(j=0; j<C; j++)
		{
			if(matriz2[i][j]==0)
			{
				matriz3[i][j]=matriz1[i][j];
			}
			else
			{
				if(matriz2[i][j]==1)
				{
					linha=i;
					coluna=j;
					
					for(k=0; k<L; k++)
					{
						soma+=matriz2[k][coluna];
						soma+=matriz2[linha][k];
					}
					
					matriz3[linha][coluna]=soma-1;
					
					
					soma=0;
				}
			}
		}
	}
}

void exibir3 (int M[L][C])
{
	int i, j;
	
	printf("\n");
	
	for(i=0 ;i<L; i++)
	{
		for(j=0; j<C; j++)
		{
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
}

void main ()
{
	int matriz[L][C];
	int matriz2[L][C];
	int matriz3[L][C];
	int res;
	
	preencher(matriz);
	exibir(matriz);
	preencher2(matriz2);
	exibir2(matriz2);
	preencher3(matriz, matriz2, matriz3);
	exibir3(matriz3);
	
	
}
