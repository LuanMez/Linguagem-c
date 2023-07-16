/*
Aula 150: Fazer uma função recursiva que, dados dois numeros
interios x e n, calcule e retorne o valor de x elevado n.
*/

#include<stdio.h>

//prototipo da função
int potencia2(int n, int y, int x);

int potencia(int n, int x);

//main
void main ()
{
	int n, x, resultado;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	
	resultado=potencia(n, x);
	
	printf("Potencia de %d elevado a %d eh %d", n, x, resultado);
}

//Implementação da função

int potencia2(int n, int y, int x)
{
	if(x!=1)
	{
		return potencia2(n*y,y,x-1);
	}
	else
	{
		if(x==0)
		{
			return potencia2(n,y,x);
		}
	}
	/*else
	{
		return potencia2(n*y,y,x-1);
		printf("gay");
		return potencia2(n,y,x);
	}*/
}

int potencia(int n, int x)
{
	int y=n;
	
	return potencia2(n,y,x);
}

