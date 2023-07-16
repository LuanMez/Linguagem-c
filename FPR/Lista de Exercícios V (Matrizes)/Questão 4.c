/*QUESTÃO 04:
Fazer uma função que, dada uma matriz M6×6,
determine se ela é simétrica.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define L 3
#define C 3

int verificar (int matriz[L][C])
{
	int i, j;
	
	for(i=0; i<L; i++)
	{
		for(j=0; j<C; j++)
		{
			if(matriz[i][j]!=matriz[j][i])
			{
				return 1;
			}
		}
		return 0;
	}
}

void main ()
{
	int matriz[L][C]={{1,2,3},
	                  {2,5,4},
	                  {3,4,7}};
	int res;
	                  
	res=verificar(matriz);
	
	if(res==0)
	{
		printf("eh uma matriz simetrica");
	}
	else
	{
		printf("nao eh uma matriz simetrica");
	}
}
