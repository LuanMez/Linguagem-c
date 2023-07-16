#include <stdio.h>

/*QUESTÃO 01: Faça um programa que leia um
número inteiro positivo N e exiba todos os
múltiplos de Y inferiores a N, onde N e Y são
fornecidos pelo usuário.*/

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
		if (i%n == 0) //verificando se i é multiplo de n
		{
			printf ("%d ", i);
		}
	}
	
}
