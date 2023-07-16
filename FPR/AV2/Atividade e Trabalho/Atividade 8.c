/*Fazer uma função que, dada uma Fila F, do tipo
TLista, e dois valores inteiros num1 e num2,
remova da fila todos os valores pertencentes ao
intervalo definido por num1 e num2, inclusive.

Nota: para a solução desta atividade,
considerar a implementação clássica de filas!*/

#include <stdio.h>
#include <stdlib.h> //biblioteca do malloc

// declaração de tipos
typedef struct No {
    int valor; //no caso, representando uma Lista de inteiros
    struct No* prox;
} TNo;

typedef TNo* TLista;

//Protótipo das funções
int inserirFila(TLista* F, TLista* U, int numero);
int removerFila(TLista* F, TLista* U, int* valor);
void exibir(TLista L);
void removerIntervalo(TLista* F, TLista* U, int num1, int num2);

void main()
{
    TLista F = NULL, U = NULL;
    int num1, num2;
	
    printf("Digite o valor de num1: ");
    scanf("%d", &num1);
	
    printf("Digite o valor de num2: ");
    scanf("%d", &num2);
	
    inserirFila(&F, &U, 2);
    inserirFila(&F, &U, 4);
    inserirFila(&F, &U, 6);
    inserirFila(&F, &U, 8);
    inserirFila(&F, &U, 10);
	
    printf("Fila antes:\n");
    exibir(F);
	
    removerIntervalo(&F, &U, num1, num2);
	
    printf("\nFila depois:\n");
    exibir(F);
}

//implementação das funções
int inserirFila(TLista* F, TLista* U, int numero)
{
    // declaração de variáveis
    TLista aux;
	
    // Passo 1: alocar memória para o novo valor
    aux = (TLista)malloc(sizeof(TNo));
	
    // verificar se a memória foi alocada
    if(aux==NULL)
	{
        return 0;
    }
	else
	{
        // Passo 2: inserir o novo valor no campo 'valor' da memória recém-alocada
        aux->valor=numero;
		
        // Passo 3: fazer o campo 'prox' do novo nó apontar para NULL
        aux->prox=NULL;
		
        // Passo 4: fazer o 'antigo último elemento' apontar para o novo nó
        if(*U)
		{
            (*U)->prox=aux;
        }
		else
		{
            *F=aux;
        }
		
        // Passo 5: atualizar o ponteiro 'U'
        *U=aux;

        return 1;
    }
}

int removerFila(TLista* F, TLista* U, int* valor) {
    // verifica se a fila está vazia
    if (*F==NULL)
	{
        return 0;
    }
	else
	{
        TLista aux = *F;
        *valor = aux->valor;
        *F = aux->prox;
        free(aux);

        // verifica se a fila está vazia após a remoção
        if (*F==NULL)
		{
            *U=NULL;
        }

        return 1;
    }
}

void exibir(TLista L)
{
    while (L != NULL)
	{
        printf("%d ", L->valor);
        L = L->prox;
    }
    printf("\n");
}

void removerIntervalo(TLista* F, TLista* U, int num1, int num2)
{
    TLista novo=NULL;
    TLista NU=NULL;
    int valor;

    while(removerFila(F, U, &valor))
	{
        if(valor<num1||valor>num2)
		{
            inserirFila(&novo, &NU, valor);
        }
    }

    while(removerFila(&novo, &NU, &valor))
	{
        inserirFila(F, U, valor);
    }
}
