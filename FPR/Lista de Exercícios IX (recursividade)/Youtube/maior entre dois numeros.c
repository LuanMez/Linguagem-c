/*
Aula 150: Fazer uma fun��o recursiva que, dados dois numeros
interios x e n,descobrir quem � o maior.
*/

#include<stdio.h>

//prototipo da fun��o
int maior(int n, int x);

//main
void main ()
{
	int n, x, resultado;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	
	resultado=maior(n, x);
	
	printf("O maior valor eh %d",resultado);
}

//Implementa��o da fun��o

int maior(int n, int x)
{
	if(n>x)
	{
		return n;
	}
	else
	{
		return x;
	}
}


