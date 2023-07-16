/*Exemplo 5: Removar um numero de um arquivo*/

#include<stdio.h>

int removerNumero(char nomeArq[], int num)
{
	//criação das variaveis
	int numero;
	FILE *arquivo, *temp; //criando a variavel arquivo e temporario
	arquivo=fopen(nomeArq,"r"); //abrindo o arquivo em modo leitura
	temp=fopen("temp.txt","w");//abrindo o arquivo2 em modo escrita
	
	if(arquivo == NULL || temp == NULL) //verificando se a abertura de um dos arquivos deu erro
	{
		remove ("temp.txt");//se o arquivo para remover nao existir apagar o arquivo temporario
		return -1; //se o arquivo não for aberto corretamente
	}
	else
	{
		while(fscanf(arquivo,"%d", &numero) != EOF) //lendo cada caracter do arquivo, e jogando os numeros diferentes de "numero"
		{
			if(numero != num)
			{
				fprintf(temp,"%d\n", numero); //escrevendo cada caracter do arquivo para o arquivo2
			}
		}
	}
	
	fclose(arquivo); //fechamento do arquivo
	fclose(temp); //fechamento do temp
	
	remove (nomeArq); //apagar o arquivo principal
	rename("temp.txt", nomeArq); //renomando o arquivo temporario para ser o arquivo original
	
	return 0; //se o arquivo foi copiado com sucesso
	
}

void main ()
{
	//criação das variaveis
	char nomeArq[30];
	int res, num;
	
	//leitura do nome do arquivo
	printf("Digite o nome do arquivo a ser copiado: ");
	fflush(stdin);
	gets(nomeArq);
	
	//leitura do numero
	printf("Digite o numero que deseja remover: ");
	scanf("%d", &num);
	
	//invocando a função
	res=removerNumero(nomeArq,num);
	
	if(res==-1)
	{
		printf("Arquivo NAO encontrado");
	}
	else
	{
		if(res==0)
		{
			printf("\nRemocao feita com sucesso");
		}
	}
	
}
