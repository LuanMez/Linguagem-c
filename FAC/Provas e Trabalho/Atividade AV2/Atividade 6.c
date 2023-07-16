/*Desenvolver uma função que, dados um
número inteiro n e um vetor contendo
quant valores inteiros, altere a disposição
dos elementos do vetor, de forma que os
menores do que n fiquem no início da
estrutura e os demais ao seu final.*/

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

void trocarElementos (int vetor[], int quantidade, int numero)
{
	//declaracao das variaveis
	int i, j, aux=0;
	
	//verificar se tem numeros maiores que n menos da metade
	for (i=0; i<quantidade ;i++)
	{
		if(vetor[i]>=numero)
		{
			for(j=9; j>i; j--)
		    {
		    	if(vetor[j]<numero)
		    	{
		    		aux=vetor[i];
	                vetor[i]=vetor[j];
	                vetor[j]=aux;
				}
	    	}
		}
		
	}
}

void exibir (int vetor[], int quantidade)
{
	//declaração de variáveis
	int i;
	
	printf ("\n\nVetor: ");
	
	//percorrendo todas as posições do vetor
	for (i=0;i<quantidade;i++)
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}

void main ()
{
	//declaracao das variaveis
	int v[QUANT];
	int n;
	
	//leitura de n
	printf("digite um numero inteiro n: ");
	scanf("%d", &n);
	
	//chamando as funcoes
	prencher (v, QUANT);
	
    trocarElementos(v, QUANT, n);
	
	exibir (v, QUANT);
	
}
