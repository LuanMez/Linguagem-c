/*Desenvolver uma função que, dados um
número inteiro n e um vetor contendo
quant valores inteiros, determine a
quantidade de elementos do vetor que são
maiores do que n, assim com a quantidade
de valores menores do que n.*/

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

int maiores (int vetor[], int quantidade, int numero)
{
	//declaracao das variaveis
	int i, maio=0;
	
	//verificar se tem numeros maiores que n menos da metade
	for (i=0;i<quantidade;i++)
	{
		if(vetor[i]>numero)
		{
			maio++;
		}
	}
	return maio; //atribuir o valor para sup
}

int menores (int vetor[], int quantidade, int numero)
{
	//declaracao das variaveis
	int i, meno=0;
	
	//verificar se o numero aparece mais da metade
	for (i=0;i<quantidade;i++)
	{
		if(vetor[i]<numero)
		{
			meno++;
		}
	}
	return meno; //retorna o valor
}

void main ()
{
	//declaracao das variaveis
	int v[QUANT];
	int n, resultadoMaior, resultadoMenor;
	
	//leitura de n
	printf("digite um numero inteiro n: ");
	scanf("%d", &n);
	
	//chamando as funcoes
	prencher (v, QUANT);
	
	resultadoMaior=maiores(v, QUANT, n);
	
	resultadoMenor=menores(v, QUANT, n);
	
	//exibindo os valores
	printf("quantidade de elementos do vetor que sao maiores do que n: %d\n", resultadoMaior);
	printf("quantidade de elementos do vetor que sao menores do que n: %d\n", resultadoMenor);
	
}
