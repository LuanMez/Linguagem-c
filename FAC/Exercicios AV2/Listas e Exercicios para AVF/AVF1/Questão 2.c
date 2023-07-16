/*Implementar uma função que determine se os
elementos de um vetor de reais V são (1) ou não (0) os
mesmos se percorridos do início para o fim ou do fim
para o início.*/

#include<stdio.h>

int percorrer (int vetor [], int tamanho)
{
	int i, j, metade=tamanho/2, cont=1;
	
	for(i=0, j=tamanho-1; i<=metade; i++, j--)
	{
		if(vetor[i]!=vetor[j])
		{
			cont=0;
		}
	}
	return cont;
}

void main ()
{
	int v[5]={1,2,3,2,1};
	int resultado;
	
	resultado=percorrer(v, 5);
	
	printf("Retorno %d", resultado);
}
