#include <stdio.h>

/*QUEST�O 02:
Desenvolver um programa que calcule a
soma dos n�meros de 1 a N, sendo N um
n�mero inteiro fornecido pelo usu�rio.*/

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
