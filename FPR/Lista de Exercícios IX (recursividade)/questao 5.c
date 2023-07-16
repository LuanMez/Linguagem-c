/*Questão 05:
Pede-se a implementação de uma função
recursiva que exiba os n primeiros termos de
uma PG (Progressão Geométrica), onde a1 é o
seu primeiro termo e q a razão.
Observação: uma PG consiste em uma
sequência de valores, iniciadas pelo valor a1. Os
demais elementos são definidos como o
anterior multiplicado pela razão.*/

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
