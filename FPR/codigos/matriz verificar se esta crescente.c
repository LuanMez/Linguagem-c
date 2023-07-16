/*Quest�o 01 [2,5 pontos]:
Dada uma matriz MLxC, onde L e C s�o constantes,
desenvolver uma fun��o que verifique se os elementos
da matriz est�o ordenados de forma crescente. Para
isto, as seguintes regras devem ser atendidas:
a. Os elementos de cada linha devem estar
ordenados crescentemente (ou seja, cada
elemento ser� maior ou igual �quele da
mesma linha, por�m da coluna anterior � caso
exista);
b. O primeiro elemento de cada linha deve ser
maior ou igual ao �ltimo da linha anterior
(caso exista).
Caso a matriz M atenda aos crit�rios definidos, o valor
1 dever� ser retornado pela fun��o; caso contr�rio, 0. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define L 5
#define C 5

void preencher(int M[L][C])
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

int verificar(int M[L][C])
{
	int i,j, k, c;
	
	for(i=0; i<L; i++)
	{
		for(j=0; j<C-1; j++)
		{
			if(M[i][j]>M[i][j+1])
			{
				return 0;
			}
		}	
	}
	for(i=0; i<L-1; i++)
	{
		if(M[i][0]>M[i+1][0])
		{
			return 0;
		}
	}
	return 1;
}

void main ()
{
	int M[L][C];
	int res;
	
	preencher(M);
	exibir (M);
	res=verificar(M);
	
	if(res==1)
	{
		printf("A matriz esta de acordo com a questao");
	}
	else
	{
		if(res==0)
		{
		printf("A matriz NAO esta de acordo com a questao");
			
		}
	}
}
