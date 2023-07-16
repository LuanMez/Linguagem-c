/*
	FAETERJ-Rio
	FAC - 2022/2 - Professor Leonardo Vianna
	Data: 08/10/2022 - Aula extra
	
	Lista de Exercícios VI
	
	QUESTÃO 03: Implementar um programa que calcule o valor de base^expoente, onde base 
	e expoente são números inteiros dados pelo usuário.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int base, expoente, i, resultado = 1;
	
	//lendo os dados
	printf ("Base: ");
	scanf ("%d", &base);
	
	printf ("Expoente: ");
	scanf ("%d", &expoente);
	
	//calculando o valor da potência
	for (i=1;i<=expoente;i++)
	{
		//resultado = resultado*base;
		resultado *= base;
	}
	
	//exibindo o resultado
	printf ("\n\n%d elevado a %d = %d", base, expoente, resultado);
}
