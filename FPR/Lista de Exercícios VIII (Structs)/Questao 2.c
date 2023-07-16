/*Quest�o 02:
Considere um vetor que, em cada posi��o,
armazene os seguintes dados de um curso de
gradua��o: nome (por exemplo, Medicina,
Engenharia, Direito, ...), �rea (Humanas, Exatas,
...), cidade na qual funciona e a quantidade de
alunos matriculados no curso.
Desenvolver uma fun��o que, dado um vetor
nesses moldes, um c�digo inteiro cod e uma
string str, retorne a quantidade de alunos
associados aos par�metros.
Se o c�digo for igual a 1, str representar� um
curso e, portanto, a fun��o dever� retornar a
quantidade de alunos matriculados no curso str,

destacando que o mesmo curso pode encontrar-
se em mais de uma posi��o do vetor (em cidades

diferentes, por exemplo). Por outro lado, se o
c�digo for 2, str representar� uma �rea e,
portanto, dever� ser retornado o total de alunos
matriculados em cursos daquela �rea.*/

#include<stdio.h>
#define TAM 5

typedef struct{
	char nomecurso[30];
	char area[30];
	char cidade[30];
	int quantidade;
}TCurso;

void preencherCurso(TCurso curso[], int tamanho)
{
	int i;
	
	for(i=0; i<tamanho; i++)
	{
		printf("Digite o nome do curso: ");
		fflush(stdin);
		gets(curso[i].nomecurso);
		
		printf("Digite a area do curso: ");
		fflush(stdin);
		gets(curso[i].area);
		
		printf("Digite a Cidade do curso: ");
		fflush(stdin);
		gets(curso[i].cidade);
		
		printf("Digite a quantidade de alunos: ");
		scanf("%d", &curso[i].quantidade);
	}
}

int verificarCurso(TCurso curso[], int tamanho, int codigo, char string[])
{
	int i, somaPessoas=0;
	
	for(i=0; i<tamanho; i++)
	{
		if((codigo==1) && (strcmp(curso[i].nomecurso,string)==0))//verificando se o codigo � 1 e se os cursos sao iguais no vetor e na string digitada
		{
			somaPessoas+=curso[i].quantidade; //somando a quantidade de pessoas desse curso
		}
		else
		{
			if((codigo==2) && (strcmp(curso[i].area,string)==0))//verificando se o codigo � 2 e se as areas sao iguais no vetor e na string digitada
			{
				somaPessoas+=curso[i].quantidade; //somando a quantidade de pessoas dessa area
			}
		}
	}
	return somaPessoas; //retornando a quantidade dependendo do codigo
}

void main ()
{
	TCurso curso[TAM];
	int codigo, resultado;
	char string [30];
	
	//preenchendo os cursos
	preencherCurso(curso, TAM);
	
	printf("Digite o codigo, 1 para quantidade de alunos no curso, 2 para a quantidade de alunos na area: ");
	scanf("%d", &codigo);
	
	printf("Digite a area ou curso dependendo do codigo escolhido: ");
	fflush(stdin);
	gets(string);
	
	//verificando a quantidade de alunos
	resultado=verificarCurso(curso, TAM, codigo, string);
	
	printf("A quantidade de alunos eh: %d", resultado);
}
