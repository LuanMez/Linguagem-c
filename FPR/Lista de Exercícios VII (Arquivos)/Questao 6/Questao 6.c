/*Quest�o 06:
Desenvolver uma fun��o que, dados dois
arquivos textos arqA e arqB, crie um novo
arquivo arqC, considerando que:
? arqA e arqB cont�m n�meros reais,
um por linha, ordenados
crescentemente e sem repeti��o no
arquivo;
? arqC deve conter todos os n�meros
dos dois arquivos originais;
? Assim como arqA e arqB, arqC
tamb�m n�o possuir� repeti��es de
elementos e estes dever�o estar
ordenados de forma crescente.*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define MENOR 99999

int criarNovo(char nomeArq[],char nomeArq2[])
{
	//declara��o das variaveis
	FILE *arq1, *arq2, *arqnovo;
	float num1, num2;
	int fimA = FALSE, fimB = FALSE;
	
	//pondo os arquivos nas varaiveis
	arq1=fopen(nomeArq,"r");
	arq2=fopen(nomeArq2,"r");
	arqnovo=fopen("arquivonovo.txt","w");
	
	if(arq1 == NULL || arq2 == NULL || arqnovo == NULL)
	{
		return -1;
	}
	else
	{
		
		if(fscanf(arq1,"%f",&num1) != EOF)
		{
			fimA=TRUE;
		}
		if(fscanf(arq2,"%f",&num2) != EOF)
		{
			fimB=TRUE;
		}
		
		while (!fimA && !fimB)
		{
			if(num1>num2)
			{
				fprintf(arqnovo,"%.1f\n",num2);
				
				//lendo o pr�ximo valor do primeiro arquivo
				if (fscanf (arq2, "%f", &num2) == EOF)
				{
					fimA = TRUE;
				}
			}
			else
			{
				if(num1<num2)
				{
					fprintf(arqnovo,"%.1f\n",num1);
				
					//lendo o pr�ximo valor do primeiro arquivo
					if (fscanf (arq1, "%f", &num1) == EOF)
					{
						fimA = TRUE;
					}
				}
				else
				{
					if(num1==num2)
					{
						fprintf(arqnovo,"%.1f\n",num1);
				
						//lendo o pr�ximo valor do primeiro arquivo
						if (fscanf (arq1, "%f", &num1) == EOF)
						{
							fimA = TRUE;
						}
						if (fscanf (arq2, "%f", &num2) == EOF)
						{
							fimB = TRUE;
						}
					}
				}
			}
			
		}
		//verificando se apenas o primeiro arquivo terminou
		//if ((fimA) && (!fimB))
		if (!fimB)
		{
			//escrevendo em C o elemento que j� tinha sido lido em B
			fprintf (arqnovo, "%.1f\n", num2);
			
			//copiar os elementos remanescentes de B para C
			while (fscanf (arq2, "%f", &num2) != EOF)
			{
				fprintf (arqnovo, "%.1f\n", num2);
			}
		}
		else
		{
			//verificando se apenas o segundo arquivo terminou
			if (!fimA)
			{
				//escrevendo em C o elemento que j� tinha sido lido em A
				fprintf (arqnovo, "%.1f\n", num1);
				
				//copiar os elementos remanescentes de A para C
				while (fscanf (arq1, "%f", &num1) != EOF)
				{
					fprintf (arqnovo, "%.1f\n", num1);
				}
			}
		}
	}
	fclose(arq1);
	fclose(arq2);
	fclose(arqnovo);
	
	return 0;
}

void main ()
{
	//declara��o das variaveis
	char nomeArq[30];
	char nomeArq2[30];
	int res;
	
	//leitura do nome do arquivo
	printf("Digite o nome do primeiro arquivo: ");
	fflush(stdin);
	gets(nomeArq);
	
	//leitura do nome do arquivo
	printf("Digite o nome do segundo arquivo: ");
	fflush(stdin);
	gets(nomeArq2);
	
	res=criarNovo(nomeArq, nomeArq2);
	
	if(res==-1)
	{
		printf("Um dos arquivos n�o foi encontrado");
	}
	else
	{
		printf("Arquivo criado com sucesso");
	}
}
