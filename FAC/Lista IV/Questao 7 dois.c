/*
	FAETERJ-Rio
	FAC - Turma A - Professor Leonardo Vianna
	Data: 06/10/2022
	
	Lista de Exercícios IV:
	
	QUESTÃO 07: Uma determinada empresa fez uma pesquisa de 
	mercado para saber se as pessoas gostaram ou não de um 
	novo produto que foi lançado. Para cada pessoa entrevistada 
	foram coletados os seguintes dados: gênero (M ou F) e 
	resposta (G [Gostou] ou N [Não Gostou]). Sabendo-se que 
	foram entrevistadas X pessoas, faça um programa que forneça:

	a)	Número de pessoas que gostaram do produto;
	b)	Número de pessoas que não gostaram do produto;
	c)	Informação dizendo em que gênero o produto teve uma 
	    melhor aceitação.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
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
		
		//lendo a opinião
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
	
	//calculando quantas pessoas não gostaram do produto
	contNG = numEntrevistados - contG; 
	
	//exibindo quantas pessoas gostaram e quantas não gostaram
	printf ("\nGostaram do produto: %d\n", contG);
	printf ("\nNao gostaram do produto: %d\n", contNG);
	
	//calculando os percentuais de homens e mulheres que
	//gostaram do produto
	percM = ((float)contMG/contM)*100;
	percF = ((float)contFG/contF)*100;
	
	//verificando em qual gênero houve melhor aceitação
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
