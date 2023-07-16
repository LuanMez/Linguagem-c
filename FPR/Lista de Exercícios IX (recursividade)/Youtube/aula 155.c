/*
Aula 153: Fazer uma fun��o que calcule e retorne o fatorial de N
*/

#include<stdio.h>

//prototipo da fun��o
int fatorial(int n);

//main
void main ()
{
	int n, resultado;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	resultado=fatorial(n);
	
	printf("Fatorial de %d eh %d", n, resultado);
}

//Implementa��o da fun��o

int fatorial(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*fatorial(n-1);
	}
}

