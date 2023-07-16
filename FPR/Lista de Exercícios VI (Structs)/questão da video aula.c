#include<stdio.h>
#include<string.h>

#define TAM 5

typedef struct{
	char nome[50];
	float AV1, AV2, media;
	char situacao[20];
}TAluno;

void lerdados(TAluno aluno[], int tamanho)
{
	int i;
	
	for(i=0;i<tamanho;i++)
	{
		printf("Digite seu nome aluno: ");
		fflush(stdin);
		gets(aluno[i].nome);
		
		printf("Digite a nota da sua av1: ");
		fflush(stdin);
		scanf("%f", &aluno[i].AV1);
		
		printf("Digite a nota da sua av2: ");
		fflush(stdin);
		scanf("%f", &aluno[i].AV2);
	}
}

void calculoMedia(TAluno aluno[], int tamanho)
{
	int i;
	
	for(i=0;i<tamanho;i++)
	{
		aluno[i].media=(aluno[i].AV1+aluno[i].AV2)/2;
		
		if(aluno[i].media>=6)
		{
			strcpy(aluno[i].situacao,"aprovado");
		}
		else
		{
			if(aluno[i].media<6 && aluno[i].media>=4)
			{
				strcpy(aluno[i].situacao,"AVF");
			}
			else
			{
				strcpy(aluno[i].situacao,"reprovado");
			}
		}
	}
}

void exibir(TAluno aluno[], int tamanho, int num)
{
	int i, apa=0;
	
	for(i=0;i<tamanho;i++)
	{
		if((num==1) && (strcmp(aluno[i].situacao, "aprovado")==0))
		{
			if(apa==0)
			{
				printf("Aprovados:\n");
				apa++;
			}
			printf("Nome: %s\nAv1: %.1f\nAv2: %.1f\nMedia: %.1f\nSituacao: %s\n\n", aluno[i].nome, aluno[i].AV1, aluno[i].AV2, aluno[i].media, aluno[i].situacao);
		}
		else
		{
			
			if((num==2) && (strcmp(aluno[i].situacao, "reprovado")==0))
			{
				if(apa==0)
				{
					printf("Reprovados:\n");
					apa++;
				}
				printf("Nome: %s\nAv1: %.1f\nAv2: %.1f\nMedia: %.1f\nSituacao: %s\n\n", aluno[i].nome, aluno[i].AV1, aluno[i].AV2, aluno[i].media, aluno[i].situacao);
			}
			else
			{
				if((num==3) && (strcmp(aluno[i].situacao, "AVF")==0))
				{
					if(apa==0)
					{
						printf("Direito a AVF:\n");
						apa++;
					}
					printf("Nome: %s\nAv1: %.1f\nAv2: %.1f\nMedia: %.1f\nSituacao: %s\n\n", aluno[i].nome, aluno[i].AV1, aluno[i].AV2, aluno[i].media, aluno[i].situacao);
				}
			}
		}
	}
}

void main ()
{
	TAluno aluno [TAM];
	int num;
	
	lerdados(aluno, TAM);
	
	calculoMedia(aluno, TAM);
	
	printf("Digite para saber quantos alunos estao 1-aprovado, 2-reprovado, 3-AVF: ");
	fflush(stdin);
	scanf("%d", &num);
	
	exibir(aluno, TAM, num);
	
	
}
