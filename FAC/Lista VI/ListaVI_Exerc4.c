/*
	FAETERJ-Rio
	FAC - 2022/2 - Professor Leonardo Vianna
	Data: 08/10/2022 - Aula extra
	
	Lista de Exerc�cios VI
	
	QUEST�O 04: A prefeitura de uma cidade fez uma pesquisa com 300 de seus habitantes, 
	coletando dados sobre o sal�rio e n�mero de filhos. A prefeitura deseja saber: 
	
		a)	m�dia do sal�rio da popula��o; 
		b)	m�dia do n�mero de filhos; 
		c)	maior sal�rio; 
		d)	percentual de pessoas com sal�rio at� R$ 1.000,00. 
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define POPULACAO 5

//main
void main ()
{
	//declara��o de vari�veis
	int i, nFilhos, somaFilhos = 0,
	    cont1000 = 0;
	float salario, somaSalario = 0,
	      mediaSalario, mediaFilhos,
		  maiorSalario = 0, perc1000;	
		
	//lendo os dados das pessoas entrevistadas
	i = 1;
	do
	{
		//obtendo o salario do funcion�rio
		printf ("Salario: ");
		scanf ("%f", &salario);
		
		//obtendo o n�mero de filhos do funcion�rio
		printf ("Numero de filhos: ");
		scanf ("%d", &nFilhos);
		
		//calculando as somas dos sal�rios e dos n�meros de filhos dos entrevistados
		somaFilhos += nFilhos;
		somaSalario += salario;	
		
		//determinando o maior sal�rio
		if (salario > maiorSalario)	
		{
			maiorSalario = salario;
		}
		
		//determinando quantas pessoas possuem sal�rio at� R$ 1.000,00
		if (salario <= 1000)
		{
			cont1000++;
		}
		
		i++;
	}
	while (i <= POPULACAO);
	
	//calculando as m�dias
	mediaFilhos = (float)somaFilhos/POPULACAO;
	mediaSalario = somaSalario/POPULACAO;
	
	//calculando o percentual de pessoas que possuem sal�rio at� R$ 1.000,00
	perc1000 = ((float)cont1000/POPULACAO)*100;
	
	//exibindo os resultados
	printf ("\nMedia de salario: R$ %.2f\n", mediaSalario);
	printf ("Media do numero de filhos: %.1f\n", mediaFilhos);
	printf ("Maior salario: R$ %.2f\n", maiorSalario);
	printf ("Percentual que recebe ate R$ 1000,00: %.2f %%", perc1000);
}
