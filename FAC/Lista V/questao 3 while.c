/*
	FAETERJ-Rio
	FAC - Turma A - Professor Leonardo Vianna
	Data: 06/10/2022
	
	Lista de Exerc�cios V:
	
	QUEST�O 03:
	Fazer um programa que exiba todos os divisores de um n�mero 
	fornecido pelo usu�rio. 
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int i, n;
	
	//lendo o valor de 'n'
	printf ("Entre com um numero: ");
	scanf ("%d", &n);
	
	//variando os n�meros de 1 a n
	i=1;
	while (i<=n)
	{
		//verificando se 'i' � divisor de 'n'
		if (n % i == 0)
		{
			printf ("%d ", i);
		}
		
		i++;
	}
}
