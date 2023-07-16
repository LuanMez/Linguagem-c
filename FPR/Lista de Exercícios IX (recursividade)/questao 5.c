/*Quest�o 05:
Pede-se a implementa��o de uma fun��o
recursiva que exiba os n primeiros termos de
uma PG (Progress�o Geom�trica), onde a1 � o
seu primeiro termo e q a raz�o.
Observa��o: uma PG consiste em uma
sequ�ncia de valores, iniciadas pelo valor a1. Os
demais elementos s�o definidos como o
anterior multiplicado pela raz�o.*/

#include<stdio.h>
void funcaoPG2(int a1, int n, int q, int x);
void funcaoPG(int a1, int n, int q);

void main ()
{
	int a1, n, q;
	
	printf("Digite o valor do primeiro termo da pg: ");
	scanf("%d", &a1);
	
	printf("Digite o n primeiro elemento que deseja exibir: ");
	scanf("%d", &n);
	
	printf("Digite a razao: ");
	scanf("%d", &q);
	
	funcaoPG(a1,n,q);
}

void funcaoPG2(int a1, int n, int q, int x)
{
	if(x==n)
	{
		printf("%d ", a1);
	}
	else
	{
		printf("%d ", a1);
		funcaoPG2((a1*q),n,q,x+1);
	}
}

void funcaoPG(int a1, int n, int q)
{
	funcaoPG2(a1,n,q,1);
}
