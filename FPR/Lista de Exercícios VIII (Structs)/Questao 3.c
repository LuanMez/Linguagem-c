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
		cont++; //contando 1 já 
		
		if(i!=tamanho) //se o i é diferente de tamanho que é 5
		{
			for(j=i+1; j<tamanho; j++) //for para verificar se tem alguem na sua frente igual
			{
				if((strcmp(filhoMae[i].nomeMae,filhoMae[j].nomeMae)==0)) //se achar o nome da mae nos dois vetores entao ela tem um filho
				{
					cont++;
				}	
			}
		}
		if(i!=0) //se o i for diferente de 0 ou seja ja andou uma casa
		{
			for(z=0; z<i; z++) //fazendo um for de 0 até i
			{
				if(strcmp(filhoMae[i].nomeMae,filhoMae[z].nomeMae)==0) //se achar nesse intervalo uma mae com mesmo nome entao ela ja foi contado 
				{
					cont=0; //zero o contador de filho 
				}
			}
		}
		if(cont!=0) //se chegou até aqui é a quantidade de filhos
		{
			filhos[*quant].quantidadeFilhos=cont; //quantidadefilhos recebe cont
			strcpy(filhos[*quant].nomeMae,filhoMae[i].nomeMae); //copiou nome da mae do filhoMae origem para filhos destino
			*quant=*quant+1; //aumentei a quantidade
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
