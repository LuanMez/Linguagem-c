/*QUEST�O 10:
Fazer um fun��o que, dados dois vetores A e B
com n�meros inteiros, gerar o vetor C que
consiste na uni�o dos dois primeiros.
Nota: considerar que n�o existe repeti��o no
conjunto A, nem no conjunto B.*/

#include<stdio.h>

void criar(int vetora [], int tamA, int vetorb [], int tamB, int vetorc [], int *tamC)
{
	int i, j=0, k, veri=0, aux;
	
	for(i=0; i<tamA; i++)
	{
		vetorc[i]=vetora[i];
		j++;
	}
	for(i=0; i<tamB; i++)
	{
		vetorc[j]=vetorb[i];
		j++;
	}
	
	*tamC=j;
	
	for(i=0; i<*tamC; i++)
	{
		for(k=*tamC; k>i; k--)
		{
			if(vetorc[i]==vetorc[k])
			{
				for(k; k<*tamC; k++)
				{
					aux=vetorc[k];
					vetorc[k]=vetorc[k+1];
					vetorc[k+1]=aux;
				}
				*tamC=*tamC-1;
			}
		}
	}
	
}

void main ()
{
	int va[4]={8,2,3,4};
	int vb[5]={6,7,8,9,5};
	int vc[9];
	int quantc, i;
	
	criar(va, 4, vb, 5, vc, &quantc);
	
	for(i=0; i<quantc; i++)
	{
		printf("Novo vetor[%d]: %d\n", i,  vc[i]);
	}
	
	
}
