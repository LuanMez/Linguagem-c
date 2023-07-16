/*Quest�o 02 [2,5 pontos]:
Pede-se a implementa��o de uma fun��o recursiva
que, dada uma lista encadeada L do tipo TLista, remova
o n� que se encontra na posi��o p de L.
Observa��es:
1. Considere que o primeiro n� est� na posi��o 1 da lista (e
n�o 0);
2. Se a remo��o for realizada, o valor 1 dever� ser
retornado; caso contr�rio, a fun��o retornar� 0.*/

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
int remover(TLista* L, int remove);
int removerRec(TLista* L, int remove, TLista anterior, int n);
void imprimir(TLista L);

void main ()
{
	TLista L = NULL;
	int resultado, remove;
	
	printf("Digite o no a ser removido come�ando pelo valor 1: ");
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
		printf("A remocao n�o foi feita\n");
	}

	imprimir(L);
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
