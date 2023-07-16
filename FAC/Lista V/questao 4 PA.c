/*
	FAETERJ-Rio
	FAC - Turma A - Professor Leonardo Vianna
	Data: 06/10/2022
	
	Lista de Exercícios V:
	
	QUESTÃO 04:
	Implementar um programa que exiba os N primeiros termos de 
	uma PA (Progressão Aritmética) com primeiro termo a1 e 
	razão r. 
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int n, r, a1, i, termo;
	
	//lendo os dados da PA
	printf ("Quantidade: ");
	scanf ("%d", &n);
	
	printf ("Primeiro termo: ");
	scanf ("%d", &a1);
	
	printf ("Razao: ");
	scanf ("%d", &r);
	
	//inicializando 'termo' com o valor de a1, o primeiro termo
	termo = a1;
	
	i=1;
	while (i <= n)
	{
		//exibindo cada termo da PA
		printf ("%d ", termo);
		
		//atualizando 'termo'
		termo += r;
				
		i++;
	}
}
