/*QUEST�O 11:
Fazer um fun��o que, dados dois vetores A e B
com n�meros inteiros, gerar o vetor C que
consiste na intersec��o dos dois primeiros.
Nota: considerar que n�o existe repeti��o no
conjunto A, nem no conjunto B.*/

#include<stdio.h>

void intersecao(int vetorA [], int tamA, int vetorB [], int tamB, int vetorC [], int *quant)
{
	int i, j, k=0;
	
	for(i=0; i<tamA; i++)
	{
		for(j=0; j<tamB; j++ )
		{
			if(vetorA[i]==vetorB[j])
			{
				vetorC[k]=vetorA[i];
				k++;
			}
		}
	}
	*quant=k;
}

void main ()
{
	int vA[6]={1,2,3,4,5,6};
	int vB[8]={3,6,7,8,1,2,9,4};
	int vC[14];
	int quant, i;
	
	intersecao(vA, 6, vB, 8, vC, &quant);
	
	for(i=0; i<quant; i++)
	{
		printf("Novo vetor[%d]: %d\n", i,  vC[i]);
	}
}
