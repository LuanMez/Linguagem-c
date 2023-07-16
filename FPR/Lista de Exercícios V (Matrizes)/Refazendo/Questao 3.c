/*QUESTÃO 03:
Desenvolver uma função que gere a seguinte
matriz M5?5:
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9*/

#include<stdio.h>
#define L 5
#define C 5

void preencher(int matriz[L][C])
{
	int i, j, atua;
	
	for(i=0; i<L; i++)
	{
		atua=i;
		
		for(j=0; j<C; j++)
		{
			matriz[i][j]=(atua+=1);
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

void main ()
{
	int matriz[L][C];
	
	preencher(matriz);
	exibir(matriz);
}
