/*QUESTÃO 01:
Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B.*/

#include<stdio.h>

void multiplos (a, b, n)
{
	int i=a;
	
	for(i; i<=b; i++)
	{
		if(i%n==0)
		{
			printf("%d ", i);
		}
	}
}

void main ()
{
	int a, b, n;
	
	printf("Insira o valor do inicio do intervalo: ");
	scanf("%d", &a);
	
	printf("Insira o valor do final do intervalo: ");
	scanf("%d", &b);
	
	printf("Insira o valor do numero multiplo: ");
	scanf("%d", &n);
	
	multiplos(a, b, n);
}
