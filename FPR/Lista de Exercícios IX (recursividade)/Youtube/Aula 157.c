/*
Aula 153: Fazer uma função que calcule p N-ésimo termo da sequencia de fibonacci
*/

#include<stdio.h>

//prototipo da função
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

//Implementação da função

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

