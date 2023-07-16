/*
Aula 161: Descobrir qual o menor valor de um vetor.
*/

#include<stdio.h>
#define TAM 10

//prototipo da função
void valoresAleatorios (int vet[], int tamanho);
int acharMenorVetor2(int vet[], int tamanho, int menor);
int acharMenorVetor(int vet[], int tamanho);

//main
void main ()
{
	int vet[TAM]={100,300,500,48,250,87,56,98,76,79};
	int resultado;
	
	resultado=acharMenorVetor(vet,TAM);
	
	printf("Resultado: %d",resultado);
}

//Implementação da função
int acharMenorVetor2(int vet[], int tamanho, int menor)
{
	if(tamanho==0) //se o tamanho for 0 significa q o vetor nao tem nenhum elemento
	{
		return menor; //retorna o valor 0
	}
	else
	{
		if(vet[tamanho-1]<menor)
		{
			return acharMenorVetor2(vet,tamanho-1, menor=vet[tamanho-1]); //se nao soma	
		}
		else
		{
			return acharMenorVetor2(vet,tamanho-1, menor);
		}
	}
}

int acharMenorVetor(int vet[], int tamanho)
{
	return acharMenorVetor2(vet, tamanho, 9999);
}



