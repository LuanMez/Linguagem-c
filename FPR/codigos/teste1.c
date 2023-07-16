//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//defini��o de tipos
typedef struct No {
	int valor;
	struct No* prox;
} TNo;

typedef TNo* TLista;

//prot�tipos das fun��es
int empilhar(TLista *P, int numero);
int desempilhar(TLista *P, int num, TLista *P2);
void imprimir(TLista L);

//main 
void main()
{
	//declara��o de vari�veis
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

// Fun��o para inserir no in�cio da pilha
int empilhar(TLista *P, int numero)
{
	// Declara��o de vari�veis
	TLista aux;
	
	// Passo 1: alocar mem�ria para o novo n�
	aux = malloc(sizeof(TNo));
	
	// Verificar se a mem�ria foi alocada
	if (!aux)
	{
		return 0;
	}
	else
	{
		// Passo 2: inserir o novo valor no campo 'valor' do novo n�
		aux->valor = numero;
		
		// Passo 3: fazer com que o campo 'prox' do novo n� aponte para o "antigo" topo da pilha
		aux->prox = *P;
		
		// Passo 4: fazer a pilha apontar para o novo n�
		*P = aux;
		
		return 1;
	}
}

// Fun��o para remover todas as ocorr�ncias de um n�mero da pilha
int desempilhar(TLista *P, int num, TLista *P2)
{
	// Declara��o de vari�veis
	TLista aux, aux2;
	aux = *P;
	aux2 = *P2;
	
	// Verificar se a pilha est� vazia
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
		
		// Liberar a mem�ria dos n�s removidos da pilha original
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


