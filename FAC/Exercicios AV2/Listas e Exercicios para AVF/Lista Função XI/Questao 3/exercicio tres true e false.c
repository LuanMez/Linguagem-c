/*QUESTÃO 03:
Pede-se a implementação de uma função que,
dado um vetor contendo números reais,
determine se o mesmo encontra-se ordenado
de forma crescente.*/

//tem um retorno se é crescente?

#include<stdio.h>
#define TAM 6
#define TRUE 1
#define FALSE 0

int crescente (int vetor[], int tamanho)
{
	int i, verificar=1;
	
	for(i=0; i<tamanho-1; i++) //esta menos 1 pois ele passa do limite
	{
		if(vetor[i]>vetor[i+1])
		{
			return FALSE;
		}
	}
	return TRUE;
}

void main ()
{
	int v[TAM]={1,2,3,4,5,6};
	int resultado;
	
	if(crescente(v, TAM) == TRUE)
	{
		printf("Esta em ordem crescente");
	}
	else
	{
		printf("Nao esta em ordem crescente");
	}
	
}
