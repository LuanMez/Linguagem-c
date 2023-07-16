/*Questão 03:
Determinada instituição de ensino armazena,
sob a forma de vetores (de structs), as
seguintes informações:
? Alunos: nome, matrícula;
? Disciplinas do curso: nome, código;
? Inscrições realizadas: matrícula do aluno,
código da disciplina, semestre da inscrição
(semestre/ano).
Pede-se o desenvolvimento de funções que
realizem as seguintes operações:
i. Exibir, para cada aluno, o total de inscrições
já realizadas;
ii. Dado um semestre, informar para cada
disciplina o número de alunos inscritos.*/

#include<stdio.h>
#include<string.h>

#define TAM 5

typedef struct{
	int semestre;
	int ano;
}Tsemestre;

typedef struct{
	char nome[50];
	int matricula;
}TAluno;

typedef struct{
	char nomecurso[30];
	int codigo;
}TDisciplina;

typedef struct{
	TAluno mat;
	TDisciplina cod;
	Tsemestre inscricao;	
}TInscricoes;

void preencher(TInscricoes inst[],int tamanho)
{
	int i;
	
	for(i=0; i<tamanho; i++)
	{
		printf("Digite nome Aluno: ");
		fflush(stdin);
		gets(inst[i].mat.nome);
		
		printf("Digite o numero damatricula: ");
		fflush(stdin);
		scanf("%d", &inst[i].mat.matricula);
		
		printf("Digite o nome do curso: ");
		fflush(stdin);
		gets(inst[i].cod.nomecurso);
		
		printf("Digite o numero do codigo: ");
		fflush(stdin);
		scanf("%d", &inst[i].cod.codigo);
		
		printf("Digite o numero do semestre: ");
		fflush(stdin);
		scanf("%d", &inst[i].inscricao.semestre);
		
		printf("Digite o ano: ");
		fflush(stdin);
		scanf("%d", &inst[i].inscricao.ano);
		printf("\n");
	}
}

void exibirAluno(TInscricoes inst[], int tamanho)
{
	int i, j, cont=1;
	char nome2[50];
	
	for(i=0; i<tamanho; i++)
	{
		for(j=tamanho-1; j>i; j--)
		{
			if(strcmp(inst[i].mat.nome,inst[j].mat.nome)==0)
			{
				cont++;
			}
		}
		if(strcmp(nome2,inst[i].mat.nome)!=0)
		{
			printf("\n");
			puts(inst[i].mat.nome);
			printf("quantidade de materias %d", cont);
			cont=1;
			strcpy(nome2,inst[i].mat.nome);
		}
	}
}

void quantAluno(TInscricoes inst[],int tamanho,int sem)
{
	int i, j, nunAluno=0;
	
	for(i=0; i<tamanho; i++)
	{
		for(j=tamanho-1; j>i; j--)
		{
			if((inst[i].inscricao.semestre==sem) && (inst[j].inscricao.semestre==sem) && strcmp(inst[i].cod.nomecurso,inst[j].cod.nomecurso)==0)
			{
				
				nunAluno++;
			}
		}
		if(nunAluno!=0)
		{
			printf("%d inscritos na materia:\n", nunAluno);
			puts(inst[i].cod.nomecurso);
			nunAluno=0;
		}
	}
}
void main ()
{
	TInscricoes inst [TAM];
	int sem;
	
	preencher(inst,TAM);
	
	exibirAluno(inst,TAM);
	
	printf("\nQual semestre deseja saber a quantidade de aluno por materia: ");
	fflush(stdin);
	scanf("%d", &sem);
	
	quantAluno(inst,TAM,sem);
	
	
}
