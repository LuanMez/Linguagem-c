/*
	FAETERJ-Rio
	FPR - Fundamentos de Programa��o - Manh�
	Professor Leonardo Vianna
	
	Prova a compor a AV1 (Parte I) - 10/05/2023
	
	Quest�o 02 [2,5 pontos]:
	Considerando a exist�ncia de um arquivo A contendo n�meros inteiros 
	positivos, um por linha, pede-se a implementa��o de uma fun��o que 
	crie um segundo arquivo, B, com as seguintes caracter�sticas:
	
	- Para cada valor de A, escrever em B uma linha com todos os seus 
	  divisores;
	- Para cada elemento do primeiro arquivo, apenas uma linha de 
	  divisores deve ser inserida em B.

	Exemplo:

		Arquivo A:
			10
			5
			6
			10
			8
			4
			6

		Arquivo B:
			1 2 5 10
			1 5
			1 2 3 6
			1 2 4 8
			1 2 4 
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//defini��o de constantes
#define TRUE 1
#define FALSE 0

//prot�tipos das fun��es
int copiando(char nomeArq[]);

int removerNumero(char nomeArq[], char nomeArq2[]);

//main
void main ()
{
	//declara��o de vari�veis
	char nomeArqOriginal[20], nomeArqNovo[20];
	int retorno;
	
	//associando o arquivo "teste.txt" � vari�vel 'nomeArqOriginal'
	strcpy (nomeArqOriginal, "teste.txt");
	
	//associando o arquivo "novo.txt" � vari�vel 'nomeArqNovo'
	strcpy (nomeArqNovo, "novo.txt");
		
	//chamando a fun��o e armazenando o retorno na vari�vel 'retorno'
	copiando(nomeArqOriginal);
	
	retorno=removerNumero(nomeArqOriginal, nomeArqNovo);
	
	//testando o retorno
	if (retorno == 1)
	{
		printf ("\nO arquivo %s foi gerado com sucesso!", nomeArqNovo);
	}
	else
	{
		printf ("\nErro na geracao do arquivo %s.", nomeArqNovo);
	}
}
	
//implementa��o das fun��es

int copiando(char nomeArq[]) //copiando os numeros do arquivo teste.txt para uma auxiliar.txt
{
	//cria��o das variaveis
	int num;
	FILE *arquivo, *arquivo2; //criando a variavel arquivo e arquivo2
	arquivo=fopen(nomeArq,"r"); //abrindo o arquivo em modo leitura
	arquivo2=fopen("auxiliar.txt","w");//abrindo o arquivo2 em modo escrita
	
	if(arquivo == NULL || arquivo2 == NULL) //verificando se a abertura de um dos arquivos deu erro
	{
		remove ("auxiliar.txt");//se o arquivo para remover nao existir apagar o arquivo temporario
		return -1;
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
	
	return 1;
}

int removerNumero(char nomeArq[], char nomeArq2[]) //imprimindo os numeros iguais no arquivo novo.txt
{
	//cria��o das variaveis
	int numA, numB, i;
	int fimA = FALSE, fimB = FALSE;
	FILE *arqA, *arqB, *arqC; //criando a variavel arquivo e temporario
	
	arqA=fopen(nomeArq,"r"); //abrindo o arqA em modo leitura
	arqB=fopen("auxiliar.txt","r");//abrindo o arqB em modo leitura
	arqC=fopen(nomeArq2,"w"); //abrindo o arqC em modo escrita
	
	//verificando se houve erro na abertura dos arquivos
	if ((!arqA) || (!arqB) || (!arqC))
	{
		return -1;
	}
	else
	{
		if (fscanf (arqA, "%d", &numA) == EOF)//aqui s� teve a leiura do primeiro arquivo arqA
		{
			fimA = TRUE;
		}
		
		if (fscanf (arqB, "%d", &numB) == EOF)//aqui s� teve a leiura do primeiro arquivo arqB
		{
			fimB = TRUE;
		}
		
		//valores ser�o lidos at� que um dos arquivos (ou os dois) chegue ao fim
		while (!fimA && !fimB)
		{
			//o valor lido no primeiro arquivo � menor do que aquele do segundo?
			if (numA < numB)
			{
				//lendo o pr�ximo valor do primeiro arquivo
				if (fscanf (arqA, "%d", &numA) == EOF)
				{
					fimA = TRUE;
				}
			}
			else
			{
				//o valor lido no segundo arquivo � menor do que aquele do primeiro?
				if (numB < numA)
				{					
					//lendo o pr�ximo valor do segundo arquivo
					if (fscanf (arqB, "%d", &numB) == EOF)
					{
						fimB = TRUE;
					}
				}
				else
				{
					//os valores dos dois arquivos s�o iguais!
					
					for(i=0; i<numA; i++) //fazendo a escrita do numero e seus divisores
					{
						if(numA%i==0) //verificando se o numero � divisivel por i resto 0
						{
							fprintf (arqC, "%d ", i); //escrevendo no arquivo novo.txt o resultado 
						}
						
						fprintf (arqC, "\n"); //fazendo o proximo numero ir para linha de baixo
					}
					//lendo os pr�ximos valores dos dois arquivos
					if (fscanf (arqA, "%f", &numA) == EOF)
					{
						fimA = TRUE;
					}
					
					if (fscanf (arqB, "%f", &numB) == EOF)
					{
						fimB = TRUE;
					}
				}
			}
		}
		
		//fechando os arquivos
		fclose (arqA);
		fclose (arqB);
		fclose (arqC);
		
		return 1;
	}
}
