//CODIGO 1:
#include<stdio.h>
#define TAM 6

void dadosInseridos (int vetor[], int tamanho)
{
	int i;
	
	for(i=0; i<tamanho; i++)
	{
		printf("Valor do vetor %d: %d\n", i, vetor[i]);
	}
}

void main ()
{
	int v[TAM], i;
	
	for(i=0; i<TAM; i++)
	{
		printf("Insira o valor do vetor %d: ", i);
		scanf("%d", &v[i]);
	}
	
	dadosInseridos(v, TAM);
	
	//a inserção no vetor e exibição ficam na main.
}

//CODIGO 2:

#include<stdio.h>
#define TAM 6

void dadosInseridos (int vetor[], int tamanho)
{
	int i;
	
	for(i=0; i<tamanho; i++)
	{
		printf("Valor do vetor %d: %d\n", i, vetor[i]);
	}
}

void main ()
{
	int v[TAM]={5,3,7,9,1,6};
	
	dadosInseridos(v, TAM);
	
	//a inserção no vetor e exibição ficam na main.
}

//CODIGO 3:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 6

void dadosInseridos (int vetor[], int tamanho)
{
	int i;
	
	for(i=0; i<tamanho; i++)
	{
		printf("Valor do vetor %d: %d\n", i, vetor[i]);
	}
}

void main ()
{
	int v[TAM], i;
	
	srand (time(NULL)); //vai dar um delay pelo horario do pc para os garantir que sejam aleatorios
	
	//gerando numeros aleatorios
	for(i=0; i<TAM; i++)
	{
		v[i]=rand()%TAM; //rand faz valores aleatorios
	}
	
	dadosInseridos(v, TAM);
}

//CODIGO 4:

#include<stdio.h>

void dadosInseridos (int vetor[], int tamanho)
{
	int i;
	
	for(i=0; i<tamanho; i++)
	{
		printf("Valor do vetor %d: %d\n", i, vetor[i]);
	}
}

void main ()
{
	int v[6]={5,3,7,9,1,6};
	
	dadosInseridos(v, 6);
	
	//a inserção no vetor e exibição ficam na main.
}



