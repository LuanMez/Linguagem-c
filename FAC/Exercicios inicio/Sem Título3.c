/*
	FAETERJ - Rio
	FAC - Turma A
	Data: 03/11/2022
	
	Lista de Exerc�cios X (fun��es):
	
	QUEST�O 06:
	Desenvolver uma fun��o que, dado um n�mero inteiro N, calcule o 
	valor do seguinte somat�rio:

		S= 1+((n-1)^1)/1! + (n-2)^2/2! + (n-3)^3/3! + ... +1^(n-1)/((n-1)!)
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o dos prot�tipos das fun��es
float somatorio (int n);

int fatorial (int n);
int potencia (int base, int expoente);

//main
void main ()
{
	//declara��o de vari�veis
	int valor;
	float soma;
	
	//lendo o dado de entrada
	printf ("Entre com um numero inteiro: ");
	scanf ("%d", &valor);
	
	//chamando a fun��o
	soma = somatorio (valor);
	
	//exibindo o resultado
	printf ("\n\nSoma = %.1f", soma);
}

//implementa��o das fun��es
float somatorio (int n)
{
	//declara��o de vari�veis
	float soma = 0;
	int base, expoente;
	
	//calculando o somat�rio
	for (base=n, expoente=0;base>=1;base--, expoente++)
	{
		soma += (float)potencia(base,expoente) / fatorial (expoente);
	}
	
	//retornando o resultado
	return soma;
}

int fatorial (int n)
{
	//declara��o de vari�veis
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
	//declara��o de vari�veis
	int i, pot = 1;
	
	//calculando a pot�ncia
	for (i=1;i<=expoente;i++)
	{
		pot *= base;
	}
	
	//retornando o resultado
	return pot;
}
