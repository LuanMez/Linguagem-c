/*Desenvolver uma função que, dado um vetor vetA
contendo quant números inteiros, organize um vetor
vetB com os elementos de vetA organizados
crescentemente.*/

//nao muda vetorA
//organize crescentemente

#include<stdio.h>
#define QUANT 8
#define QUANTB 8

void organizar( int vetorA [], int quantidade, int vetorB [], int quantb)
{
	//declaração das variaveis
	int i, j, aux;
	
	//passando os valores de vetorA ára vetorB
	for(i=0; i<quantidade; i++)
	{
		vetorB[i]=vetorA[i];
	}
	
	//Alterando os valores para ordem crescente
	for(i=0; i<quantb-1; i++)
	{
		for(j=quantb-1; j>i; j--)
		{
			if(vetorB[i]>vetorB[j])
			{
			
			aux=vetorB[i];
			vetorB[i]=vetorB[j];
			vetorB[j]=aux;
			
	    	}
		}
	}
}

void main ()
{
	//declaração das variaveis
	int vetA[QUANT]={9,6,4,3,7,8,2,1};
	int vetB[QUANTB], i;
	
	//chamando a função
	organizar(vetA, QUANT, vetB, QUANTB);
	
	//exibindo o vetor b na main
	for(i=0; i<QUANTB;i++)
	{
		printf("vetB[%d]=%d\n", i, vetB[i]);
	}
}
