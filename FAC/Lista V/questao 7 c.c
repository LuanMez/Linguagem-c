/*
	FAETERJ - Rio
	FAC - Turma B
	Data: 05/10/2022
	
	Lista de Exercícios V
	
	QUESTÃO 07:
	Desenvolver um programa no qual o usuário entre com vários números inteiros
	e positivos e imprima o produto dos números ímpares e a soma dos números
	pares.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int numero, somaPares = 0, produtoImpares = 1;
	char opcao;

	do
	{
		do
		{
			//lendo cada um dos valores
			printf ("Entre com um numero positivo: ");
			scanf ("%d", &numero);
		
			//verificando se o número é válido. Se não for, outro será solicitado!
			if (numero <= 0)
			{
				printf ("\tERRO: o valor deve ser positivo! Tente novamente.\n\n");
			}
		} 
		while (numero <= 0);
		
		//verificando se o número é par
		if (numero % 2 == 0)		
		{
			somaPares += numero;
		}
		else
		{
			produtoImpares *= numero;
		}
		
		//verificando se o usuário fornecerá mais valores
		printf ("\n\nDeseja continuar [S/N]? ");
		fflush (stdin);
		scanf ("%c", &opcao);
		opcao = toupper (opcao);		
	}
	while (opcao == 'S');
	
	//exibindo os resultados
	printf ("\n\nSoma dos Pares: %d", somaPares);
	printf ("\n\nProduto dos Impares: %d", produtoImpares);
}
