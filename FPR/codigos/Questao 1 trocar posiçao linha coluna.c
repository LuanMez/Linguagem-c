/*Questão 01 [2,5 pontos]:
Desenvolver uma função que, dada uma matriz de
inteiros M10x10, troque de posição os elementos da
linha L com os valores da coluna C. Caso a troca seja
possível, a função deverá retornar a constante TRUE;
caso contrário, FALSE.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define L 10
#define C 10

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

void criarTransposta(int M[L][C])
{
	int i,j, aux;
	
	for(i=0; i<L; i++)
	{
		for(j=0; j<C; j++)
		{
			aux=M[i][j];
			M[i][j]=M[j][i];
			M[j][i]=aux;
		}
	}
}

void exibir2 (int M[C][L])
{
	int i, j;
	
	for(i=0 ;i<C; i++)
	{
		for(j=0; j<L; j++)
		{
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
}

void main ()
{
	int M[L][C];
	
	preencher(M);
	exibir (M);
	criarTransposta(M);
	exibir2 (M);
}
