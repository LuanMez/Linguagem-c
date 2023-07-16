/*Desenvolver uma função que, dados um
número inteiro n e um vetor contendo
quant valores inteiros, altere a disposição
dos elementos do vetor, de forma que os
menores do que n fiquem no início da
estrutura e os demais ao seu final.*/

#include<stdio.h>
#define TAM 8

void alterar (int vetor [], int tamanho, int num)
{
	int i, j=0, aux;
	
	for(i=0; i<tamanho; i++)
	{
		if(vetor[i]<num)
		{
			aux=vetor[i];
			vetor[i]=vetor[j];
			vetor[j]=aux;
			
			j++;
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
