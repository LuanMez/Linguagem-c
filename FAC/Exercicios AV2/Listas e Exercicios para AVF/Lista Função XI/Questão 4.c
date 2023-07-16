/*QUEST�O 04:
Fazer uma fun��o que armazene em um vetor
os 50 primeiros termos da seguinte sequ�ncia:
S = 1, 2, 4, 7, 11, 16, ...

Nota: observem que a diferen�a entre o 1o e 2o
elementos � igual a 1, entre o 2o e 3o � igual a
2, entre o 3o e o 4o � igual a 3, e assim
sucessivamente.*/

#include<stdio.h>
#define TAM 50

void armazenar (int vetor[],int tamanho)
{
	int i;
	
	for(i=0; i<tamanho; i++)
	{
		if(i==0)
		{
			vetor[i]=1;
		}
		else
		{
			vetor[i]=vetor[i-1];
			vetor[i]+=i;
		}
	}
}

void main ()
{
	int v[TAM], i;
	
	armazenar(v, TAM);
	
	//exibindo os valores
	for(i=0; i<TAM; i++)
	{
		printf("%d ", v[i]);
	}
}
