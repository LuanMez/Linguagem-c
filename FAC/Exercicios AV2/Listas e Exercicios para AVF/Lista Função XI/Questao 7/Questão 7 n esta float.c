/*QUESTÃO 07:
Desenvolver uma função que remova
determinado elemento (todas as suas
ocorrências) de um vetor de float. Ao final,
retornar o número de remoções realizadas.*/

#include<stdio.h>
#define TAM 10

int remover(int vetor [], int *quant, int tamanho, int num)
{
	int i, j, aux;
	int cont=0;
	
	*quant=TAM;
	
	for (i=0;i<*quant;i++)
	{
		if(vetor[i]==num)
		{
			j=i;
			
			for(j; j<*quant; j++)
			{
				vetor[j]=vetor[j+1];
			}
			*quant=*quant-1;
			cont++;
		}
	}
	
	return cont;
}

void main ()
{
	int i, n, resultado;
	int v[TAM], quant;
	
	for(i=0; i<TAM; i++)
	{
		printf("Digite o valor do vetor[%d]: ", i);
		scanf("%d", &v[i]);
	}
	
	printf("Qual elemento deseja remover? ");
	scanf("%d", &n);
	
	resultado=remover(v, &quant, TAM, n);
	
	for(i=0; i<quant; i++)
	{
		printf("Novo vetor[%d]: %d\n", i,  v[i]);
	}
	
	printf("O numero de remoçoes foi %d", resultado);
}
