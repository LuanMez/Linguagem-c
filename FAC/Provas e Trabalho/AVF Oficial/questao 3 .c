/*Quest�o 03 [2,5 pontos]:
Fazer uma fun��o que, dado um vetor de inteiros V,
determine a posi��o do menor elemento da posi��o
pos ao final do vetor. Em seguida, implementar uma
segunda fun��o que, ap�s chamar a primeira, troque o
elemento da posi��o retornada com o da posi��o pos,
caso estas sejam distintas.
Nota: caso a posi��o pos seja inv�lida, a primeira
fun��o dever� retornar -1 e, nesse caso, a segunda
fun��o n�o proceder� com a troca citada.*/

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
