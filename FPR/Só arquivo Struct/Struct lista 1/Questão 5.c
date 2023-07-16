/*Quest�o 05:
O hist�rico de um aluno � representado por um
vetor de structs onde cada posi��o armazena o
c�digo da disciplina cursada, semestre e ano
que a cumpriu e a m�dia final na disciplina.
Implementar uma fun��o que exiba o hist�rico
do aluno com o seguinte formato:
NomeDisciplina1 (c�digo1) M�diaDisciplina1
NomeDisciplina2 (c�digo2) M�diaDisciplina2

NomeDisciplinaN (c�digoN) M�diaDisciplinaN
Coeficiente de rendimento: CR
Observa��es:
1. Para obter os dados da disciplina, um outro
vetor de structs deve ser consultado. Este,
por sua vez, armazena para cada disciplina
do curso as seguintes informa��es: c�digo,
nome e n�mero de cr�ditos;
2. O coeficiente de rendimento consiste em
uma m�dia ponderada de todos os graus
atribu�dos �s disciplinas cursadas, onde os
pesos s�o representados pelo n�mero de
cr�ditos da disciplina;
3. Todos os dados em negrito apresentados no
formato do hist�rico devem ser obtidos a
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

//prototipos das fun��es
void preencherDisciplina(TDisciplina disciplina[], int tamanho);
void preencherHistorico(THistorico historico[], int tamanho);
void exibir(TDisciplina disciplina[], int tamanho, THistorico historico[], int tamanho2);

//main
void main ()
{
	//declara��o das variaveis
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
