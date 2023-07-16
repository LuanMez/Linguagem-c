//questao 3
#include<stdio.h>

int verificar (vetor[], quantidade)
{
	int i, resultado=1.
	
	for(i=0; i<quant; i++)
	{
		if((vet[i]-vet[i+1]) && (vet[i+1]-vet[i+1+1]))
		{
			resultado*=1;
		}
		else
		{
			resultado*=0;
		}
	}
	printf("%d", resultado);
}

void main ()
{
	int i, v[i];
	int quant, result;
	
	printf("digite o tamanho do vetor: ");
	scanf("%d", quant);
	
	for(i=0; i<quant; i++)
	{
		printf ("Digite os numeros que quer no vetor: ");
		scanf("%d", &v[i]);
	}
	
	verificar(v[i], quant);
}
