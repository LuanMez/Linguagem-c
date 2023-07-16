/*Desenvolver uma função que, dados um
número inteiro n e um vetor contendo
quant valores inteiros, determine a
quantidade de elementos do vetor que são
maiores do que n, assim com a quantidade
de valores menores do que n.*/

#include<stdio.h>
#define TAM 8

void maiormenor(int vetor [], int tamanho, int num, int *maior, int *menor)
{
	int i, mai=0, men=0;
	
	for(i=0; i<tamanho; i++)
	{
		if(vetor[i]>num)
		{
			mai++;
		}
		if(vetor[i]<num)
		{
			men++;
		}
	}
	*maior=mai;
	*menor=men;
}

void main ()
{
	int v[TAM]={1,2,3,4,6,7,8,9};
	int n, maior, menor;
	
	printf("Digite um numero N: ");
	scanf("%d", &n);
	
	maiormenor(v, TAM, n, &maior, &menor);
	
	printf("A quantidade de numeros maiores que N e' %d e menores que N e' %d", maior, menor);
}
