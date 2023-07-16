/*
	FAETERJ-Rio
	FAC - 2022/2 - Professor Leonardo Vianna
	Data: 08/10/2022 - Aula extra
	
	Lista de Exercícios VI
	
	QUESTÃO 07: Faça um programa que leia 150 números reais e, ao final, exiba:

		a)	A soma dos 50 primeiros;
		b)	menor número do 51° ao 100° valores fornecidos;
		c)	A média entre os últimos 50 valores.
*/

//importação de bibliotecas
#include <stdio.h>
#include <float.h>

//definição de constantes
#define QUANT 15

//main
void main ()
{
	//declaração de variáveis
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
		
		//somando os valores para, em seguida, calcular a média
		somaUltimo += valor;
	}
	
	//exibindo os resultados
	printf ("\n\nSoma dos valores do primeiro grupo: %.1f\n", soma50);
	printf ("Menor elemento do segundo grupo: %.1f\n", menor);
	printf ("Media do terceiro grupo: %.1f\n", somaUltimo/(QUANT/3));
}
