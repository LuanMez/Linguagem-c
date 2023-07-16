/*Questão 04 [2,5 pontos]:
Dado um vetor vetA com quantA inteiros, desenvolver
uma função que crie um vetor vetB contendo apenas os
elementos que aparecem mais de uma vez em vetA,
conforme ilustrado pelos exemplos a seguir:*/

#include<stdio.h>
#define QUANT 8

int elementosB (int vetorA [], int quantidade, int vetorB [], int *quantidadeB)
{
	int i, j, k=0;
	
	for(i=0; i<quantidade-1; i++)
	{
		for(j=quantidade-1; j>i; j--)
		{
			if(vetorA[i]==vetorA[j])
			{
				vetorB[k]=vetorA[i];
				k++;
			}
		}
	}
	*quantidadeB=k;
	
	return k;
}

void main ()
{
	int vetA[QUANT]={1,2,3,2,3,4,5,6};
	int vetB[QUANT];
	int quantB, i, resultado;
	
	resultado=elementosB(vetA, QUANT, vetB, &quantB);
	
	for(i=0; i<quantB; i++)
	{
		printf("VetorB[%d] = %d\n", i, vetB[i]);
	}
	
	printf("O numero de elementos que aparece mais de uma vez e': %d", resultado);
	
}
