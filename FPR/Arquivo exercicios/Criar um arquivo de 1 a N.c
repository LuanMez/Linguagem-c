/*Exemplo 1: Fazer um programa que crie um arquivo
com os n�meros de 1 a N, um por linha.*/

#include<stdio.h>

int escrevendo(char nomeArq[], int num)
{
	//cria��o das variaveis
	int i;
	FILE *arquivo; //criando a variavel arquivo
	arquivo=fopen(nomeArq,"w"); //abrindo o arquivo em modo escrita
	
	if(arquivo) //verificando a abertura do arquivo
	{
		for(i=1; i<=num; i++)
		{
			fprintf(arquivo,"%d\n", i); //escrevendo os numeros de 1 a N pulando linha
		}
	}
	else
	{
		return -1; //arquivo nao foi aberto
	}
	
	fclose(arquivo); //fechando o arquivo
	
	return 0; //arquivo criado corretamente
}

void main ()
{
	//cria��o das variaveis
	char nomeArq[30];
	int num, resultado;
	
	//leitura do nome do arquivo
	printf("Digite o nome do arquivo: ");
	fflush(stdin);
	gets(nomeArq);
	
	//leitura do numero
	printf("Digite um numero");
	scanf("%d", &num);
	
	//invocando a fun��o
	resultado=escrevendo(nomeArq, num);
	
	//verificando se o arquivo foi criado
	if(resultado==-1)
	{
		printf("Arquivo n�o encontrado");
	}
	else
	{
		printf("Arquivo criado");
	}
	
}
