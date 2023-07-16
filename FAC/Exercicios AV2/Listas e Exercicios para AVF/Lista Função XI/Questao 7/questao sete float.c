/*QUESTÃO 07:
Desenvolver uma função que remova
determinado elemento (todas as suas
ocorrências) de um vetor de float. Ao final,
retornar o número de remoções realizadas.*/

#include<stdio.h>
#define TAM 5

int remover(float vetor [], float *quant, float tamanho, float num)
{
	int i, j, aux;
	int cont=0;
	
	*quant=tamanho;
	
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
	int i, resultado;
	float v[TAM], n, quant;
	
	for(i=0; i<TAM; i++)
	{
		printf("Digite o valor do vetor[%d]: \n", i);
		scanf("%f", &v[i]);
	}
	
	printf("Qual elemento deseja remover? ");
	scanf("%f", &n);
	
	resultado=remover(v, &quant, TAM, n);
	
	for(i=0; i<quant; i++)
	{
		printf("Novo vetor[%d]: %.2f\n", i,  v[i]);
	}
	
	printf("O numero de remoçoes foi %d", resultado);
}
