/*
Aula 150: Fazer uma fun��o recursiva que, calcule a soma
dos numeros inteiros de 1 a N.
*/

#include<stdio.h>

//prototipo da fun��o
int soma(int n);

//main
void main ()
{
	int n, x, resultado;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	resultado=soma(n);
	
	printf("Resultado: %d",resultado);
}

//Implementa��o da fun��o
int soma(int n)
{
	if(n<=0)
	{
		return 0;
	}
	else
	{
		return n+soma(n-1);
	}
}

