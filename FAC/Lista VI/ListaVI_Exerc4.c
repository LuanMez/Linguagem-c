/*
	FAETERJ-Rio
	FAC - 2022/2 - Professor Leonardo Vianna
	Data: 08/10/2022 - Aula extra
	
	Lista de Exercícios VI
	
	QUESTÃO 04: A prefeitura de uma cidade fez uma pesquisa com 300 de seus habitantes, 
	coletando dados sobre o salário e número de filhos. A prefeitura deseja saber: 
	
		a)	média do salário da população; 
		b)	média do número de filhos; 
		c)	maior salário; 
		d)	percentual de pessoas com salário até R$ 1.000,00. 
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define POPULACAO 5

//main
void main ()
{
	//declaração de variáveis
	int i, nFilhos, somaFilhos = 0,
	    cont1000 = 0;
	float salario, somaSalario = 0,
	      mediaSalario, mediaFilhos,
		  maiorSalario = 0, perc1000;	
		
	//lendo os dados das pessoas entrevistadas
	i = 1;
	do
	{
		//obtendo o salario do funcionário
		printf ("Salario: ");
		scanf ("%f", &salario);
		
		//obtendo o número de filhos do funcionário
		printf ("Numero de filhos: ");
		scanf ("%d", &nFilhos);
		
		//calculando as somas dos salários e dos números de filhos dos entrevistados
		somaFilhos += nFilhos;
		somaSalario += salario;	
		
		//determinando o maior salário
		if (salario > maiorSalario)	
		{
			maiorSalario = salario;
		}
		
		//determinando quantas pessoas possuem salário até R$ 1.000,00
		if (salario <= 1000)
		{
			cont1000++;
		}
		
		i++;
	}
	while (i <= POPULACAO);
	
	//calculando as médias
	mediaFilhos = (float)somaFilhos/POPULACAO;
	mediaSalario = somaSalario/POPULACAO;
	
	//calculando o percentual de pessoas que possuem salário até R$ 1.000,00
	perc1000 = ((float)cont1000/POPULACAO)*100;
	
	//exibindo os resultados
	printf ("\nMedia de salario: R$ %.2f\n", mediaSalario);
	printf ("Media do numero de filhos: %.1f\n", mediaFilhos);
	printf ("Maior salario: R$ %.2f\n", maiorSalario);
	printf ("Percentual que recebe ate R$ 1000,00: %.2f %%", perc1000);
}
