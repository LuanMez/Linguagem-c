/*Desenvolver uma fun��o que, dados um
n�mero inteiro n e um vetor contendo
quant valores inteiros, altere a disposi��o
dos elementos do vetor, de forma que os
menores do que n fiquem no in�cio da
estrutura e os demais ao seu final.*/

#include<stdio.h>
#define TAM 8

void alterar (int vetor [], int tamanho, int num)
{
	int i, j, aux;
	
	for(i=0; i<tamanho; i++)
	{
		for(j=tamanho-1; j>i; j--)
		{
			if(vetor[i]>=num && vetor[j]<num)
			{
				aux=vetor[i];
				vetor[i]=vetor[j];
				vetor[j]=aux;
			}
		}
	}
}

void main ()
{
	int v[TAM]={2,8,7,3,4,9,1,5};
	int n, i;
	
	printf("Digite um numero N: ");
	scanf("%d", &n);
	
	alterar(v, TAM, n);
	
	for(i=0; i<TAM; i++)
	{
		printf("Novo vetor[%d]: %d\n", i,  v[i]);
	}
}
