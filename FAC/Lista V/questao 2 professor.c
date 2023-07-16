/*
	FAETERJ-Rio
	FAC - Turma A - Professor Leonardo Vianna
	Data: 06/10/2022
	
	Lista de Exercícios V:
	
	QUESTÃO 02:
	Desenvolver um programa que calcule a soma dos números de 
	1 a N, sendo N um número inteiro fornecido pelo usuário.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int n, i, soma = 0;
	
	//lendo o valor de n
	printf ("Entre com um numero: ");
	scanf ("%d", &n);
	
	for (i=1;i<=n;i++)
	{
		//soma = soma + i;
		soma += i;
	}
	
	//exibindo a soma
	printf ("\nSoma = %d", soma);
}
