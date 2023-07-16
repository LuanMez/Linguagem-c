/*Questão 01 [2,5 pontos]:
Dada uma matriz de inteiros bidimensional M10x20,
desenvolver uma função que troque os elementos
da linha L1 pelos elementos (em ordem inversa) da
linha L2, como ilustrado no exemplo abaixo:
Trocar os elementos da segunda linha - L1 -
com os elementos da quarta linha - L2 -
(sendo estes últimos invertidos):
Nota:
A função deve retornar um inteiro, de
acordo com os valores de L1 e L2. Se estes
forem válidos, retornar 1; caso contrário,
retornar 0.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define L 6
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
}

int trocar(int matriz[L][C], int l1, int l2)
{
	int i, j, aux, cont=0;
	

	for(i=0, j=C-1; i<C; i++, j--)
	{
		cont++;
		
		if((l1<0) || (l1>L-1) || (l2<0) || (l2>L-1) || (l1>l2) )
		{
			return 0;
		}
		else
		{
			if(cont<=C/2)
			{
			aux=matriz[l2][i];
			matriz[l2][i]=matriz[l2][j];
			matriz[l2][j]=aux;	
			}
			
			aux=matriz[l1][i];
			matriz[l1][i]=matriz[l2][i];
			matriz[l2][i]=aux;
		}
	}
	
	return 1;
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

void main ()
{
	int matriz[L][C];
	int l1, l2, res;
	
	preencher(matriz);
	exibir(matriz);
	
	printf("Digite o numero de l1: ");
	scanf("%d", &l1);
	
	printf("Digite o numero de l2: ");
	scanf("%d", &l2);
	
	res=trocar(matriz, l1, l2);
	
	exibir2(matriz);
	
	if(res==1)
	{
		printf("Troca realizada com sucesso");
	}
	else
	{
		if(res==0)
		{
			printf("Uma das colunas sao invalidas");
		}
	}
}
