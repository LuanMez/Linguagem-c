/*mostrar os valores que estão armazenados nos vetores pares*/

#include<stdio.h>
#include<stdlib.h>

int preencher(int n, int *vetor)
{
	int i;
	
	for (i=0; i<n; i++)
	{
		printf("Insira o valor da posicao %d do vetor", i);
		scanf("%d", &vetor[i]);
	}
}
int verificar(int n, int *vetor)
{
	int i;
	
	for(i=0; i<n; i+=2)
	{
		printf("%d - ", vetor[i]);
	}
}

void main ()
{
	int n, vetor[n], i;
	
	preencher(n, vetor);
	verificar(n, vetor);
	
}
