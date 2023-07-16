#include<stdio.h>
#include<stdlib.h> //biblioteca do malloc

//declaração de tipos
typedef struct No{
	int valor; //no caso, representando uma Lista de inteiros
	struct No* prox;
} TNo;

typedef TNo* TLista;

//protótipo das funções
int inserir(TLista *L, int numero);
int quantidade(TLista L);
int quantidadeRec(TLista L, int num, int cont);

int main()
{
	//declaração das variáveis
	TLista L = NULL;
	int resultado;
	
	inserir(&L, 1);
	inserir(&L, 1);
	inserir(&L, 1);
	inserir(&L, 2);
	inserir(&L, 3);
	inserir(&L, 3);
	inserir(&L, 4);
	inserir(&L, 5);
	inserir(&L, 5);
	
	resultado = quantidade(L);
	
	printf("A quantidade de elementos distintos é: %d", resultado);
	
	return 0;
}

int inserir(TLista *L, int num)
{
	TLista aux;
	//Passo 1: Alocar memória para o novo elemento
	aux = (TLista) malloc(sizeof(TNo));
	
	if(aux == NULL)
	{
		return 0;
	}
	else
	{
		aux->valor = num;
		aux->prox = *L;
		*L = aux;
		
		return 1;
	}
}

int quantidade(TLista L)
{
	if (L == NULL)
	{
		return 0;
	}
	
	int num = L->valor;
	int cont = 1;
	TLista aux = L->prox;
	
	return quantidadeRec(aux, num, cont);
}

int quantidadeRec(TLista L, int num, int cont)
{
	if (L == NULL)
	{
		return cont;
	}
	else
	{
		if (L->valor != num)
		{
			cont++;
			num = L->valor;
		}
		
		return quantidadeRec(L->prox, num, cont);
	}
}
