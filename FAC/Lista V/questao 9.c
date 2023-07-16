/*
	FAETERJ - Rio
	FAC - Turma B
	Data: 05/10/2022
	
	Lista de Exerc�cios V
	
	QUEST�O 09:
	Escrever um programa que encontre o quinto n�mero maior que 1000, cuja
	divis�o por 11 tenha resto 5.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
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
