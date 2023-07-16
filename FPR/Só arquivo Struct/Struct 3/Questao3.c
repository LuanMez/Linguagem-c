/*Questão 03:
Um grupo de pessoas foi entrevistado e cada
uma informou o seu nome e o nome de sua mãe.
Estes dados foram armazenados em um vetor do
qual cada posição consiste em um struct.
Desenvolver uma função que receba um vetor
como o descrito acima e retorne outro
contendo, para cada mãe, o número de filhos
entrevistados (portanto, um outro vetor de
structs).
Nota: considerar que não existem duas ou mais
mães com o mesmo nome.*/

#include<stdio.h>
#include<string.h>
#define TAM 5

typedef struct{
	char nome[30];
	char nomeMae[30];
}TNome;

typedef struct{
	char nomeMae[30];
	int quantidadeFilhos;
}TFilhosTotal;

void preencher (TNome filhoMae[], int tamanho)
{
	int i;
	
	for(i=0; i<tamanho; i++)
	{
		printf("Digite seu nome: ");
		fflush(stdin);
		gets(filhoMae[i].nome);
		
		printf("Digite o nome da sua mae: ");
		fflush(stdin);
		gets(filhoMae[i].nomeMae);
	}
}

void preencherVetorFilhos(TNome filhoMae[], int tamanho, TFilhosTotal filhos[], int *quant)
{
	int i,j,z, cont=0;
	
	for(i=0; i<tamanho; i++)
	{
		cont++;
		
		if(i!=tamanho)
		{
			for(j=i+1; j<tamanho; j++)
			{
				if((strcmp(filhoMae[i].nomeMae,filhoMae[j].nomeMae)==0))
				{
					cont++;
				}	
			}
		}
		if(i!=0)
		{
			for(z=0; z<i; z++)
			{
				if(strcmp(filhoMae[i].nomeMae,filhoMae[z].nomeMae)==0)
				{
					cont=0;
				}
			}
		}
		if(cont!=0)
		{
			filhos[*quant].quantidadeFilhos=cont;
			strcpy(filhos[*quant].nomeMae,filhoMae[i].nomeMae);
			*quant=*quant+1;
		}
		
		cont=0;
	}
}

void main ()
{
	TNome filhoMae[TAM];
	TFilhosTotal filhos[TAM];
	int quant=0, i;
	
	preencher(filhoMae, TAM);
	preencherVetorFilhos(filhoMae, TAM, filhos, &quant);
	
	for(i=0; i<quant; i++)
	{
		printf("Mae %s quantidade de filhos %d\n", filhos[i].nomeMae, filhos[i].quantidadeFilhos);
		
		//puts(filhos[i].nomeMae);
		//printf("%d", filhos[i].quantidadeFilhos);
	}
	
}
