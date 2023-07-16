/*
	FAETERJ - Rio
	FAC - Turma B
	Data: 05/10/2022
	
	Lista de Exercícios V
	
	QUESTÃO 09:
	Escrever um programa que encontre o quinto número maior que 1000, cuja
	divisão por 11 tenha resto 5.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int numero = 1000, cont = 0;
	
	while (cont != 5)
	{
		//atualizando o numero
		numero++;
		
		//verificando se o numero atende ao especificado
		if (numero % 11 == 5)
		{
			cont++;
		}		
	}
	
	printf ("\nResposta: %d", numero);
}
