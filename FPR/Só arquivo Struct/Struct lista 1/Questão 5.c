/*Questão 05:
O histórico de um aluno é representado por um
vetor de structs onde cada posição armazena o
código da disciplina cursada, semestre e ano
que a cumpriu e a média final na disciplina.
Implementar uma função que exiba o histórico
do aluno com o seguinte formato:
NomeDisciplina1 (código1) MédiaDisciplina1
NomeDisciplina2 (código2) MédiaDisciplina2

NomeDisciplinaN (códigoN) MédiaDisciplinaN
Coeficiente de rendimento: CR
Observações:
1. Para obter os dados da disciplina, um outro
vetor de structs deve ser consultado. Este,
por sua vez, armazena para cada disciplina
do curso as seguintes informações: código,
nome e número de créditos;
2. O coeficiente de rendimento consiste em
uma média ponderada de todos os graus
atribuídos às disciplinas cursadas, onde os
pesos são representados pelo número de
créditos da disciplina;
3. Todos os dados em negrito apresentados no
formato do histórico devem ser obtidos a
partir dos vetores.
*/

#include<stdio.h>
#include<string.h>

#define TAM 5
#define TAMM 5

typedef struct{
	int semestre;
	int ano;
	
}TSemeAno;

typedef struct{
	char codigo[5];
	TSemeAno semeAno;
	float mediaFinal;
}THistorico;

typedef struct{
	char codigo[5];
	char nome[30];
	int numCredito;
}TDisciplina;

//prototipos das funções
void preencherDisciplina(TDisciplina disciplina[], int tamanho);
void preencherHistorico(THistorico historico[], int tamanho);
void exibir(TDisciplina disciplina[], int tamanho, THistorico historico[], int tamanho2);

//main
void main ()
{
	//declaração das variaveis
	TDisciplina disciplina[TAMM];
	THistorico historico[TAM];
	
	preencherDisciplina(disciplina, TAMM);
	preencherHistorico(historico, TAM);
	
	exibir(disciplina, TAMM, historico, TAM);
}

void preencherDisciplina(TDisciplina disciplina[], int tamanho)
{
	int i;
	
	for(i=0; i<tamanho; i++)    
	{
		printf("Digite o codigo da disciplina: ");
		fflush(stdin);
		gets(disciplina[i].codigo);
		
		printf("Digite o nome da disciplina: ");
		fflush(stdin);
		gets(disciplina[i].nome);
		
		printf("Digite o credito da disciplina: ");
		fflush(stdin);
		scanf("%d", &disciplina[i].numCredito);
	}
}

void preencherHistorico(THistorico historico[], int tamanho)
{
	int i;
	
	for(i=0; i<tamanho; i++)    
	{
		printf("Digite o codigo da disciplina: ");
		fflush(stdin);
		gets(historico[i].codigo);
		
		printf("Digite o semestre/ano: ");
		fflush(stdin);
		scanf("%d %d", &historico[i].semeAno.semestre, &historico[i].semeAno.ano);
		
		printf("Digite a media final: ");
		fflush(stdin);
		scanf("%f", &historico[i].mediaFinal);
	}
}

void exibir(TDisciplina disciplina[], int tamanho, THistorico historico[], int tamanho2)
{
	int i, j;
	float CR=0;
	
	for(i=0; i<tamanho2; i++)
	{
		for(j=0; j<tamanho; j++)
		{
			if(strcmp(disciplina[j].codigo, historico[i].codigo)==0)
			{
				printf("%s (%s) %.1f\n", disciplina[j].nome, disciplina[j].codigo, historico[i].mediaFinal);
				
				CR=CR+(historico[i].mediaFinal*disciplina[j].numCredito);
			}
		}
	}
	CR/=tamanho;
	printf("Coeficiente de rendimento: %.1f", CR);
}
