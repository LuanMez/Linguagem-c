/*Exemplo 4: copiar o que tem em um arquivo para outro*/

#include<stdio.h>

int copiando(char nomeArq[], char nomeArq2[])
{
	//criação das variaveis
	char caracter;
	FILE *arquivo; //criando a variavel arquivo
	FILE *arquivo2; //criando a variavel arquivo2
	arquivo=fopen(nomeArq,"r"); //abrindo o arquivo em modo leitura
	arquivo2=fopen(nomeArq2,"w");//abrindo o arquivo2 em modo escrita
	
	if(arquivo == NULL || arquivo2 == NULL) //verificando se a abertura de um dos arquivos deu erro
	{
		return -1; //se o arquivo não for aberto corretamente
	}
	else
	{
		while(fscanf(arquivo,"%c", &caracter) != EOF) //lendo cada caracter do arquivo
		{
			fprintf(arquivo2,"%c", caracter); //escrevendo cada caracter do arquivo para o arquivo2
		}
	}
	
	fclose(arquivo); //fechamento do arquivo
	fclose(arquivo2); //fechamento do arquivo2
	
	return 0; //se o arquivo foi copiado com sucesso
	
}

void main ()
{
	//criação das variaveis
	char nomeArq[30];
	char nomeArq2[30];
	int res;
	
	//leitura do nome do arquivo
	printf("Digite o nome do arquivo a ser copiado: ");
	fflush(stdin);
	gets(nomeArq);
	
	//leitura do nome do arquivo2
	printf("Digite o nome do novo arquivo: ");
	fflush(stdin);
	gets(nomeArq2);
	
	//invocando a função
	res=copiando(nomeArq,nomeArq2);
	
	if(res==-1)
	{
		printf("Arquivo NAO encontrado");
	}
	else
	{
		printf("\nCopia do arquivo feita corretamente");
	}
	
}
