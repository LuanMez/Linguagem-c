/*
	FAETERJ-Rio
	FAC - Turma A - Professor Leonardo Vianna
	Data: 06/10/2022
	
	Lista de Exerc�cios IV:
	
	QUEST�O 07: Uma determinada empresa fez uma pesquisa de 
	mercado para saber se as pessoas gostaram ou n�o de um 
	novo produto que foi lan�ado. Para cada pessoa entrevistada 
	foram coletados os seguintes dados: g�nero (M ou F) e 
	resposta (G [Gostou] ou N [N�o Gostou]). Sabendo-se que 
	foram entrevistadas X pessoas, fa�a um programa que forne�a:

	a)	N�mero de pessoas que gostaram do produto;
	b)	N�mero de pessoas que n�o gostaram do produto;
	c)	Informa��o dizendo em que g�nero o produto teve uma 
	    melhor aceita��o.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int i, numEntrevistados,
	    contM = 0, contF = 0, contMG = 0, contFG = 0,
		contG, contNG;
	char genero, opiniao;
	float percM, percF;
	
	//obtendo a quantidade de pessoas entrevistadas
	printf ("Quantas pessoas foram entrevistadas? ");
	scanf ("%d", &numEntrevistados);
	
	//obtendo os dados de todos os entrevistados
	for (i=1;i<=numEntrevistados;i++)
	{
		//lendo o genero
		printf ("Genero [M/F]: ");
		fflush (stdin);
		scanf ("%c", &genero);
		genero = toupper (genero);
		
		//lendo a opini�o
		printf ("Opiniao [(G)ostou ou (N)ao gostou]: ");
		fflush (stdin);
		scanf ("%c", &opiniao);
		opiniao = toupper (opiniao);
		
		//verificando op genero
		if (genero == 'M')
		{
			contM++;
			
			//verificando se o homem entrevistado gostou do produto
			if (opiniao == 'G')
			{
				contMG++;
			}
		}
		else
		{
			contF++;
			
			//verificando se a mulher entrevistada gostou do produto
			if (opiniao == 'G')
			{
				contFG++;
			}
		}

	}
	
	//calculando quantas pessoas gostaram do produto
	contG = contMG + contFG;
	
	//calculando quantas pessoas n�o gostaram do produto
	contNG = numEntrevistados - contG; 
	
	//exibindo quantas pessoas gostaram e quantas n�o gostaram
	printf ("\nGostaram do produto: %d\n", contG);
	printf ("\nNao gostaram do produto: %d\n", contNG);
	
	//calculando os percentuais de homens e mulheres que
	//gostaram do produto
	percM = ((float)contMG/contM)*100;
	percF = ((float)contFG/contF)*100;
	
	//verificando em qual g�nero houve melhor aceita��o
	if (percF > percM)
	{
		printf ("\nHouve melhor aceitacao entre as mulheres!");
	}
	else
	{
		if (percM > percF)
		{
			printf ("\nHouve melhor aceitacao entre os homens!");
		}
		else
		{
			printf ("\nHouve a mesma aceitacao entre os generos!");
		}
	}
}
