/*
	FAETERJ-Rio
	FPR - Fundamentos de Programação - Manhã
	Professor Leonardo Vianna
	
	Prova a compor a AV1 (Parte II) - 11/05/2023
	
	Questão 04 [2,5 pontos]:
	Considerando a existência de um vetor, onde cada posição armazena 
	os seguintes dados: nome do aluno, código da disciplina, nota na 
	AV1 e nota na AV2, pede-se o desenvolvimento de uma função que, 
	dado um vetor nos moldes do descrito, crie (e retorne) um outro 
	vetor com os seguintes dados em cada posição: código da disciplina, 
	status (Aprovado, Reprovado ou Em AVF) e a quantidade de alunos 
	nesta situação.

	Exemplo: 

	JOAO	PEDRO	MARIA	ANA	CARLOS	PAULO	KATIA	SILVIA	GLORIA	ANTONIO	
	FAC		ESD		FPR		FAC	FAC		FPR		ESD		FAC		FPR		ESD
	10,0	6,0		10,0	8,0	7,0		5,0		5,0		2,0		4,0		3,0
	8,0		7,0		5,0		3,0	7,0		2,0		9,0		4,0		1,0		4,0


	FAC			ESD			FPR			FAC		FPR			FAC			ESD
	aprovado	aprovado	aprovado	em AVF	reprovado	reprovado	reprovado
	2			2			1			1			2		1			1
*/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

//definição de tipos
typedef struct{
	char nome[30];
	char codigo[3];
	float av1;
	float av2;
}TAluno;
	
typedef struct{
	char codigo[3];
	char status[30];
	int quantidade;
}TDisciplina;

