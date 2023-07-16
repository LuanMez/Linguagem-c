/*
	FAETERJ-Rio
	FAC - 2022/2 - Professor Leonardo Vianna
	Data: 08/10/2022 - Aula extra
	
	Lista de Exerc�cios VI
	
	QUEST�O 02: Pede-se o desenvolvimento de um programa que leia n valores e determine 
	o maior e o menor elementos do conjunto fornecido.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <limits.h>

//main
void main ()
{
	//declara��o de vari�veis
	//int i, n, maior = -9999, menor = 9999, numero;
	int i, n, maior = INT_MIN, menor = INT_MAX, numero;
	
	//obtendo a quantidade de valores que ser�o fornecidos
	printf ("Entre com a quantidade de valores: ");
	scanf ("%d", &n);
	
	//obtendo os 'n' valores
	i = 1;
	while (i <= n)
	{
		//lendo cada um dos 'n' valores
		printf ("Entre com um numero: ");
		scanf ("%d", &numero);
		
		//verificando se 'numero' � o maior de todos
		if (numero > maior)
		{
			maior = numero;
		}
		
		//verificando se 'numero' � o menor de todos
		if (numero < menor)
		{
			menor = numero;
		}
				
		i++;
	}
	
	//exibindo os resultados
	printf ("\n\nMaior: %d\nMenor: %d", maior, menor);
}
