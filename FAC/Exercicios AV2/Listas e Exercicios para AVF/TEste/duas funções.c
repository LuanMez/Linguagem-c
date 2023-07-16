/*Considere um vetor com numeros reais, fazer uma função
que ache o maior e o menor numero do vetor e uma segunda
função que chame a primeira e troque de lugar o maior com
menor*/

#include<stdio.h>
#define TAM 8

void descobrir(int vetor [], int tamanho, int *maior, int *menor)
{
	int i, mai=-9999, men=9999;
	
	for(i=0; i<tamanho; i++)
	{
		if(mai<vetor[i])
		{
			mai=vetor[i];
		}
		if(men>vetor[i])
		{
			men=vetor[i];
		}
	}
	*maior=mai;
	*menor=men;
}

void achar (int vetor [],int tamanho,int *maior,int *menor)
{
	descobrir(vetor, tamanho, maior, menor);
	
	int i, local1, local2, aux;
	
	for(i=0; i<tamanho; i++)
	{
		if(*maior==vetor[i])
		{
			local1=i;
		}
		if(*menor==vetor[i])
		{
			local2=i;
		}
	}
	aux=vetor[local1];
	vetor[local1]=vetor[local2];
	vetor[local2]=aux;
	
	
}

void main ()
{
	int v[TAM]={1,5,8,3,4,9,2,6};
	int maior, menor, i;
	
	achar(v, TAM, &maior, &menor);
	
	for(i=0; i<TAM; i++)
	{
		printf("vetor[%d] = %d\n", i, v[i]);
	}
}
