/*Questão 01 [2,5 pontos]:
Dada uma matriz MLxC, onde L e C são constantes,
desenvolver uma função que “troque” os elementos de
duas colunas c1 e c2, respeitadas as seguintes regras:
a. A troca só será possível se as colunas c1 e c2
existirem na matriz. Caso existam, a troca será
realizada e o valor 1 retornado pela função;
por outro lado, 0 será retornado se uma ou as
duas colunas forem inválidas;
b. Após a troca, a coluna c2 conterá exatamente
os elementos originais da coluna c1, na
mesma ordem. Porém, os valores da coluna c1
serão os originais da c2, na ordem inversa.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define L 4
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

int trocar(int matriz[L][C], int c1, int c2)
{
	int i, j, aux, cont=0;
	
	
	
	for(i=0, j=L-1; i<L; i++, j--)
	{
		cont++;
		
		if((c1<0) || (c1>C-1) || (c2<0) || (c2>C-1) || (c1>c2) )
		{
			return 0;
		}
		else
		{
			if(cont<=L/2)
			{
			aux=matriz[i][c2];
			matriz[i][c2]=matriz[j][c2];
			matriz[j][c2]=aux;	
			}
			
			aux=matriz[i][c1];
			matriz[i][c1]=matriz[i][c2];
			matriz[i][c2]=aux;
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
	int c1, c2, res;
	
	preencher(matriz);
	exibir(matriz);
	
	printf("Digite o numero de c1: ");
	scanf("%d", &c1);
	
	printf("Digite o numero de c2: ");
	scanf("%d", &c2);
	
	res=trocar(matriz, c1, c2);
	
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