//protótipos das funções
void inicializarAlunos (TAluno alunos[], int tamanho);
void preenchervetor(TAluno vetorAlunos[], int tamanAluno, TDisciplina vetDisciplinas[], int tamanDisciplina, int *quantDisciplinas);
void exibirDisciplinas (TDisciplina vetDisciplinas[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	TAluno vetorAlunos[10];
	TDisciplina vetDisciplinas[10];	 
	int quantDisciplinas; //tamanho do vetor
		 
	//inicializando o vetor de alunos
	inicializarAlunos (vetorAlunos, 10);
	
	//chamando a função e retornando o vetor vetDisciplinas preenchido
	preenchervetor(vetorAlunos, 10, vetDisciplinas, 10, &quantDisciplinas);
	
	//exibindo o vetor VetDisciplinas
	exibirDisciplinas (vetDisciplinas, quantDisciplinas);
}

void preenchervetor(TAluno vetorAlunos[], int tamanAluno, TDisciplina vetDisciplinas[], int tamanDisciplina, int *quantDisciplinas)
{
	int i, j=0, k;
	float media;
	
	for(i=0; i<tamanAluno; i++)
	{
		if(i==0)//como nao tem ninguem antes já vou armazenar a primeira
		{
			//vetor disciplinas recebendo o codigo da materia
			strcpy(vetDisciplinas[j].codigo,vetorAlunos[i].codigo);
			
			//fazendo a media da av1 com a av2
			media=(vetorAlunos[i].av1+vetorAlunos[i].av2)/2;
			
			//se a media for menos que 4, aluno reprovado na materia
			if(media<4)
			{
				//escrevendo reprovado no status do aluno
				strcpy(vetDisciplinas[j].status,"reprovado");
				
				//aumentando a quantidade de aluno reprovado no codigo da materia
				vetDisciplinas[j].quantidade=1;
			}
			else
			{
				//se a media for maior que 6, aluno aprovado na materia
				if(media>6)
				{
					//escrevendo aprovado no status do aluno
					strcpy(vetDisciplinas[j].status,"aprovado");
					
					//aumentando a quantidade de aluno aprovado no codigo da materia
					vetDisciplinas[j].quantidade=1;
				}
				else
				{
					//se a media for entre 4 e 6, aluno em AVF na materia
					if((media>4) && (media<6))
					{
						//escrevendo em AVF no status do aluno
						strcpy(vetDisciplinas[j].status,"em AVF");
						
						//aumentando a quantidade de aluno em AVF no codigo da materia
						vetDisciplinas[j].quantidade=1;
					}
				}
			}
			//aumentando a quantidade de alunos
			*quantDisciplinas=*quantDisciplinas+1;
			
			//atualizando o j
			j++;
		}
		if(i!=0)
		{
			//percorrendo o vetor ao contrario para ver se tem alguem igual
			for(k=0; k<i; k++)
			{
				//fazendo a media da av1 com a av2
				media=(vetorAlunos[i].av1+vetorAlunos[i].av2)/2;
				
				//se as dois codigos da sala forem iguais e a media for menor que 4
				if((strcmp(vetDisciplinas[k].codigo,vetorAlunos[i].codigo)==0) && (media<4))
				{
					//atualizando a quantidade de aluno reprovado com o mesmo codigo
					vetDisciplinas[k].quantidade=1;
				}
				else
				{
					//se as dois codigos da sala forem iguais e a media for entre 4 e 6
					if((strcmp(vetDisciplinas[k].codigo,vetorAlunos[i].codigo)==0) && (media>4) && (media<6))
					{
						//atualizando a quantidade de aluno em AFV com o mesmo codigo
						vetDisciplinas[k].quantidade=1;
					}
					else
					{
						//se as dois codigos da sala forem iguais e a media for maior que 6
						if((strcmp(vetDisciplinas[k].codigo,vetorAlunos[i].codigo)==0) && (media>6))
						{
							//atualizando a quantidade de aluno aprovado com o mesmo codigo
							vetDisciplinas[k].quantidade=1;
						}
						else
						{
							//se nao tiver nenhum codigo igual e as mesmas situações de nota
							
							//vetor disciplinas recebendo o codigo da materia
							strcpy(vetDisciplinas[j].codigo,vetorAlunos[i].codigo);
							
							//se a media for menos que 4, aluno reprovado na materia
							if(media<4)
							{
								//escrevendo reprovado no status do aluno
								strcpy(vetDisciplinas[j].status,"reprovado");
								
								//aumentando a quantidade de aluno reprovado no codigo da materia
								vetDisciplinas[j].quantidade=1;
							}
							else
							{
								if(media>6)
								{
									//escrevendo aprovado no status do aluno
									strcpy(vetDisciplinas[j].status,"aprovado");
									
									//aumentando a quantidade de aluno aprovado no codigo da materia
									vetDisciplinas[j].quantidade=1;
								}
								else
								{
									if((media>4) && (media<6))
									{
										//escrevendo em AVF no status do aluno
										strcpy(vetDisciplinas[j].status,"em AVF");
										
										//aumentando a quantidade de aluno em AVF no codigo da materia
										vetDisciplinas[j].quantidade=1;
									}
								}
							}
							*quantDisciplinas=*quantDisciplinas+1;
							j++;
						}
					}
				}
			
			}
		}
	}
}
	

void inicializarAlunos (TAluno alunos[], int tamanho)
{
	//posicao 0
	strcpy (alunos[0].nome, "JOAO");
	strcpy (alunos[0].codigo, "FAC");
	alunos[0].av1 = 10.0;
	alunos[0].av2 = 8.0;
	
	//posicao 1
	strcpy (alunos[1].nome, "PEDRO");
	strcpy (alunos[1].codigo, "ESD");
	alunos[1].av1 = 6.0;
	alunos[1].av2 = 7.0;
	
	//posicao 2
	strcpy (alunos[2].nome, "MARIA");
	strcpy (alunos[2].codigo, "FPR");
	alunos[2].av1 = 10.0;
	alunos[2].av2 = 5.0;
	
	//posicao 3
	strcpy (alunos[3].nome, "ANA");
	strcpy (alunos[3].codigo, "FAC");
	alunos[3].av1 = 8.0;
	alunos[3].av2 = 3.0;
	
	//posicao 4
	strcpy (alunos[4].nome, "CARLOS");
	strcpy (alunos[4].codigo, "FAC");
	alunos[4].av1 = 7.0;
	alunos[4].av2 = 7.0;
	
	//posicao 5
	strcpy (alunos[5].nome, "PAULO");
	strcpy (alunos[5].codigo, "FPR");
	alunos[5].av1 = 5.0;
	alunos[5].av2 = 2.0;
	
	//posicao 6
	strcpy (alunos[6].nome, "KATIA");
	strcpy (alunos[6].codigo, "ESD");
	alunos[6].av1 = 5.0;
	alunos[6].av2 = 9.0;
	
	//posicao 7
	strcpy (alunos[7].nome, "SILVIA");
	strcpy (alunos[7].codigo, "FAC");
	alunos[7].av1 = 2.0;
	alunos[7].av2 = 4.0;
	
	//posicao 8
	strcpy (alunos[8].nome, "GLORIA");
	strcpy (alunos[8].codigo, "FPR");
	alunos[8].av1 = 4.0;
	alunos[8].av2 = 1.0;
	
	//posicao 9
	strcpy (alunos[9].nome, "ANTONIO");
	strcpy (alunos[9].codigo, "ESD");
	alunos[9].av1 = 3.0;
	alunos[9].av2 = 4.0;
}

void exibirDisciplinas (TDisciplina vetDisciplinas[], int tamanho)
{
	int i;
	
	for (i=0;i<tamanho;i++)
	{
		printf ("Disciplina: %s\n", vetDisciplinas[i].codigo);
		printf ("Situacao: %s\n", vetDisciplinas[i].status);
		printf ("Quantidade de alunos: %d\n\n", vetDisciplinas[i].quantidade);
	}
}
