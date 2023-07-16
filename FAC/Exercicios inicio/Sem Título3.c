/*
	FAETERJ - Rio
	FAC - Turma A
	Data: 03/11/2022
	
	Lista de Exercícios X (funções):
	
	QUESTÃO 06:
	Desenvolver uma função que, dado um número inteiro N, calcule o 
	valor do seguinte somatório:

		S= 1+((n-1)^1)/1! + (n-2)^2/2! + (n-3)^3/3! + ... +1^(n-1)/((n-1)!)
*/

//importação de bibliotecas
#include <stdio.h>

//declaração dos protótipos das funções
float somatorio (int n);

int fatorial (int n);
int potencia (int base, int expoente);

//main
void main ()
{
	//declaração de variáveis
	int valor;
	float soma;
	
	//lendo o dado de entrada
	printf ("Entre com um numero inteiro: ");
	scanf ("%d", &valor);
	
	//chamando a função
	soma = somatorio (valor);
	
	//exibindo o resultado
	printf ("\n\nSoma = %.1f", soma);
}

//implementação das funções
float somatorio (int n)
{
	//declaração de variáveis
	float soma = 0;
	int base, expoente;
	
	//calculando o somatório
	for (base=n, expoente=0;base>=1;base--, expoente++)
	{
		soma += (float)potencia(base,expoente) / fatorial (expoente);
	}
	
	//retornando o resultado
	return soma;
}

int fatorial (int n)
{
	//declaração de variáveis
	int i, fat = 1;
	
	//calculando o fatorial
	for (i=2;i<=n;i++)
	{
		fat *= i;
	}
	
	//retornando o resultado
	return fat;
}

int potencia (int base, int expoente)
{
	//declaração de variáveis
	int i, pot = 1;
	
	//calculando a potência
	for (i=1;i<=expoente;i++)
	{
		pot *= base;
	}
	
	//retornando o resultado
	return pot;
}
