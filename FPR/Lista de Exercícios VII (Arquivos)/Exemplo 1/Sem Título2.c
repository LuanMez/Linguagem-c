/*Exemplo 2: Lendo os elementos de um arquivo, sabendo
que os números estão dispostos um por linha.*/

#include<stdio.h>

int exibirNumeros(char nomeArq[])
{
	//criação das variaveis
	int num;
	FILE *arquivo; //criando a variavel arquivo
	arquivo=fopen(nomeArq,"r"); //abrindo o arquivo em modo leitura
	
	if(arquivo) //verificando a abertura do arquivo
	{
		while(fscanf(arquivo,"%d", &num) != EOF)
		{
			printf("%d\n", num); //exibindo os numeros e pulando linha
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
	res=exibirNumeros(nomeArq);
	
	if(res==-1)
	{
		printf("Arquivo NAO encontrado");
	}
	else
	{
		printf("Leitura feita com sucesso");
	}
	
}
