/*
	FAETERJ-Rio
	FAC - 2022/2 - Professor Leonardo Vianna
	Data: 08/10/2022 - Aula extra
	
	Lista de Exerc�cios VI
	
	QUEST�O 03: Implementar um programa que calcule o valor de base^expoente, onde base 
	e expoente s�o n�meros inteiros dados pelo usu�rio.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int base, expoente, i, resultado = 1;
	
	//lendo os dados
	printf ("Base: ");
	scanf ("%d", &base);
	
	printf ("Expoente: ");
	scanf ("%d", &expoente);
	
	//calculando o valor da pot�ncia
	for (i=1;i<=expoente;i++)
	{
		//resultado = resultado*base;
		resultado *= base;
	}
	
	//exibindo o resultado
	printf ("\n\n%d elevado a %d = %d", base, expoente, resultado);
}
