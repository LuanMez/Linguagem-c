/*
Aula 153: Fazer uma fun��o que calcule p N-�simo termo da sequencia de fibonacci
*/

#include<stdio.h>

//prototipo da fun��o
int fibonacci(int n);

//main
void main ()
{
	int n, resultado;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	resultado=fibonacci(n);
	
	printf("Fibonacci de %d eh %d", n, resultado);
}

//Implementa��o da fun��o

int fibonacci(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		if(n==2)
		{
			return 1;
		}
		else
		{
		return fibonacci(n-1)+fibonacci(n-2);
			
		}
	}
}

