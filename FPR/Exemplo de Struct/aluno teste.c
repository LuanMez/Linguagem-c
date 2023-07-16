#include<stdio.h>
#include<string.h>
#include<locale.h>

typedef struct{
	int matricula; //camppo
	char genero;
	char nome[50];
	float CR; //campo
}TAluno;//criacaçao do novo tipo


void main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	TAluno aluno; //botei o tipo com o nome agora;
	
	printf("Digite a matricula: ");
	fflush(stdin);
	scanf("%d", &aluno.matricula);
	
	printf("Digite seu genero, M para masculino e F para feminino: ");
	fflush(stdin);
	scanf("%c", &aluno.genero);
	
	printf("Digite seu nome: ");
	fflush(stdin);
	gets(aluno.nome);
	
	printf("Digite seu CR: ");
	fflush(stdin);
	scanf("%f", &aluno.CR);
	
	puts(aluno.nome);
	printf("%d\n", aluno.matricula);
	printf("%c\n", aluno.genero);
	printf("%.2f\n", aluno.CR);
}
