/*Dado um vetor vetA com quantA inteiros, desenvolver
uma função que crie um vetor vetB contendo apenas os
elementos que aparecem mais de uma vez em vetA,
conforme ilustrado pelos exemplos a seguir:*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define QUANT 10

void prencher (int vetorA[], int quantidade)
{
	int i; 
	
	srand (time(NULL)); //vai dar um delay pelo horario do pc para os garantir que sejam aleatorios
	
	for(i=0; i<quantidade; i++)
	{
		vetorA[i]=rand()%quantidade; //rand faz valores aleatorios
	}
	for(i=0; i<quantidade; i++)
	{
		printf("os valor do aleatorios do vetor[%d]=%d\n", i, vetorA[i]);
	}
}

void verificar (int vetorA[], int quantidade, int vetorB[])
{
	int i;
	
	for(i=0; i<quantidade; i++)
	{
		if(vetorA[i]==vetorA[i+1])
		{
			vetorB[i]=vetorA[i];
		}
    }
}

void main ()
{
	int v[QUANT], vet[QUANT];
	
	prencher(v, QUANT);
	
	verificar(v, QUANT, vet);
	
	printf("%d ", vet);
}
