/*
	FAETERJ-Rio
	FAC - 2022/2 - Professor Leonardo Vianna
	Data: 08/10/2022 - Aula extra
	
	Lista de Exerc�cios VI
	
	QUEST�O 06: Fa�a um programa que leia 200 n�meros inteiros. Ao final, exibir:

		a)	O maior n�mero fornecido, de ordem par (isto �, o maior dentre o segundo, 
		    quarto, sexto, oitavo, etc valores fornecidos).
		b)	A m�dia dos valores pares.
		
		Exemplo:
		
					valores		1	8	5	9	5	7	4	1	6	3
					ordem		1	2	3	4	5	6	7	8	9	10
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <limits.h>

//defini��o de constantes
#define QUANT 10

//main
void main ()
{
	//declara��o de vari�veis
	int i, valor, maior = INT_MIN, somaPares = 0, contPares = 0;
	float mediaPares;
	
	//lendo os QUANT valores
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com um %do. valor: ", i);
		scanf ("%d", &valor);
		
		//item a
		
		/*//verificando se a ordem � par
		if (i%2 == 0)  
		{
			//verificando se � o maior valor de ordem par
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
		if (valor%2 == 0) //verificando se o valor digitado � par
		{
			somaPares += valor;
			contPares++;
		}
	}
	
	//calculando a m�dia dos pares
	mediaPares = (float)somaPares/contPares;
	
	//exibindo os resultados
	printf ("\n\nMaior valor de ordem par: %d\n", maior);
	printf ("Media dos pares: %.2f", mediaPares);
}
