/*Considere a existência de dois conjuntos numéricos A e

B contendo n1 e n2 elementos, respectivamente. Pede-
se o desenvolvimento de uma função que determine se

um dos conjuntos está contido no outro, retornando os
seguintes códigos:
? 1, se A estiver contido em B;
? 2, se B estiver contido em A;
? 0, caso contrário.*/

#include<stdio.h>

int codigo (int vetorA [], int quantA, int vetorB [], int quantB)
{
	int i, j, cont=0;
	
	for(i=0; i<quantA; i++)
	{
		for(j=0; j<quantB; j++)
		{
			if(vetorA[i]==vetorB[j])
			{
				cont++;
			}
		}
	}
	if(cont==quantA)
	{
		return 1;
	}
	if(cont==quantB)
	{
		return 2;
	}
	if(cont!=quantA && cont!=quantB)
	{
		return 0;
	}
}

void main ()
{
	int vetA[3]={1,2,3};
	int vetB[6]={1,2,3,4,5,6};
	int resultado;
	
	resultado=codigo(vetA, 3, vetB, 6);
	
	printf("Codigo %d", resultado);
}
