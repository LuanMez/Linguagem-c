/*Implementar uma fun��o que, dado um n�mero inteiro
n, exiba uma sequ�ncia de n�meros conforme ilustrado
nos exemplos a seguir.
Exemplos:
n = 3       1 2 3 1 2 1
n = 5       1 2 3 4 5 1 2 3 4 1 2 3 1 2 1*/

#include<stdio.h>

void exibir (int num)
{
	int i, j;
	
	for(i=num; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ", j);
		}
	}
}

void main ()
{
	int n;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	exibir(n);
}
