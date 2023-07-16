/*Exemplo 3: Lendo os elementos de um arquivo (sem saber a sua estrutura interna)*/

#include<stdio.h>

int exibindoCaracter(char nomeArq[])
{
	//criação das variaveis
	char caracter;
	FILE *arquivo; //criando a variavel arquivo
	arquivo=fopen(nomeArq,"r"); //abrindo o arquivo em modo leitura
	
	if(arquivo) //verificando a abertura do arquivo
	{
		while(fscanf(arquivo,"%c", &caracter) != EOF)
		{
			printf("%c", caracter); //exibindo cada caracter
		}
	}
	else
	{
		return -1; //se o arquivo não for aberto corretamente
	}
	
	fclose(arquivo); //fechamento do arquivo
	
	return 0; //se o arquivo for aberto corretamente
	
}

void main ()
{
	//criação das variaveis
	char nomeArq[30];
	int res;
	
	//leitura do nome do arquivo
	printf("Digite o nome do arquivo: ");
	fflush(stdin);
	gets(nomeArq);
	
	//invocando a função
	res=exibindoCaracter(nomeArq);
	
	if(res==-1)
	{
		printf("Arquivo NAO encontrado");
	}
	else
	{
		printf("\nLeitura feita com sucesso");
	}
	
}
