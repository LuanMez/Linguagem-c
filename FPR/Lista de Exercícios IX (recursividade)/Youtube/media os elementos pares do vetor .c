/*
Aula 161: Faça uma função recursiva para calcular 
a soma de todosos valores de um vetor de inteiros.
*/

#include<stdio.h>
#define TAM 10

//prototipo da função
void valoresAleatorios (int vet[], int tamanho);
float somaVetor2(int vet[], int tamanho, float soma, float quant);
float somaVetor(int vet[], int tamanho);

//main
void main ()
{
	int vet[TAM];
	float resultado;
	
	valoresAleatorios(vet,TAM);
	resultado=somaVetor(vet,TAM);
	
	printf("Resultado: %f",resultado);
}

void valoresAleatorios (int vet[], int tamanho)
{
	int i;
	
	srand (time(NULL)); //vai dar um delay pelo horario do pc para os garantir que sejam aleatorios
	
	for(i=0; i<tamanho; i++)
	{
		vet[i]=rand()%10; //rand faz valores aleatorios
		
		printf("%d ", vet[i]);
	}
	printf("\n");
}

//Implementação da função
float somaVetor(int vet[], int tamanho)
{
	return somaVetor2(vet, tamanho, 0, 0);
}

float somaVetor2(int vet[], int tamanho, float soma, float quant)
{
	if(tamanho==0) //se o tamanho for 0 significa q o vetor nao tem nenhum elemento
	{
		return soma/quant; //retorna o valor 0
	}
	else
	{
		if(vet[tamanho-1]%2==0)
		{
			return somaVetor2(vet,tamanho-1, soma+vet[tamanho-1], quant+=1); //se nao soma	
		}
		else
		{
			return somaVetor2(vet,tamanho-1,soma,quant);
		}
	}
}


