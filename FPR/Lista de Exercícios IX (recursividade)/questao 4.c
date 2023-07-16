/*Questão 04:
Fazer uma função recursiva que, dado um
número inteiro N, exiba o mesmo na base 2
(binária).*/

#include<stdio.h>

void binario(int n);

void main ()
{
	int n;
	
	printf("Digite o valor de n para saber o binario: ");
	scanf("%d", &n);
	
	binario(n);
}

void binario(int n)
{
	if(n!=0)
	{
		binario(n/2);
		printf("%d", n%2);
	}
}
