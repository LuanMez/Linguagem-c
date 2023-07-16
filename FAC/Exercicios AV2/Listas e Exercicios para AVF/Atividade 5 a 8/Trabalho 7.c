/*Implementar uma fun��o que, dado um
vetor contendo quant n�meros inteiros,
determine a posi��o do elemento que mais
se aproxime da m�dia dos valores do vetor.
Nota: caso mais de um valor do vetor atenda ao
enunciado, basta determinar a posi��o de um
deles (a crit�rio do aluno).*/
// um retorno da posi��o do vetor q tenha o numero amis perto da media

#include<stdio.h>
#define TAM 5

int valormedia (int vetor [], int tamanho)
{
	int i, posicao1, posicao2, num1, num2;
	float media=0;
	
	for(i=0; i<tamanho; i++)
	{
		media+=vetor[i];
	}
	
	media/=tamanho;
	
	printf("%f", media);
	
	for(i=0; i<tamanho; i++)
	{
		if(vetor[i]>=media)
		{
			posicao1=i;
			num1=vetor[i]-media;
		}
		if(vetor[i]<=media)
		{
			posicao2=i;
			num2=media-vetor[i];
		}
	}
	if(num1>num2)
	{
		return posicao2;
	}
	else
	{
		return posicao1;
	}
}

void main ()
{
	int v[TAM]={10,5,4,6,8};
	int resultado;
	
	resultado=valormedia(v, TAM);
	
	printf("O valor da posicao %d e' o que mais se aproxima da media.", resultado);
}
