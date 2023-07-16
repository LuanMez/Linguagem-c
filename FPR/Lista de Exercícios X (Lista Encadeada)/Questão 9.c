/*QUESTÃO 09:
Implementar uma função que, dada uma lista dinâmica do tipo TLista, verifique se os
elementos da estrutura encontram-se ordenados de forma crescente ou não.*/

//bibliotecas
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
void imprimir(TLista L);
int crescente(TLista L);

void main ()
{
	TLista L = NULL;
	int resultado;
	
	inserir (&L, 9);
	inserir (&L, 8);
	inserir (&L, 7);
	inserir (&L, 4324);
	inserir (&L, 5);
	inserir (&L, 4);
	inserir (&L, 3);
	inserir (&L, 1);
	
	
	resultado=crescente(L);
	
	if(resultado==0)
	{
		printf("A lista esta em ordem crescente\n");
		imprimir(L);
	}
	else
	{
		printf("A lista NAO esta em ordem crescente\n");
		imprimir(L);
	}
}

//implementação das funções
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

void imprimir(TLista L)
{
    while (L != NULL)
	{
        printf("%d ", L->valor);
        L = L->prox;
    }
    printf("\n");
}

int crescente(TLista L)
{
	//declaração das variaveis
	TLista aux;
	
	aux=L;
	
	if(!aux) //verificando se a lista está vazia
	{
		return 1;
	}
	else
	{
		//percorrendo a lista até o seu final
		while(aux->prox) //tem q ser até o aux ter um prox fazendo parar no ultimo elemento da lista
		{
			//verificando se é o valor sendo buscado
			if((aux->valor)>(aux->prox->valor))
			{
				return 1; //achou um elemento que não está na ordem crescente
			}
			//atualizando com 'aux' para o prox nó
			aux=aux->prox;	
		}
		return 0; //se chegou até aqui está em ordem crescente
	}
}
