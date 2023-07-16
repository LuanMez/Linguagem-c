/*
	FAETERJ-Rio
	FAC - 2022/2 - Professor Leonardo Vianna
	Data: 08/10/2022 - Aula extra
	
	Lista de Exercícios VI
	
	QUESTÃO 06: Faça um programa que leia 200 números inteiros. Ao final, exibir:

		a)	O maior número fornecido, de ordem par (isto é, o maior dentre o segundo, 
		    quarto, sexto, oitavo, etc valores fornecidos).
		b)	A média dos valores pares.
		
		Exemplo:
		
					valores		1	8	5	9	5	7	4	1	6	3
					ordem		1	2	3	4	5	6	7	8	9	10
*/

//importação de bibliotecas
#include <stdio.h>
#include <limits.h>

//definição de constantes
#define QUANT 10

//main
void main ()
{
	//declaração de variáveis
	int i, valor, maior = INT_MIN, somaPares = 0, contPares = 0;
	float mediaPares;
	
	//lendo os QUANT valores
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com um %do. valor: ", i);
		scanf ("%d", &valor);
		
		//item a
		
		/*//verificando se a ordem é par
		if (i%2 == 0)  
		{
			//verificando se é o maior valor de ordem par
			if (valor > maior)
			{
				maior = valor;
			}
		}*/
		
		if ((i%2 == 0) && (valor > maior))
		{
			maior = valor;
		}
		
		//item b
		if (valor%2 == 0) //verificando se o valor digitado é par
		{
			somaPares += valor;
			contPares++;
		}
	}
	
	//calculando a média dos pares
	mediaPares = (float)somaPares/contPares;
	
	//exibindo os resultados
	printf ("\n\nMaior valor de ordem par: %d\n", maior);
	printf ("Media dos pares: %.2f", mediaPares);
}
