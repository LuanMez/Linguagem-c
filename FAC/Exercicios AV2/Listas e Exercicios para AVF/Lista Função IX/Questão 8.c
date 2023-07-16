/*QUESTÃO 08:
Desenvolver uma função que exiba todos os
números primos inferiores a determinado valor
inteiro N.*/

#include<stdio.h>

void primos (int numero)
{
	int i, j, cont=0;
	
	for(i=2; i<=numero; i++)
	{
		for(j=1; j<=numero; j++)
		{
			if(i%j==0)
			{
				cont++;
			}
		}
		if(cont==2)
			{
				printf("%d ", i);
			}
			cont=0;
	}
}

void main ()
{
	int n;
	
	printf("digite o numero: ");
	scanf("%d", &n);
	
	primos(n);
}
