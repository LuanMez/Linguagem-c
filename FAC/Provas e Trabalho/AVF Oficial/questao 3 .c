/*Questão 03 [2,5 pontos]:
Fazer uma função que, dado um vetor de inteiros V,
determine a posição do menor elemento da posição
pos ao final do vetor. Em seguida, implementar uma
segunda função que, após chamar a primeira, troque o
elemento da posição retornada com o da posição pos,
caso estas sejam distintas.
Nota: caso a posição pos seja inválida, a primeira
função deverá retornar -1 e, nesse caso, a segunda
função não procederá com a troca citada.*/

//nos minutos finais reparei que tinha que dar um retorno caso seja invalido, nao deu para fazer.
#include<stdio.h>
#define QUANT 6

void acharMenor(int vetor[], int quantidade, int *num, int *menor)
{
	int i, j, numero, veri=99999999;
	
	for(i=0; i<quantidade; i++)
	{
		printf("Insira o valor da posicao do vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("Escolha um numero do vetor para procurar o menor numero pos: ");
	scanf("%d", &numero);
	
	for(i=0; i<quantidade; i++)
	{
		if(numero==vetor[i])
		{
			*num=i;
		}
	}
	
	j=*num;
	
	for(j; j<quantidade; j++)
	{
		if(vetor[j]<veri)
		{
			veri=vetor[j];
			*menor=j;
		}
	}
	
}

trocar(int vetor[], int quantidade, int *num, int *menor)
{
	
	int i, aux;
	
	
	acharMenor(vetor, quantidade, num, menor);
	
	aux=vetor[*num];
	vetor[*num]=vetor[*menor];
	vetor[*menor]=aux;
	
	
}

void main ()
{
	int v[QUANT], num, menor, i;
	
	trocar(v, QUANT, &num, &menor);
	
	for(i=0; i<QUANT; i++)
	{
		printf("valor da posicao do vetor[%d]: %d\n", i, v[i]);
	}
	
}
