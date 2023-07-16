/*Quest�o 04:
Desenvolver uma fun��o que, dado um arquivo
texto contendo n�meros, determine se estes
encontram-se ordenados crescentemente.*/

#include<stdio.h>

int verificar (char nomeArq[])
{
	FILE *arquivo;
	arquivo=fopen(nomeArq,"r");
	int num;
	int anterior;
	
	fscanf(arquivo,"%d",&anterior); //lendo o primeiro valor
	
	if(arquivo)
	{
		while(fscanf(arquivo, "%d", &num) != EOF) //lendo os demais valores
		{
			if(anterior>num)
			{
				fclose(arquivo);
				
				//nao estao ordenados
				return 0;
			}
			else
			{
				//atualizando o anterior
				anterior=num;
			}
		}
		//fechando o arquivo
		fclose(arquivo);
	
		return 1;
	}
	else
	{
		return -1;
	}
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
