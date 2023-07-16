/*QUESTÃO 09:
Implementar uma função que, dado um
número inteiro, calcule (e retorne) a soma e a
média de seus divisores.*/

#include<stdio.h>

void calculo (int num, int *soma, float *med)
{
	int somatorio=0, cont=0, i;
	float mediaaa;
	
	for(i=1; i<=num; i++)
	{
		if(num%i==0)
		{
			somatorio+=i;
			cont++;
		}
	}
	mediaaa=(float)somatorio/cont;
	
	//atribuindo os valores
	*soma=somatorio;
	*med=mediaaa;
}

void main ()
{
	int n, soma;
	float media;
	
	printf("digite um numero inteiro: ");
	scanf("%d", &n);
	
	calculo(n, &soma, &media);
	
	printf("A soma de seus divisores e': %d\n", soma);
	printf("A media de seus divisores e': %.2f", media);
	
	
}
