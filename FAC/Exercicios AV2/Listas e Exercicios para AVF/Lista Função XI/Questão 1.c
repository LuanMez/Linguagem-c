/*QUESTÃO 01:
Desenvolver uma função que determine o
número de ocorrências de um número inteiro x
em um vetor A.*/

#include<stdio.h>

int ocorrencias (int num, int vetor[], int tam)
{
	int i, cont=0;
	
	for(i=0; i<tam; i++)
	{
		if(vetor[i]==num)
		{
			cont++;
		}
	}
	return cont;
}

void main ()
{
	int n, v[10]={2,3,3,4,5,5,5,6,7,6}, resultado;
	
	printf("Digite um numero que esteja no vetor: ");
	scanf("%d", &n);
	
	resultado=ocorrencias(n, v, 10);
	
	printf("o numero de ocorrencias que %d aparece e': %d", n, resultado);
}
