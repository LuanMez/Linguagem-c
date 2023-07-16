/*Questão 03 [2,5 pontos]:
Fazer uma função que, dados um vetor vet com quant
valores inteiros e um número n, determine a
quantidade de valores superiores a n existentes na
primeira metade do vetor, assim como o número de
vezes que n aparece na segunda metade.*/

#include<stdio.h>
#define QUANT 6

void procurar( int vetor[], int quantidade, int num, int *superior, int *vezes)
{
	int i, metade=quantidade/2, su=0, ve=0;
	metade--;
	
	for(i=0; i<quantidade; i++)
	{
		if(vetor[i]>num && i<=metade)
		{
			su++;
		}
		if(vetor[i]==num && i>metade)
		{
			ve++;
		}
	}
	*superior=su;
	*vezes=ve;
}

void main ()
{
	int v[QUANT]={5,3,2,3,3,3};
	int n,sup, vez;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	procurar(v, QUANT, n, &sup, &vez);
	
	printf("Os valores superiores a n existentes na primeira metade do vetor e' %d\nO numero de vezes que n aparece na segunda metade e' %d", sup, vez);
}
