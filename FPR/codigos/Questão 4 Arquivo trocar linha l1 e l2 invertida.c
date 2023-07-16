/*Quest�o 04 [2,5 pontos]:
Fazer uma fun��o que, dado um arquivo texto com
n�meros inteiros, um por linha, remova deste os
valores da linha L1 � linha L2.
Observa��es:
1. Se a primeira linha for inv�lida, nada ser�
realizado e o valor 0 retornado pela fun��o. O
mesmo ocorrer� se a segunda linha for inferior �
primeira;
2. Se a linha L2 ultrapassar o final do arquivo, ser�o
removidos todos os elementos da linha L1 ao final
do arquivo;
3. Sempre que a opera��o for realizada, o valor 1
dever� ser retornado. 
*/

#include<stdio.h>

int copiando(char nomeArq[], char nomeArq2[])
{
	//cria��o das variaveis
	int num;
	FILE *arquivo, *arquivo2; //criando a variavel arquivo e arquivo2
	arquivo=fopen(nomeArq,"r"); //abrindo o arquivo em modo leitura
	arquivo2=fopen(nomeArq2,"w");//abrindo o arquivo2 em modo escrita
	
	if(arquivo == NULL || arquivo2 == NULL) //verificando se a abertura de um dos arquivos deu erro
	{
		return -1; //se o arquivo n�o for aberto corretamente
	}
	else
	{
		while(fscanf(arquivo,"%d", &num) != EOF) //lendo cada caracter do arquivo
		{
			fprintf(arquivo2,"%d\n", num); //escrevendo cada caracter do arquivo para o arquivo2
		}
	}
	
	fclose(arquivo); //fechamento do arquivo
	fclose(arquivo2); //fechamento do arquivo2
	
	return 0; //se o arquivo foi copiado com sucesso
	
}

int l1l2(char nomeArq[], int l1, int l2)
{
	//cria��o das variaveis
	int cont=0, num;
	FILE *arquivo, *temp; //criando a variavel arquivo e arquivo2
	arquivo=fopen(nomeArq,"r"); //abrindo o arquivo em modo leitura
	temp=fopen("temp.txt","w");//abrindo o arquivo2 em modo escrita
	
	if(arquivo == NULL || temp == NULL) //verificando se a abertura de um dos arquivos deu erro
	{
		remove ("temp.txt");//se o arquivo para remover nao existir apagar o arquivo temporario
		return -1; //se o arquivo n�o for aberto corretamente
	}
	else
	{
		while(fscanf(arquivo,"%d", &num) != EOF) //lendo cada caracter do arquivo
		{
			cont++;
			
			if(cont<l1 || cont>l2)
			{
				fprintf(temp,"%d\n", num); //escrevendo cada caracter do arquivo para o arquivo2
			}
		}
		if(l1>cont || l2<l1)
		{
			remove ("temp.txt"); //apagar o arquivo temporario
			return 0; //se o arquivo n�o for aberto corretamente
		}
	}
	
	fclose(arquivo); //fechamento do arquivo
	fclose(temp); //fechamento do temp
	
	copiando("temp.txt", nomeArq); //copiando os dados do arquivo temporario para o original
	
	remove ("temp.txt"); //apagar o arquivo temporario
	
	return 1; //se o arquivo foi copiado com sucesso
	
}

void main ()
{
	//cria��o das variaveis
	char nomeArq[30];
	int res, l1, l2;
	
	//leitura do nome do arquivo
	printf("Digite o nome do arquivo: ");
	fflush(stdin);
	gets(nomeArq);
	
	//leitura do numero
	printf("Digite o numero de L1 e depois L2: ");
	scanf("%d %d", &l1, &l2);
	
	//invocando a fun��o
	res=l1l2(nomeArq,l1,l2);
	
	if(res==-1)
	{
		printf("Arquivo NAO encontrado");
	}
	else
	{
		if(res==1)
		{
			printf("\nRemocao feita com sucesso");
		}
		else
		{
			if(res==0)
			{
				printf("\nNumero invalido de L1");
			}
		}
	}
	
}
