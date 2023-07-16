/*QUESTÃO 05:
Elaborar uma função que, dado um conjunto de
300 valores inteiros, distribua-os em 2 vetores
conforme forem pares ou ímpares.*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define TAM 10

void distribuindo(int vetor[],int tamanho,int vetorpar[], int *quantP, int vetorimpar[], int *quantI)
{
	int i, j=0, k=0;
	
	for(i=0; i<tamanho; i++)
	{
		if(vetor[i]%2==0)
		{
			vetorpar[j]=vetor[i];
			j++;
		}
		else
		{
			vetorimpar[k]=vetor[i];
			k++;
		}
	}
	*quantP=j;
	*quantI=k;
}

void main ()
{
	//declaração de variáveis
	int v[TAM], pares[TAM], impares[TAM];
	int quantidadeP, quantidadeI, i;
	
	srand (time(NULL)); //vai dar um delay pelo horario do pc para os garantir que sejam aleatorios
	
	//gerando numeros aleatorios
	for(i=0; i<TAM; i++)
	{
		v[i]=rand()%TAM; //rand faz valores aleatorios
	}
	//exibindo os valores do vetor principal
	for(i=0; i<TAM; i++)
	{
		printf("Valor do vetor %d: %d\n", i, v[i]);
	}
	
	distribuindo(v, TAM, pares, &quantidadeP, impares, &quantidadeI);
	
	//exibindo os valores do vetor par
	for(i=0; i<quantidadeP; i++)
	{
		printf("Valor do vetor par %d: %d\n", i, pares[i]);
	}
	//exibindo os valores do vetor impar
	for(i=0; i<quantidadeI; i++)
	{
		printf("Valor do vetor impar %d: %d\n", i, impares[i]);
	}
	
}
