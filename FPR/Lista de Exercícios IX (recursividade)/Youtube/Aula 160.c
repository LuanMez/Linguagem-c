/*
Aula 150: Fazer uma função recursiva que, calcule a soma
dos numeros inteiros de 1 a N.
*/

#include<stdio.h>

//prototipo da função
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

//Implementação da função
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

