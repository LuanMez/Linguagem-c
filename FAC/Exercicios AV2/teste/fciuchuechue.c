/*QUESTÃO 03:
Pede-se a implementação de uma função que,
dado um vetor contendo números reais,
determine se o mesmo encontra-se ordenado
de forma crescente.*/

#include<stdio.h>
#define TAM 6

void crescente (int vetor[], int tamanho)
{
	int i, verificar=0;
	
	for(i=0; i<tamanho-1; i++) //esta menos 1 pois ele passa do limite
	{
		if(vetor[i]>vetor[i+1])
		{
			verificar=1;
		}
		
	}
	if(verificar==0)
	{
		printf("Esta em ordem crescente");
	}
	else
	{
		printf("Nao esta em ordem crescente");
	}
}

void main ()
{
	int v[TAM]={6,5,4,3,2,1};
	
	crescente(v, TAM);
	
	
}
