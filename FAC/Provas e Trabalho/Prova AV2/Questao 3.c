/*Fazer uma função que, dados um vetor vet com quant
valores inteiros e um número n, determine a
quantidade de valores superiores a n existentes na
primeira metade do vetor, assim como o número de
vezes que n aparece na segunda metade.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define QUANT 10

void prencher (int vetor[], int quantidade)
{
	//declaração da variavel
	int i; 
	
	srand (time(NULL)); //vai dar um delay pelo horario do pc para os garantir que sejam aleatorios
	
	//gerando numeros aleatorios
	for(i=0; i<quantidade; i++)
	{
		vetor[i]=rand()%quantidade; //rand faz valores aleatorios
	}
	for(i=0; i<quantidade; i++)
	{
		//exibir os valores aleatorios
		printf("os valor do aleatorios do vetor[%d]=%d\n", i, vetor[i]);
	}
}

int superior (int vetor[], int quantidade, int numero)
{
	//declaracao das variaveis
	int i, sup=0;
	
	//verificar se tem numeros maiores que n menos da metade
	for (i=0;i<quantidade/2;i++)
	{
		if(vetor[i]>numero)
		{
			sup++;
		}
	}
	return sup; //atribuir o valor para sup
}

int verificar (int vetor[], int quantidade, int numero)
{
	//declaracao das variaveis
	int i, veri=0;
	
	//verificar se o numero aparece mais da metade
	for (i=quantidade/2;i<quantidade;i++)
	{
		if(vetor[i]==numero)
		{
			veri++;
		}
	}
	return veri; //retorna o valor
}

void main ()
{
	//declaracao das variaveis
	int v[QUANT];
	int n, resultado, resultado2;
	
	//leitura de n
	printf("digite um numero inteiro n: ");
	scanf("%d", &n);
	
	//chamando as funcoes
	prencher (v, QUANT);
	
	resultado=superior(v, QUANT, n);
	
	resultado2=verificar(v, QUANT, n);
	
	//exibindo os valores
	printf("quantidade de valores superiores a n existentes na primeira metade do vetor: %d\n", resultado);
	printf("o número de vezes que n aparece na segunda metade: %d\n", resultado2);
	
}
