/*Implementar uma função que, dado um
arquivo texto A contendo números inteiros, um
por linha, cria um novo arquivo texto, B,
contendo os mesmos valores de A, porém em
ordem inversa.*/

#include<stdio.h>

//prototipo da função
int inversa(char nomeArqA[], char nomeArqB[]);

//main
void main ()
{
	//declaração das variaveis
	char nomeArqA[30];
	char nomeArqB[30];
	int res;
	
	//leitura do nome do arquivoA
	printf("Digite o nome do arquivoA: ");
	fflush(stdin);
	gets(nomeArqA);
	
	//leitura do nome do arquivoB
	printf("Digite o nome do arquivoB: ");
	fflush(stdin);
	gets(nomeArqB);
	
	//chamando a função
	res=inversa(nomeArqA, nomeArqB);
	
	//verificando se o arquivo foi feito com sucesso ou nao
	if(res==-1)
	{
		printf("Erro no arquivo");
	}
	else
	{
		printf("Arquivo B criado na ordem inversa com sucesso");
	}
}

int inversa(char nomeArqA[], char nomeArqB[])
{
	//declaração das variaveis
	FILE *arquivoA, *arquivoB;
	int cont=0, cont2=0, num;
	
	//associar as variáveis do tipo FILE aos nomes dos arquivos e abri-los
	arquivoA=fopen(nomeArqA, "r");
	arquivoB=fopen(nomeArqB, "w");
	
	if(arquivoA == NULL || arquivoB == NULL)
	{
		return -1; //se a abertura der errado retorna -1
	}
	else
	{
		while(fscanf(arquivoA,"%d",&num) != EOF)
		{
			cont++; //contando a quantidade de numeros inteiros dentro do arquivo
		}
	}
	
	rewind(arquivoA); //voltando ao inicio do arquivoA
	
	while(cont>0)
	{	
		while(fscanf(arquivoA,"%d",&num) != EOF) //leitura do numero do arquivoA
		{
			cont2++; //contando a quantidade de numeros inteiros
				
			if(cont2==cont) //se a quantidade for a mesma
			{
				fprintf(arquivoB, "%d\n", num); //escreve o numero no arquivoB
					
				cont--; //diminui 1 da quantidade de cont
				
				cont2=0; //o segundo contador volta para 0
					
				rewind(arquivoA); //voltando ao inicio do arquivoA
			}
		}	
	}
	
	//fechando o arquivoA
	fclose(arquivoA);
	fclose(arquivoB);
	
	return 0;
	
}
