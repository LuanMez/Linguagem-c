/*Quest�o 02:
Desenvolver uma fun��o que, dado um arquivo
texto, verifique o n�mero de vezes que um
determinado caracter aparece no arquivo.*/

#include<stdio.h>
#include<string.h>

//implementa��o da fun��o
int verificando(char nomeArq[], char caracter)
{
	//crian��o das variaveis
	FILE *arquivo; //criando a variavel arquivo
	int cont=0;
	char carac;
	
	arquivo=fopen(nomeArq,"r");//atribuindo a leitura do nomeArq para a variavel arquivo
	
	if(arquivo)//verificando se a abertura do arquivo foi feita corretamento
	{
		while(fscanf(arquivo,"%c", &carac) != EOF)
		{
			 //pegando cada caracter para verificar at� acabar o arquivo
			if(carac == caracter)
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

	//retornando a quantidade	
	return cont;
}

void main ()
{
	//criando as variaveis
	char nomeArq[30];
	char caracter;
	int resultado;
	
	//atribuindo o nome do arquivo
	printf("Digite o nome do arquivo: ");
	fflush(stdin);
	gets(nomeArq);
	
	//leitura do caracter
	printf("Digite o caracter que deseja saber quantas vezes tem no arquivo: ");
	fflush(stdin);
	scanf("%c", &caracter);
	
	//invocando a fun��o
	resultado=verificando(nomeArq, caracter);
	
	//verificando se ocorreu um erro na abertura do arquivo
	if(resultado==-1)
	{
		printf("Erro na abertura do arquivo");
	}
	else
	{
		printf("O numero de vezes que %c aparece no arquivo %s eh: %d", caracter, nomeArq, resultado);
	}
	
}
