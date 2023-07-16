/*Questão 03:
Desenvolver uma função que, dado um arquivo
texto, verifique o número de letras existentes
no mesmo (entendendo que no arquivo podem
existir letras, algarismos e símbolos).*/

#include<stdio.h>

int verificandoNum(char nomeArq[])
{
	FILE *arquivo;
	int cont=0;
	char caracter;
	
	arquivo=fopen(nomeArq, "r");
	
	if(arquivo)
	{
		while(fscanf(arquivo, "%c", &caracter) !=EOF)
		{
			caracter=toupper(caracter);
			
			if(caracter>='A' && caracter<='Z')
			{
				cont++;
			}
		}
	}
	else
	{
		return -1;
	}
	//fechando o arquivo
	fclose(arquivo);
	
	return cont;
}

void main ()
{
	char nomeArq[30];
	int resultado;
	
	printf("Digite o nome do arquivo: ");
	fflush(stdin);
	gets(nomeArq);
	
	resultado=verificandoNum(nomeArq);
	
	if(resultado==-1)
	{
		printf("Erro no arquivo");
	}
	else
	{
		printf("A quantidade de caracter no arquivo %s eh: %d", nomeArq, resultado);
	}
}
