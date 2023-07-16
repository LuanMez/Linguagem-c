/*Questão 01:
Desenvolver uma função que, dado um arquivo
texto, verifique o número de caracteres no
mesmo.*/

//fopen abre um arquivo
//fclose fecha o arquivo com segurança

//fprintf é para escrever no arquivo
//fscanf é para ler oq tem no arquivo
//if(arquivo != NULL) se meu arquivo ele aponta pro ponteiro e for difernete de nulo.

#include<stdio.h>

int verificarCaracter(char nomeArq[])
{
	FILE *arquivo; //variavel do tipo file com ponteiro do tipo arquivo
	int soma;
	char caracter;
	
	arquivo = fopen(nomeArq, "r"); //abrindo a variavel arquivo  para leitura
	//r seguinifica read que é ler
	//w seguinifica write que é escrever
	//a seguinifica append que é acrescentar ou alterar
	
	//if(arquivo!=NULL)
	if(arquivo)
	{
		while(fscanf(arquivo, "%c", &caracter) != EOF)
		{
			soma++;
		}
	}
	else
	{
		return -1;
	}
	fclose(arquivo);
	
	return soma;
}

void main ()
{
	//declaração das variaveis
	char nomeArq[20];
	int resultado;
	
	printf("Digite o nome do arquivo: ");
	fflush(stdin);
	gets(nomeArq);
	
	resultado=verificarCaracter(nomeArq);
	
	if(resultado==-1)
	{
		printf("Erro na abertura do arquivo");
	}
	else
	{
		printf("Total de caracteres no arquivo %s eh: %d", nomeArq, resultado);
	}
}
