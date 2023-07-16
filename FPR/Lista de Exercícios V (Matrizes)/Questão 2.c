/*QUESTÃO 02:
Desenvolver uma função que, dada uma matriz
M15×20, determine se um número X se encontra
na linha L da matriz.*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define L 15
#define C 20

void preencher(int matriz[L][C])
{
	int i, j;
	
	srand (time(NULL));
	
	for(i=0 ;i<L; i++)
	{
		for(j=0; j<C; j++)
		{
			matriz[i][j]=rand()%100;
		}
	}
}

void exibir (int matriz[L][C])
{
	int i, j;
	
	for(i=0 ;i<L; i++)
	{
		for(j=0; j<C; j++)
		{
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int verificar (int matriz[L][C], int x, int linha)
{
	int i;
	
	for(i=0; i<C; i++)
	{
		if(matriz[linha][i]==x)
		{
			return 0;
		}
	}
	return 1;
}

void main ()
{
	int matriz[L][C];
	int x, linha, resultado;
	
	preencher(matriz);
	exibir(matriz);
	
	printf("Digite um valor e depois a linha para ser achado na matriz: ");
	scanf("%d %d", &x, &linha);
	
	resultado=verificar(matriz, x, linha);
	
	if(resultado==0)
	{
		printf("O valor %d esta na linha da matriz", x);
	}
	else
	{
		printf("O valor %d nao esta na linha da matriz", x);
	}
	
	
}
