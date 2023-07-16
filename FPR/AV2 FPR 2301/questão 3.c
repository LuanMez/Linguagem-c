/*Quest�o 03 [2,5 pontos]:
Considere a exist�ncia de uma lista encadeada L, do
tipo TLista, e um n�mero inteiro n. Fazer uma fun��o
que crie duas novas listas, conforme descrito abaixo:
L1: conter� todos os elementos de L que sejam
inferiores a n;
 L2: conter� todos os elementos de L que sejam
maiores ou iguais a n.*/

//bibliotecas
#include<stdio.h>
#include<stdlib.h> //biblioteca do malloc

//declara��o de tipos
typedef struct No{
	int valor; //no caso, representando uma Lista de inteiros
	struct No* prox;
} TNo;

typedef TNo* TLista;

//prototipo das fun��es
int inserir(TLista* L, int numero);
void imprimir(TLista L);
int criar(TLista L, TLista* L1, TLista* L2, int n);

void main ()
{
	TLista L = NULL;
	TLista L1 = NULL;
	TLista L2 = NULL;
	int resultado, n;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	inserir (&L, 9);
	inserir (&L, 8);
	inserir (&L, 7);
	inserir (&L, 4);
	inserir (&L, 5);
	inserir (&L, 4);
	inserir (&L, 3);
	inserir (&L, 1);
	
	resultado=criar(L, &L1, &L2, n);

	if(resultado==1)
	{
		printf("As listas foram criadas com sucesso\n");
		printf("Lista L1:\n");
		imprimir(L1);
		printf("Lista L2:\n");
		imprimir(L2);
	}
	else
	{
		printf("As listas NAO foram criadas com sucesso\n");
	}
}

//implementa��o das fun��es
int inserir(TLista *L, int num)
{
	TLista aux;
	//Passo1: Alocar mem�ria para o novo elemento
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

int criar(TLista L, TLista* L1, TLista* L2, int n)
{
	TLista aux=L;
	TLista novo, aux1=*L1, aux2=*L2;

	while(aux!=NULL)
	{
		novo=(TLista)malloc(sizeof(TNo));
		novo->valor=aux->valor;
		novo->prox=NULL;

		if(aux->valor<n)
		{
			if(*L1==NULL)
			{
				*L1=novo;
			}
			else
			{
				aux1->prox=novo;
			}
			aux1=novo;
		}
		else
		{
			if(*L2==NULL)
			{
				*L2=novo;
			}
			else
			{
				aux2->prox=novo;
			}
			aux2=novo;
		}
		aux=aux->prox;
	}

	if(*L1==NULL || *L2==NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
