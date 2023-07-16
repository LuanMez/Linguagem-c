#include<stdio.h>


/*QUESTÃO 08: Em uma empresa deseja-se
fazer um levantamento sobre algumas
informações dos seus 250 funcionários. Cada
funcionário deverá responder um
questionário ao qual informará os seguintes
dados: matrícula, gênero, idade, salário e
tempo (em anos) de trabalho na empresa. A
execução do programa deve exibir os
seguintes itens:
a) Quantidade de funcionários que
ingressaram na empresa com menos
de 21 anos;
b) Quantidade de funcionários do
gênero feminino;
c) Média salarial dos homens;
d) Matrícula dos funcionários mais
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
