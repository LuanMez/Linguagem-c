/*Implementar uma função que, dado um
vetor contendo quant números inteiros,
determine a posição do elemento que mais
se aproxime da média dos valores do vetor.
Nota: caso mais de um valor do vetor atenda ao
enunciado, basta determinar a posição de um
deles (a critério do aluno).*/

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

float media (int vetor[], int quantidade)
{
	//declaracao das variaveis
	int i;
	float media=0, divisor=0;
	
	//verificar se tem numeros maiores que n menos da metade
	for (i=0; i<quantidade ;i++)
	{
		media+=vetor[i];
		divisor++;
	}
	media/=divisor;
	
	
	return media;
}

float verificar (int vetor[], int quantidade, float resultado)
{
	//declaração de variáveis
	int i, j, menor=10000000, arm,  aprox, vetorB[quantidade];
	
	for(i=0; i<quantidade; i++)
	{
		if(vetor[i]>resultado)
		{
			vetorB[i]=vetor[i]-resultado;
		}
		if(vetor[i]<resultado)
		{
			vetorB[i]=resultado-vetor[i];
		}
	}
	for(i=0; i<quantidade; i++)
	{
		if(vetorB[i]<menor)
		{
			menor=vetorB[i];
			arm=i;
		}
	}
	aprox=arm;
    return aprox;
}

void main ()
{
	//declaracao das variaveis
	int v[QUANT];
	float result, result2;
	
	//chamando as funcoes
	prencher (v, QUANT);
	
    result=media(v, QUANT);
	
	result2=verificar(v, QUANT, result);
	
	printf("valor da media dos numeros %.2f, e o numero que mais se aproxima esta no vetor [%.0f]", result, result2);
	
}
