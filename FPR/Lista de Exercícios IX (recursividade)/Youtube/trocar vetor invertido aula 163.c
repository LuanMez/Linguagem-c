/*
Aula 163: Fa�a uma fun��o recursiva que inverta as posi�oes
dos elementos do vetor
*/

#include<stdio.h>
#define TAM 10

//prototipo da fun��o
void valoresAleatorios (int vet[], int tamanho);
void trocarVetor2(int vet[], int tamanho, int indice);
void trocarVetor(int vet[], int tamanho);
void exibir(int vet[], int tamanho);

//main
void main ()
{
	int vet[TAM];
	int resultado;
	
	valoresAleatorios(vet,TAM);
	trocarVetor(vet,TAM);
	exibir(vet,TAM);
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

//Implementa��o da fun��o
void trocarVetor2(int vet[], int fim, int inicio)
{
	int aux;
	
	if(fim-1>inicio)
	{
		aux=vet[fim-1];
		vet[fim-1]=vet[inicio];
		vet[inicio]=aux;
		
		trocarVetor2(vet, fim-1, inicio+1);
	}
}

void trocarVetor(int vet[], int tamanho)
{
	trocarVetor2(vet, tamanho, 0); //passando o indice como 0
}

void exibir(int vet[], int tamanho)
{
	int i;
	
	printf("Vetor invertido: \n");
	
	for(i=0; i<tamanho; i++)
	{
		printf("%d ", vet[i]);
	}
}



