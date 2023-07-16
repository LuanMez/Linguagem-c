/*
	FAETERJ-Rio
	FAC - 2022/2 - Professor Leonardo Vianna
	Data: 08/10/2022 - Aula extra
	
	Lista de Exerc�cios VI
	
	QUEST�O 01: Fa�a um programa que leia um n�mero inteiro x e, em seguida, solicite ao usu�rio outros 50 
	valores inteiros. Ao final, o programa deve exibir o total de m�ltiplos de x fornecidos.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define QUANT 5

//main
void main ()
{
	//declara��o de vari�veis
	int i, x, numero, cont = 0;
	
	//lendo o valor de 'x'
	printf ("Entre com o valor de x: ");
	scanf ("%d", &x);
	
	//lendo os QUANT valores inteiros
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%d", &numero);
		
		//verificando se 'numero' � m�ltiplo de 'x'
		if (numero % x == 0)
		{
			cont++;
		}
	}
	
	//exibindo o resultado
	printf ("\n\nForam informados %d multiplos de %d", cont, x);
}
