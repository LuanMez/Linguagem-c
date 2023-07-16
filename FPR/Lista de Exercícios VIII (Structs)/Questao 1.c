/*Quest�o 01:
Considere um vetor que armazene alguns dados
coletados de um grupo de pessoas em uma
pesquisa, a saber: nome, g�nero, idade e altura.
Desenvolver uma fun��o que receba os
par�metros g�nero, faixa de idade (idade inicial
e idade final) e faixa de altura (altura inferior e
altura superior) e retorne a quantidade de
pessoas que atendem aos filtros por ele
representados.
Nota: caso o g�nero especificado seja igual a M,
ser�o considerados os homens que estiverem
nas faixas de idade e altura especificadas; o
mesmo ocorrer� com as mulheres, quando o
g�nero for F. Por�m, se o g�nero contiver
qualquer valor diferente de M ou F, todas as
pessoas que atenderem aos filtros de idade e
altura ser�o contabilizadas.*/

#include<stdio.h>
#define TAM 5

//struct
typedef struct{
	char nome[30];
	char genero;
	int idade;
	float altura;
}TPessoa;

//implementando a fun��o de preencher
void preencherpessoa(TPessoa pessoa[], int tamanho)
{
	int i;
	
	for(i=0; i<tamanho; i++)
	{
		printf("Digite seu nome: ");
		fflush(stdin);
		gets(pessoa[i].nome);
		
		printf("Digite seu genero: ");
		fflush(stdin);
		scanf("%c", &pessoa[i].genero);
		pessoa[i].genero=toupper(pessoa[i].genero);
		
		printf("Digite sua idade: ");
		scanf("%d", &pessoa[i].idade);
		
		printf("Digite sua altura: ");
		scanf("%f", &pessoa[i].altura);
		printf("\n");
	}
}

//nunca usar o tipo TPessoa, sempre o nome da variaveis, pessoa[i].nome, pessoa[i].genero, pessoa[i].altura, pessoa[i].idade
int verificarpessoa(TPessoa pessoa[], int tamanho, char genero, int idadeInicial, int idadeFinal, float alturaInicial, float alturaFinal)
{
	int i, cont=0;
	
	for(i=0; i<tamanho; i++)
	{
		if(genero=='M' || genero=='F') //verifiando se o genero � M ou F
		{
			//verificando se a pessoa tem a idade no intervalo inicial e final e se a pessoa tem a altura no intervalo inicial e final
			if((pessoa[i].idade>=idadeInicial) && (idadeFinal>=pessoa[i].idade) && (pessoa[i].altura>=alturaInicial) && (alturaFinal>=pessoa[i].altura))
			{
				if(pessoa[i].genero==genero) //se o genero da pessoa for igual ao genero dado na leitura
				{
					cont++; //tem uma pessoa com essa condi��o cont++
				}
				else
				{
					cont++; //tem uma pessoa com essa condi��o cont++
				}
				/*if(genero=='M')
				{
					cont++;
				}
				else
				{
					if(genero=='F')
					{
						cont++;
					}
				}*/
			}
		}
		else
		{
			if(pessoa[i].idade>idadeInicial && idadeFinal>pessoa[i].idade && pessoa[i].altura>alturaInicial && alturaFinal>pessoa[i].altura)
			{
				cont++;
			}
		}
	}
	return cont;
}

//main
void main ()
{
	//criando as variaveis
	TPessoa pessoa[TAM];
	char genero;
	int idadeInicial, idadeFinal, resultado;
	float alturaInicial, alturaFinal;
	
	//chamando a fun��o preencher
	preencherpessoa(pessoa, TAM);
	
	printf("Digite o genero para achar as pessoas, M ou F: ");
	fflush(stdin);
	scanf("%c", &genero);
	genero=toupper(genero); //tooupperrr
	
	printf("Digite o intervalo das idades, primeiro a idade inicial e depois idade final: ");
	scanf("%d %d", &idadeInicial, &idadeFinal);
	
	printf("Digite o intervalo das alturas, primeiro a altura inicial e depois altura final: ");
	scanf("%f %f", &alturaInicial, &alturaFinal);
	
	//chamando a fun��o verificar
	
	resultado=verificarpessoa(pessoa, TAM, genero, idadeInicial, idadeFinal, alturaInicial, alturaFinal);
	
	printf("\nO numero de pessoa no intervalo com esse genero eh: %d", resultado);
	
}
