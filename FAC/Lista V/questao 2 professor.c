/*
	FAETERJ-Rio
	FAC - Turma A - Professor Leonardo Vianna
	Data: 06/10/2022
	
	Lista de Exerc�cios V:
	
	QUEST�O 02:
	Desenvolver um programa que calcule a soma dos n�meros de 
	1 a N, sendo N um n�mero inteiro fornecido pelo usu�rio.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
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
