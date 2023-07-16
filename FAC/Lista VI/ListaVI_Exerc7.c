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
#define QUANT 10

//main
void main ()
{
	//declaração de variáveis
	int i;
	float valor, soma50 = 0, menor = FLT_MAX, somaUltimo = 0;
	
	//lendo os 150 valores
	for (i=1;i<=150;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%f", &valor);
		
		//verificando se está no primeiro grupo de 50 valores
		if (i <= 50)
		{
			//somando os 50 primeiros valores digitados
			soma50 += valor;
		}
		else
		{
			//verificando se está no segundo grupo de 50 valores
			//if ((i>=51) && (i<=100))
			if (i<=100)
			{
				//determinando o menor do segundo grupo de 50 valores
				if (valor < menor)
				{
					menor = valor;
				}
			}
			else
			{
				//se chegou aqui, está no terceiro bloco de 50 valores
				somaUltimo += valor;
			}
		}
	}
	
	//exibindo os resultados
	printf ("\n\nSoma dos valores do primeiro grupo: %.1f\n", soma50);
	printf ("Menor elemento do segundo grupo: %.1f\n", menor);
	printf ("Media do terceiro grupo: %.1f\n", somaUltimo/50);
}
