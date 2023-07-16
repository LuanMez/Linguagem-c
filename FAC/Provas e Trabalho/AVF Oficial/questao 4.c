/*Questão 04 [2,5 pontos]:
Considerem dois vetores de reais, vetA e vetB, cada
qual com quant elementos. Desenvolver uma função
que compare o 1o elemento de vetA com o 1o de vetB;
se o de vetA for maior do que o de vetB, eles deverão
ser trocados. E este mesmo processo deverá repetir-se
para o 2o número de veta e o 2o de vetB e, assim,
sucessivamente.*/

#include<stdio.h>
#define QUANT 5

void trocar(int vetorA[], int quantidade, int vetorB[])
{
	int i, j, aux;
	
	for(i=0; i<quantidade; i++)
	{
		printf("Insira o valor da posicao do vetor[%d]: ", i);
		scanf("%d", &vetorA[i]);
	}
	for(j=0; j<quantidade; j++)
	{
		printf("Insira o valor da posicao do vetor[%d]: ", j);
		scanf("%d", &vetorB[j]);
	}
	for(i=0, j=0; i<quantidade; i++, j++)
	{
		if(vetorA[i]>vetorB[j])
		{
			aux=vetorA[i];
			vetorA[i]=vetorB[j];
			vetorB[j]=aux;
		}
	}
	
}

void main ()
{
	int va[QUANT], vb[QUANT], i, j;
	
	trocar(va, QUANT, vb);
	
	for(i=0; i<QUANT; i++)
	{
		printf("valor novo da posicao do vetor[%d]: %d\n", i, va[i]);
	}
	for(j=0; j<QUANT; j++)
	{
		printf("valor novo da posicao do vetor[%d]: %d\n", j, vb[j]);
	}
}
