/*
Aula 163: Faça uma função recursiva que imprima o vetor
invertido.
*/

#include<stdio.h>
#define TAM 10

//prototipo da função
void valoresAleatorios (int vet[], int tamanho);
void inverterVetor(int vet[], int tamanho);

//main
void main ()
{
	int vet[TAM];
	int resultado;
	
	valoresAleatorios(vet,TAM);
	inverterVetor(vet,TAM);
}

void valoresAleatorios (int vet[], int tamanho)
{
	int i;
	
	srand (time(NULL)); //vai dar um delay pelo horario do pc para os garantir que sejam aleatorios
	
	for(i=0; i<tamanho; i++)
	{
		vet[i]=rand()%100; //rand faz valores aleatorios
		
		printf("%d ", vet[i]);
	}
	printf("\n");
}

//Implementação da função

void inverterVetor(int vet[], int tamanho)
{
	if(tamanho==1)
	{
		printf("%d", vet[tamanho-1]);
	}
	else
	{
		printf("%d ", vet[tamanho-1]);
		
		inverterVetor(vet,tamanho-1);
		
	}
}

