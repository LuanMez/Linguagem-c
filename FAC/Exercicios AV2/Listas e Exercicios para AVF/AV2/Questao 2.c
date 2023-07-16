/*Questão 02 [2,5 pontos]:
Implementar uma função que, dados dois números
inteiros a e b, determine a quantidade de divisores
comuns aos dois.*/

#include<stdio.h>

int divisores (int azao, int bzao)
{
	int i, menor, div=0;
	
	if(bzao>azao)
	{
		menor=azao;
	}
	else
	{
		menor=bzao;
	}
	
	for(i=1; i<=menor; i++)
	{
		if(azao%i==0 && bzao%i==0)
		{
			div++;
		}
	}
	return div;
}

void main ()
{
	int a, b, resultado;
	
	printf("Digite dois numeros: ");
	scanf("%d %d", &a, &b);
	
	resultado=divisores(a, b);
	
	printf("A quantidade de divisores em comum entre os dois numeros e': %d", resultado);
}
