/*
Aula 150: Fazer uma função recursiva que, dados dois numeros
interios x e n, calcule e retorne o valor de x elevado n.
*/

#include<stdio.h>

//prototipo da função
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
int potencia(int n, int x)
{
	if(x==0)
	{
		return 1;
	}
	else
	{
		return n * potencia (n, x-1);
		
	}
}

