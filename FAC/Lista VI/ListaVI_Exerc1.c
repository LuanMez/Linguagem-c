/*
	FAETERJ-Rio
	FAC - 2022/2 - Professor Leonardo Vianna
	Data: 08/10/2022 - Aula extra
	
	Lista de Exercícios VI
	
	QUESTÃO 01: Faça um programa que leia um número inteiro x e, em seguida, solicite ao usuário outros 50 
	valores inteiros. Ao final, o programa deve exibir o total de múltiplos de x fornecidos.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define QUANT 5

//main
void main ()
{
	//declaração de variáveis
	int i, x, numero, cont = 0;
	
	//lendo o valor de 'x'
	printf ("Entre com o valor de x: ");
	scanf ("%d", &x);
	
	//lendo os QUANT valores inteiros
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%d", &numero);
		
		//verificando se 'numero' é múltiplo de 'x'
		if (numero % x == 0)
		{
			cont++;
		}
	}
	
	//exibindo o resultado
	printf ("\n\nForam informados %d multiplos de %d", cont, x);
}
