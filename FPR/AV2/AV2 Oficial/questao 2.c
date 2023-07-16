/*Questão 02 [2,5 pontos]:
Implementar uma função recursiva que, dada uma lista encadeada L, do tipo TLista, e um número inteiro n, remova de L
todos os valores maiores do que n.*/

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
int inserir(TLista* L, int numero);
void imprimir(TLista L);
int remover(TLista* L, int remove);
int removerRec(TLista* L, int remove, TLista anterior);

void main ()
{
	TLista L = NULL;
	int resultado, n;
	
	printf("Digite o valor a ser removido: ");
	scanf("%d", &n);
	
	inserir (&L, 9);
	inserir (&L, 8);
	inserir (&L, 9);
	inserir (&L, 4);
	inserir (&L, 5);
	inserir (&L, 9);
	inserir (&L, 3);
	inserir (&L, 1);
	
	resultado=remover(&L, n);

	if(resultado==0)
	{
		printf("remocao feita com sucesso\n");
		imprimir(L);
	}
	else
	{
		printf("remocao nao foi feita\n");
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

int remover(TLista* L, int remove)
{
	//declaração das variaveis
	TLista anterior;
	anterior=NULL;
	
	if(*L==NULL) //verificando se L está vazia
	{
		return 1;
	}
	return removerRec(L, remove, anterior);
}

int removerRec(TLista* L, int remove, TLista anterior)
{
	//declaração das variaveis
	TLista atual;
	
	if(*L==NULL) //verificando se L chegou ao fim
	{
		return 0;
	}
	else
	{
		if(remove<(*L)->valor) //se achar um valor maior que remove
		{
			atual=(*L);
			
			if(anterior==NULL)
			{
				(*L)=(*L)->prox;
			}
			else
			{
				anterior->prox=atual->prox;
			}
			free(atual);
			
			return removerRec(L, remove, anterior);
		}
		else
		{
			return removerRec(&(*L)->prox, remove, *L);
		}
	}
}
