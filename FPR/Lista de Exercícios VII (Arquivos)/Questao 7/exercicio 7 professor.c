/*
	FAETERJ-Rio
	FPR Manhã - 03/05/2022
	
	Lista de Exercícios VII (Arquivos)
	
	Questão 07:
	Desenvolver uma função que, dados dois arquivos textos arqA e 
	arqB, crie um novo arquivo arqC, considerando que:

	- arqA e arqB contém números reais, um por linha, ordenados 
	  crescentemente e sem repetição no arquivo; 
	- arqC deve conter apenas os números comuns aos dois arquivos 
	  originais;
	- Assim como arqA e arqB, arqC também não possuirá repetições 
	  de elementos e estes deverão estar ordenados de forma crescente.
*/

//importação de bibliotecas
#include <stdio.h>
#include <float.h>

//definição de constantes
#define TRUE 1
#define FALSE 0

//protótipos das funções
int intersecao (char nomeArqA[], char nomeArqB[], char nomeArqC[]);

//main
void main ()
{
	//declaração de variáveis
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
	
	//chamando a função
	if (intersecao (nomeArquivoA, nomeArquivoB, nomeArquivoC) == 0)
	{
		printf ("\n\nErro na abertura dos arquivos!");
	}
	else
	{
		printf ("\n\nArquivo %s gerado com sucesso!", nomeArquivoC);
	}
}

//implementação das funções
int intersecao (char nomeArqA[], char nomeArqB[], char nomeArqC[])
{
	//declaração de variáveis
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
		if (fscanf (arqA, "%f", &numA) == EOF)//aqui só teve a leiura do primeiro arquivo arqA
		{
			fimA = TRUE;
		}
		
		if (fscanf (arqB, "%f", &numB) == EOF)//aqui só teve a leiura do primeiro arquivo arqB
		{
			fimB = TRUE;
		}
		
		//valores serão lidos até que um dos arquivos (ou os dois) chegue ao fim
		while (!fimA && !fimB)
		{
			//o valor lido no primeiro arquivo é menor do que aquele do segundo?
			if (numA < numB)
			{
				//lendo o próximo valor do primeiro arquivo
				if (fscanf (arqA, "%f", &numA) == EOF)
				{
					fimA = TRUE;
				}
			}
			else
			{
				//o valor lido no segundo arquivo é menor do que aquele do primeiro?
				if (numB < numA)
				{					
					//lendo o próximo valor do segundo arquivo
					if (fscanf (arqB, "%f", &numB) == EOF)
					{
						fimB = TRUE;
					}
				}
				else
				{
					//os valores dos dois arquivos são iguais!
					fprintf (arqC, "%.1f\n", numA);
						
					//lendo os próximos valores dos dois arquivos
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
