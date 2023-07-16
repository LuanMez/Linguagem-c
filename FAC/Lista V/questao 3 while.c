/*
	FAETERJ-Rio
	FAC - Turma A - Professor Leonardo Vianna
	Data: 06/10/2022
	
	Lista de Exercícios V:
	
	QUESTÃO 03:
	Fazer um programa que exiba todos os divisores de um número 
	fornecido pelo usuário. 
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int i, n;
	
	//lendo o valor de 'n'
	printf ("Entre com um numero: ");
	scanf ("%d", &n);
	
	//variando os números de 1 a n
	i=1;
	while (i<=n)
	{
		//verificando se 'i' é divisor de 'n'
		if (n % i == 0)
		{
			printf ("%d ", i);
		}
		
		i++;
	}
}
