/*Quest�o 02 [2,5 pontos]:
Implementar uma fun��o que determine se os
elementos de um vetor de reais V s�o (1) ou n�o (0) os
mesmos se percorridos do in�cio para o fim ou do fim
para o in�cio.*/

#include<stdio.h>
#define QUANT 6

void verificarIgualdade(int vetor[], int quantidade, int *resultado)
{
	int i, j=quantidade-1;
	
	for(i=0; i<quantidade; i++)
	{
		printf("Insira o valor da posicao do vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	for(i=0,j ; i<quantidade/2; i++, j--)
	{
		if(vetor[i]==vetor[j])
		{
		
		}
		else
		{
			if(vetor)
			*resultado*=0;
		}
	}
	
}

void main ()
{
	int v[QUANT], resultado=1;
	
	verificarIgualdade(v, QUANT, &resultado);
	
	printf("retorno %d", resultado);
}
