/*Questão 04:
Desenvolver uma função que, dado um arquivo
texto contendo números, determine se estes
encontram-se ordenados crescentemente.*/

#include<stdio.h>

int verificar (char nomeArq[])
{
	FILE *arquivo;
	arquivo=fopen(nomeArq,"r");
	int num;
	int crescente=-99999;
	
	if(arquivo)
	{
		while(fscanf(arquivo, "%d", &num) != EOF)
		{
			if(crescente>num)
			{
				return 0;
			}
			crescente=num;
		}
	}
	else
	{
		return -1;
	}
	//fechando o arquivo
	fclose(arquivo);
	
	return 1;
}

void main ()
{
	char nomeArq[30];
	int resultado;
	
	printf("Digite o nome do arquivo: ");
	fflush(stdin);
	gets(nomeArq);
	
	resultado=verificar(nomeArq);
	
	if(resultado==-1)
	{
		printf("Erro no arquivo");
	}
	else
	{
		if(resultado==0)
		{
			printf("O arquivo %s NAO se encontra ordem crescente", nomeArq);
		}
		else
		{
			printf("O arquivo %s se encontra na ordem crescente", nomeArq);
		}
	}
}
