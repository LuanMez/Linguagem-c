//importação de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//definição de tipos
typedef struct No {
	int valor;
	struct No* prox;
} TNo;

typedef TNo* TLista;

//protótipos das funções
int empilhar(TLista *P, int numero);
int desempilhar(TLista *P, int num, TLista *P2);
void imprimir(TLista L);

//main 
void main()
{
	//declaração de variáveis
	TLista P = NULL;  //representando a pilha inicialmente vazia
	TLista P2 = NULL;
	int resultado, num;
	
	printf("Digite o numero que voce quer retirar da pilha: ");
	scanf("%d", &num);
	
	empilhar(&P, 5);
	empilhar(&P, 1);
	empilhar(&P, 2);
	empilhar(&P, 3);
	empilhar(&P, 5);
	empilhar(&P, 4);
	empilhar(&P, 6);
	empilhar(&P, 8);
	
	printf("Antes:\n");
	imprimir(P);
	
	resultado = desempilhar(&P, num, &P2);
	
	
		printf("Depois:\n");
		imprimir(P);
}

// Função para inserir no início da pilha
int empilhar(TLista *P, int numero)
{
	// Declaração de variáveis
	TLista aux;
	
	// Passo 1: alocar memória para o novo nó
	aux = malloc(sizeof(TNo));
	
	// Verificar se a memória foi alocada
	if (!aux)
	{
		return 0;
	}
	else
	{
		// Passo 2: inserir o novo valor no campo 'valor' do novo nó
		aux->valor = numero;
		
		// Passo 3: fazer com que o campo 'prox' do novo nó aponte para o "antigo" topo da pilha
		aux->prox = *P;
		
		// Passo 4: fazer a pilha apontar para o novo nó
		*P = aux;
		
		return 1;
	}
}

// Função para remover todas as ocorrências de um número da pilha
int desempilhar(TLista *P, int num, TLista *P2)
{
	// Declaração de variáveis
	TLista aux, aux2;
	aux = *P;
	aux2 = *P2;
	
	// Verificar se a pilha está vazia
	if (!(*P))
	{
		return 0;
	}
	else
	{
		while (aux != NULL)
		{
			if (aux->valor != num)
			{
				empilhar(*P2, aux->valor);
			}
			
			aux = aux->prox;
		}
		
		// Liberar a memória dos nós removidos da pilha original
		while (*P != NULL)
		{
			aux = *P;
			*P = aux->prox;
			free(aux);
		}
		
		// Copiar os elementos da pilha auxiliar de volta para a pilha original
		while (aux2 != NULL)
		{
			empilhar(P, aux2->valor);
			aux2 = aux2->prox;
		}
		
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


