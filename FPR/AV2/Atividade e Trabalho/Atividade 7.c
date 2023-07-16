/*Pede-se a implementação de uma função
recursiva que, dada uma lista do tipo TLista,
ordenada crescentemente, determine a
quantidade de valores distintos na lista.*/

#include<stdio.h>
#include<stdlib.h> //biblioteca do malloc

//declaração de tipos
typedef struct No{
	int valor; //no caso, representando uma Lista de inteiros
	struct No* prox;
} TNo;

typedef TNo* TLista;

//prototipo das funções
int inserir(TLista *L, int numero);
int quantidade(TLista L);
int quantidadeRec(TLista L, int num, int cont);

void main ()
{
	//declaração das varaiveis
	TLista L = NULL;
	int resultado;
	
	inserir (&L, 9);
	inserir (&L, 8);
	inserir (&L, 7);
	inserir (&L, 7);
	inserir (&L, 6);
	inserir (&L, 5);
	inserir (&L, 4);
	inserir (&L, 3);
	inserir (&L, 2);
	inserir (&L, 2);
	
	resultado=quantidade(L);
	
	printf("A quantidade de elementos distintos eh: %d", resultado);
}

int inserir(TLista *L, int num)
{
	TLista aux;
	//Passo1: Alocar memória para o novo elemento
	aux = (TLista) malloc(sizeof(TNo));
	
	if(aux==NULL) //!aux
	{
		return 0;
	}
	else
	{
		aux->valor=num;
		aux->prox=*L;
		*L=aux;
		
		return 1;
	}
}

int quantidade( TLista L)
{
	if (L == NULL)
	{
		return 0; //verificando se a lista está vazia se estiver retorna 0
	}
	
	int num=L->valor; //atribuindo o primeiro valor na variavel num
	int cont=1; //como verifiquei q tem pelo menos um elemento
	
	return quantidadeRec(L, num, cont);
}

int quantidadeRec(TLista L, int num, int cont)
{
	if(L==NULL)
	{
		return cont;// retornando a quantidade de elementos
	}
	else
	{
		if (L->valor != num) //se o valor for diferente
		{
			cont++; //contador aumenta 1
			num = L->valor; //atualiza o valor de num
		}
		
		return quantidadeRec(L->prox, num, cont); //L vai para o proximo elemento
	}
}
