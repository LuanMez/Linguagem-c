/*
	FAETERJ - Rio
	FAC - Turma B
	Data: 05/10/2022
	
	Lista de Exerc�cios V
	
	QUEST�O 07:
	Desenvolver um programa no qual o usu�rio entre com v�rios n�meros inteiros
	e positivos e imprima o produto dos n�meros �mpares e a soma dos n�meros
	pares.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int numero, somaPares = 0, produtoImpares = 1;
	
	do
	{
		//lendo cada um dos valores
		printf ("Entre com um numero positivo (digite 0 para terminar): ");
		scanf ("%d", &numero);
		
		if (numero != 0)
		{
			//verificando se o n�mero � par
			if (numero % 2 == 0)		
			{
				somaPares += numero;
			}
			else
			{
				produtoImpares *= numero;
			}				
		}
	}
	while (numero != 0);
	
	//exibindo os resultados
	printf ("\n\nSoma dos Pares: %d", somaPares);
	printf ("\n\nProduto dos Impares: %d", produtoImpares);
}
