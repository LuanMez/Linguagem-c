/*QUESTÃO 02:
Desenvolver uma função que, dada uma matriz
M15×20, determine se um número X se encontra
na linha L da matriz.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define L 5
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

int verificar(int matriz[L][C], int numero, int linha)
{
	int i;
	
	for(i=0; i<C; i++)
	{
		if(matriz[linha][i]==numero)
		{
			return 0;
		}
	}
	
	return -1;
}

void main ()
{
	int matriz[L][C];
	int num, linha, res;
	
	preencher(matriz);
	exibir(matriz);
	
	printf("Digite o numero que deseja achar: ");
	scanf("%d", &num);
	
	printf("Digite o numero da linha : ");
	scanf("%d",&linha);
	
	res=verificar(matriz, num, linha);
	
	if(res==-1)
	{
		printf("O numero %d NAO se encontra na linha %d", num, linha);
	}
	else
	{
		printf("O numero %d se encontra na linha %d", num, linha);
	}
}
