/*
	FAETERJ-Rio
	FAC - Turma A - Professor Leonardo Vianna
	Data: 06/10/2022
	
	Lista de Exerc�cios V:
	
	QUEST�O 06:
	Criar um programa que exiba os N primeiros termos da seguinte 
	s�rie: 

						1,2,8,64,1024,...
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
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
		//exibindo cada termo da sequ�ncia
		printf ("%d ", termo);
		termo *= razao;	
		razao *= 2;	
		
		i++;
	}
	while (i<=n);
}
