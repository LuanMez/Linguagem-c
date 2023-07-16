/*
	FAETERJ-Rio
	FPR Manh� - 03/05/2022
	
	Lista de Exerc�cios VII (Arquivos)
	
	Quest�o 07:
	Desenvolver uma fun��o que, dados dois arquivos textos arqA e 
	arqB, crie um novo arquivo arqC, considerando que:

	- arqA e arqB cont�m n�meros reais, um por linha, ordenados 
	  crescentemente e sem repeti��o no arquivo; 
	- arqC deve conter apenas os n�meros comuns aos dois arquivos 
	  originais;
	- Assim como arqA e arqB, arqC tamb�m n�o possuir� repeti��es 
	  de elementos e estes dever�o estar ordenados de forma crescente.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <float.h>

//defini��o de constantes
#define TRUE 1
#define FALSE 0

//prot�tipos das fun��es
int intersecao (char nomeArqA[], char nomeArqB[], char nomeArqC[]);

//main
void main ()
{
	//declara��o de vari�veis
	char nomeArquivoA[20], nomeArquivoB[20], nomeArquivoC[20];
	
	//lendo os nomes dos arquivos
	printf ("Entre com o nome do primeiro arquivo: ");
	fflush (stdin);
	gets (nomeArquivoA);
	
	printf ("Entre com o nome do segundo arquivo: ");
	fflush (stdin);
	gets (nomeArquivoB);
	
	printf ("Entre com o nome do arquivo uniao: ");
	fflush (stdin);
	gets (nomeArquivoC);
	
	//chamando a fun��o
	if (intersecao (nomeArquivoA, nomeArquivoB, nomeArquivoC) == 0)
	{
		printf ("\n\nErro na abertura dos arquivos!");
	}
	else
	{
		printf ("\n\nArquivo %s gerado com sucesso!", nomeArquivoC);
	}
}

//implementa��o das fun��es
int intersecao (char nomeArqA[], char nomeArqB[], char nomeArqC[])
{
	//declara��o de vari�veis
	FILE *arqA, *arqB, *arqC;
	float numA, numB;
	int fimA = FALSE, fimB = FALSE;
	
	//abrindo os arquivos
	arqA = fopen (nomeArqA, "r");
	arqB = fopen (nomeArqB, "r");
	arqC = fopen (nomeArqC, "w");
	
	//verificando se houve erro na abertura dos arquivos
	if ((!arqA) || (!arqB) || (!arqC))
	{
		return 0;
	}
	else
	{
		if (fscanf (arqA, "%f", &numA) == EOF)//aqui s� teve a leiura do primeiro arquivo arqA
		{
			fimA = TRUE;
		}
		
		if (fscanf (arqB, "%f", &numB) == EOF)//aqui s� teve a leiura do primeiro arquivo arqB
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
				if (fscanf (arqA, "%f", &numA) == EOF)
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
					if (fscanf (arqB, "%f", &numB) == EOF)
					{
						fimB = TRUE;
					}
				}
				else
				{
					//os valores dos dois arquivos s�o iguais!
					fprintf (arqC, "%.1f\n", numA);
						
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
