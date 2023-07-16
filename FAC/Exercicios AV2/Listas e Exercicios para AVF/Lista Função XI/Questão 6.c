/*QUESTÃO 06:
Faça uma função que, dado um vetor de reais,
altere todas as ocorrências do número A pelo
número B.*/

#include<stdio.h>
#define TAM 10

void trocar (int vetor[], int tamanho, int novo, int velho)
{
	int i;
	
	for(i=0; i<tamanho; i++)
	{
		if(vetor[i]==velho)
		{
			vetor[i]=novo;
		}
	}

}

void main ()
{
	int v[TAM]={1,2,3,3,4,4,4,4,5,5}, a, b, i;
	
	printf("Digite o novo valor para alterar no vetor e depois o que deseja alterar: ");
	scanf("%d %d", &a, &b);
	
	trocar(v, TAM, a, b);
	
	printf("vetor atualizado\n");
	
	for(i=0; i<TAM; i++)
	{
		printf("vetor[%d]=%d\n", i, v[i]);
	}
}
