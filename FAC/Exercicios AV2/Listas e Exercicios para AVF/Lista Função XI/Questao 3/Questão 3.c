/*QUEST�O 03:
Pede-se a implementa��o de uma fun��o que,
dado um vetor contendo n�meros reais,
determine se o mesmo encontra-se ordenado
de forma crescente.*/

//tem um retorno se � crescente?

#include<stdio.h>
#define TAM 6

int crescente (int vetor[], int tamanho)
{
	int i, verificar=1;
	
	for(i=0; i<tamanho-1; i++) //esta menos 1 pois ele passa do limite
	{
		if(vetor[i]>vetor[i+1])
		{
			verificar=0;
		}
	}
	return verificar;
}

void main ()
{
	int v[TAM]={1,2,3,4,5,6};
	int resultado;
	
	resultado=crescente(v, TAM);
	
	if(resultado==1)
	{
		printf("Esta em ordem crescente");
	}
	else
	{
		printf("Nao esta em ordem crescente");
	}
	
}
