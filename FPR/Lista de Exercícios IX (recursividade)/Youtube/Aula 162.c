/*
Aula 152: Faça uma função recursiva que encontre e retorne
o maior elemento de um vetor de inteiros de tamanho N.
*/

#include<stdio.h>
#define TAM 10

//prototipo da função
void valoresAleatorios (int vet[], int tamanho);
int maiorVetor2(int vet[], int tamanho, int indice);
int maiorVetor(int vet[], int tamanho);

//main
void main ()
{
	int vet[TAM];
	int resultado;
	
	valoresAleatorios(vet,TAM);
	resultado=maiorVetor(vet,TAM);
	
	printf("Maior elemento do vetor: %d",resultado);
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
int maiorVetor2(int vet[], int tamanho, int indice)
{
	if(tamanho==0)
	{
		return vet[indice]; //se chegou no 0 o indice é o maior de todos
	}
	else
	{
		if(vet[tamanho-1]>vet[indice]) //se achar um que seja maior que o indice 0 
		{
			return maiorVetor2(vet,tamanho-1, tamanho-1); //indice vira o maior elemento achado
		}
		else
		{
			return maiorVetor2(vet, tamanho-1, indice); //se o indice for maior o tamanho diminui
		}
	}
}

int maiorVetor(int vet[], int tamanho)
{
	maiorVetor2(vet, tamanho, 0); //passando o indice como 0
}

