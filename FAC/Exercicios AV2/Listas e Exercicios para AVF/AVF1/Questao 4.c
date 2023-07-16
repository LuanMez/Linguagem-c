/*Considerem dois vetores de reais, vetA e vetB, cada
qual com quant elementos. Desenvolver uma função
que compare o 1o elemento de vetA com o 1o de vetB;
se o de vetA for maior do que o de vetB, eles deverão
ser trocados. E este mesmo processo deverá repetir-se
para o 2o número de veta e o 2o de vetB e, assim,
sucessivamente.*/

#include<stdio.h>
#define QUANTA 8
#define QUANTB 8

void trocarMAior (int vetorA [], int quantA, int vetorB [], int quantB)
{
	int i, aux;
	
	for(i=0; i<quantA; i++)
	{
		if(vetorA[i]>vetorB[i])
		{
			aux=vetorA[i];
			vetorA[i]=vetorB[i];
			vetorB[i]=aux;
		}
	}
}

void main ()
{
	int vetA[QUANTA]={8,7,2,3,4,6,5,1,};
	int vetB[QUANTB]={1,9,2,4,3,7,2,10};
	int i;
	trocarMAior(vetA, QUANTA, vetB, QUANTB);
	
	for(i=0; i<QUANTA; i++)
	{
		printf("vetorA[%d] = %d\n", i, vetA[i]);
	}
	for(i=0; i<QUANTB; i++)
	{
		printf("vetorA[%d] = %d\n", i, vetB[i]);
	}
}
