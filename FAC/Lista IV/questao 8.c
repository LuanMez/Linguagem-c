#include<stdio.h>


/*QUEST�O 08: Em uma empresa deseja-se
fazer um levantamento sobre algumas
informa��es dos seus 250 funcion�rios. Cada
funcion�rio dever� responder um
question�rio ao qual informar� os seguintes
dados: matr�cula, g�nero, idade, sal�rio e
tempo (em anos) de trabalho na empresa. A
execu��o do programa deve exibir os
seguintes itens:
a) Quantidade de funcion�rios que
ingressaram na empresa com menos
de 21 anos;
b) Quantidade de funcion�rios do
g�nero feminino;
c) M�dia salarial dos homens;
d) Matr�cula dos funcion�rios mais
antigo e mais novo.*/

void main ()
{
	int totalpessoas, matricula, idade, tempo, i;
	int quantmenores=0, feminino=0, masculino=0, salarioM=0, tempomax=0, tempomin=100, salariomas, matriculaan=0, matriculano=0;
	char genero;
	float salario;
	
	printf("quantas pessoas serao entrevistadas?");
	scanf("%d", &totalpessoas);
	
	for(i=1; i<=totalpessoas; i++)
	{
		printf("qual a sua Matricula?\n");
		scanf("%d", &matricula);
		
		printf("qual a seu genero [F] ou [M]?\n");
		fflush (stdin);
		scanf("%c", &genero);
		genero = toupper (genero);
		
		printf("qual a sua idade?\n");
		scanf("%d", &idade);
		
		printf("qual o seu salario?\n");
		scanf("%f", &salario);
		
		printf("qual o seu tempo trabalhando?\n");
		scanf("%d", &tempo);
		
		if (idade-tempo<21)
		{
			quantmenores++;
		}
		if (genero=='F')
		{
			feminino++;
		}
		if (genero=='M')
		{
			masculino++;
			salarioM = salario + salarioM;
		}
		if (tempo>tempomax)
		{
			tempomax = tempo;
			matriculaan = matricula;
			
		}
			if (tempo<tempomin)
			{
				matriculano = matricula;
				tempomin = tempo;
			}
			
		}
	
	//calculo salario masculino
	salariomas = salarioM/masculino;
	
	printf ("funcionarios que entraram com menos de 21 e' %d\n", quantmenores);
	printf ("quantidade de funcionarias feminina e' %d\n", feminino);
	printf ("Valor do salario masculino e' %d\n", salariomas);
	printf ("funcionario mais antigo %d\n", matriculaan);
	printf ("funcionario mais novo %d\n", matriculano);
	
}
