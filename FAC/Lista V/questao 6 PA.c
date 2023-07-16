/*
	FAETERJ-Rio
	FAC - Turma A - Professor Leonardo Vianna
	Data: 06/10/2022
	
	Lista de Exercícios V:
	
	QUESTÃO 06:
	Criar um programa que exiba os N primeiros termos da seguinte 
	série: 

						1,2,8,64,1024,...
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int n, termo, i, razao;
	
	//lendo os dados da PA
	printf ("Quantidade: ");
	scanf ("%d", &n);
	
	//inicializando 'termo' e 'razao'
	termo = 1;
	razao = 2;
	
	i=1;
	do
	{
		//exibindo cada termo da sequência
		printf ("%d ", termo);
		termo *= razao;	
		razao *= 2;	
		
		i++;
	}
	while (i<=n);
}
