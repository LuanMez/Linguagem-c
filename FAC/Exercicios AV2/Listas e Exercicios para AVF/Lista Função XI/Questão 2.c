/*QUESTÃO 02:
Implementar uma função que, dado um vetor
de reais, troque o 1? e o 2? elementos, em
seguida o 3? e o 4? elementos e assim
sucessivamente, até se chegar ao final do vetor.*/

#include<stdio.h>
#define TAM 10

void trocar (int vetor[], int tamanho)
{
	int i, aux;
	
	for(i=0; i<tamanho; i+=2) //mais dois i para não alterar a posição dos anteriores
	{
		aux=vetor[i];
		vetor[i]=vetor[i+1]; //i+1 é o vetor a frente de i; 
		vetor[i+1]=aux;	
	}
}

void main ()
{
	int v[TAM], i;
	
	//preenchendo o vetor
	for(i=0; i<TAM; i++)
	{
		printf("digite um valor para o vetor %d: ", i);
		scanf("%d", &v[i]);
	}
	
	trocar(v, TAM);
	
	//exibindo os valores
	for(i=0; i<TAM; i++)
	{
		printf("vetor[%d]=%d\n", i, v[i]);
	}
}
