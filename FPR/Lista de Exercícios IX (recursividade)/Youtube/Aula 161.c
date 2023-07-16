/*
Aula 161: Faça uma função recursiva para calcular 
a soma de todosos valores de um vetor de inteiros.
*/

#include<stdio.h>
#define TAM 10

//prototipo da função
void valoresAleatorios (int vet[], int tamanho);
int somaVetor(int vet[], int tamanho);

//main
void main ()
{
	int vet[TAM];
	int resultado;
	
	valoresAleatorios(vet,TAM);
	resultado=somaVetor(vet,TAM);
	
	printf("Resultado: %d",resultado);
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
int somaVetor(int vet[], int tamanho)
{
	if(tamanho==0) //se o tamanho for 0 significa q o vetor nao tem nenhum elemento
	{
		return 0; //retorna o valor 0
	}
	else
	{
		return vet[tamanho-1] + somaVetor(vet,tamanho-1); //se nao soma
	}
}

