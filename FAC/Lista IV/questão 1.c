#include <stdio.h>

/*QUEST�O 01: Fa�a um programa que leia um
n�mero inteiro positivo N e exiba todos os
m�ltiplos de Y inferiores a N, onde N e Y s�o
fornecidos pelo usu�rio.*/

void main ()
{
	//declaracao das variaveis
	int n, i, limite;
	
	//leitura das variaveis
	printf("escolha um numero inteiro positivo:");
	scanf("%d", &n);
	
	printf("escolha um limite:");
	scanf("%d", &limite);
	
	for (i=0; i<limite; i++)
	{
		if (i%n == 0) //verificando se i � multiplo de n
		{
			printf ("%d ", i);
		}
	}
	
}
