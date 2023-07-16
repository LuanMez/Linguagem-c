#include <stdio.h>

/*QUESTÃO 02:
Desenvolver um programa que calcule a
soma dos números de 1 a N, sendo N um
número inteiro fornecido pelo usuário.*/

void main ()
{
	int i, n;
	
	printf("escolha um numero inteiro: ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i++);
	{
		i=i+i;
		printf ("%d ", i);
	}
	
	
}
