#include <stdio.h>

/*Dado um número inteiro N, fazer um
programa que exiba os números pares
iguais ou inferiores a N.*/

void main ()
{
	int numero, i, resto=0;
	
	
	printf("digite um numero inteiro: ");
	scanf ("%d", &numero);
	
	for (i=0; i<=numero; i++)
	{
		if(i%2 == 0)
		{
			printf ("%d ", i);
		}
		
	}
	
}
