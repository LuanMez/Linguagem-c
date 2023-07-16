/*QUESTÃO 04:
Implementar uma função que, dadas duas listas 
dinâmicas do tipo TLista, verifique se estas são
iguais; isto é, contêm os mesmos elementos, na mesma ordem.*/

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
int verificar(TLista L1, TLista L2);

void main ()
{
	TLista L1 = NULL;
	TLista L2 = NULL;
	int resultado;
	
	inserir (&L1, 10);
	inserir (&L1, 30);
	inserir (&L1, 40);
	inserir (&L1, 20);
	inserir (&L1, 50);
	
	inserir (&L2, 10);
	inserir (&L2, 30);
	inserir (&L2, 40);
	inserir (&L2, 20);
	inserir (&L2, 50);
	
	
	resultado=verificar(L1, L2);
	
	if(resultado==0)
	{
		printf("As listas sao iguais\n");
	}
	else
	{
		printf("As listas NAO sao iguais\n");
	}
	imprimir(L1);
	imprimir(L2);
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

int verificar(TLista L1, TLista L2)
{	
	//percorrendo a lista até o seu final
	while(L1!=NULL && L2!=NULL) //while (aux)
	{
		//verificando se é o valor sendo buscado
		if(L1->valor!=L2->valor)
		{
			return 1; //lista diferente
		}
		//atualizando com 'aux' para o prox nó
		L1=L1->prox;	
		L2=L2->prox;		
	}
	if(L1 == NULL && L2 == NULL)
	{
		return 0; //lista iguais
	}
	else
	{
		return 1; //lista diferente
	}
}

