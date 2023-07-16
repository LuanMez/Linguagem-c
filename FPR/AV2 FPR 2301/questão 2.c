/*Questão 02 [2,5 pontos]:
Pede-se a implementação de uma função recursiva
que, dada uma lista encadeada L do tipo TLista, remova
o nó que se encontra na posição p de L.
Observações:
1. Considere que o primeiro nó está na posição 1 da lista (e
não 0);
2. Se a remoção for realizada, o valor 1 deverá ser
retornado; caso contrário, a função retornará 0.*/

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
int remover(TLista* L, int remove);
int removerRec(TLista* L, int remove, TLista anterior, int n);
void imprimir(TLista L);

void main ()
{
	TLista L = NULL;
	int resultado, remove;
	
	printf("Digite o no a ser removido começando pelo valor 1: ");
	scanf("%d", &remove);
	
	inserir (&L, 9);
	inserir (&L, 8);
	inserir (&L, 7);
	inserir (&L, 4);
	inserir (&L, 5);
	inserir (&L, 4);
	inserir (&L, 3);
	inserir (&L, 1);
	
	resultado=remover(&L, remove);

	if(resultado==1)
	{
		printf("A remocao foi feita\n");
	}
	else
	{
		printf("A remocao não foi feita\n");
	}

	imprimir(L);
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

int remover(TLista* L, int remove)
{
	TLista anterior=NULL;
	return removerRec(L, remove, anterior, 1);
}

int removerRec(TLista* L, int remove, TLista anterior, int n)
{
	if(*L==NULL)
	{
		return 0;
	}

	if(remove==n)
	{
		TLista atual=*L;
		
		if (anterior==NULL)
		{
			*L=(*L)->prox;
		}
		else
		{
			anterior->prox=atual->prox;
		}
		free(atual);
		return 1;
	}
	else
	{
		return removerRec(&(*L)->prox, remove, *L, n + 1);
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
