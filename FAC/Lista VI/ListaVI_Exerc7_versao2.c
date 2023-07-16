/*
	FAETERJ-Rio
	FAC - 2022/2 - Professor Leonardo Vianna
	Data: 08/10/2022 - Aula extra
	
	Lista de Exerc�cios VI
	
	QUEST�O 07: Fa�a um programa que leia 150 n�meros reais e, ao final, exiba:

		a)	A soma dos 50 primeiros;
		b)	menor n�mero do 51� ao 100� valores fornecidos;
		c)	A m�dia entre os �ltimos 50 valores.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <float.h>

//defini��o de constantes
#define QUANT 15

//main
void main ()
{
	//declara��o de vari�veis
	int i;
	float valor, soma50 = 0, menor = FLT_MAX, somaUltimo = 0;
	
	//lendo o primeiro grupo de 50 valores
	for (i=1;i<=QUANT/3;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%f", &valor);
		
		//somando os 50 primeiros valores digitados
		soma50 += valor;
	}
	
	//lendo o segundo grupo de 50 valores
	for (i=1;i<=QUANT/3;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%f", &valor);
		
		//determinando o menor do segundo grupo de 50 valores
		if (valor < menor)
		{
			menor = valor;
		}	
	}
	
	//lendo o terceiro grupo de 50 valores
	for (i=1;i<=QUANT/3;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%f", &valor);
		
		//somando os valores para, em seguida, calcular a m�dia
		somaUltimo += valor;
	}
	
	//exibindo os resultados
	printf ("\n\nSoma dos valores do primeiro grupo: %.1f\n", soma50);
	printf ("Menor elemento do segundo grupo: %.1f\n", menor);
	printf ("Media do terceiro grupo: %.1f\n", somaUltimo/(QUANT/3));
}
