/*Suponha a existência dos seguintes
vetores:
? vetA: contendo quant valores
inteiros;
? vetB: do mesmo tamanho do vetA,
porém contendo inteiros que
representam posições de vetA.
Desenvolver uma função que percorrerá os
elementos de vetA na ordem definida em
vetB. Se neste percurso os valores
estiverem em ordem crescente, a função
deverá retornar o valor 1; caso contrário, 0
será retornado.*/

#include<stdio.h>
#define QUANT 6

int verificar (int vetorA [], int quantA, int vetorB[], int quantB)
{
	int i, retorno=1;
	
	for(i=0; i<quantB-1; i++)
	{
		if(vetorA[vetorB[i]]>vetorA[vetorB[i+1]])
		{
			retorno=0;
		}
	}
	
	return retorno;
}

void main ()
{
	int vetA[QUANT]={1,2,3,4,5,6};
	int vetB[6]={0,1,2,3,4,5};
	int resultado;
	
	resultado=verificar(vetA, QUANT, vetB, 6);
	
	printf("retorno %d", resultado);
}
