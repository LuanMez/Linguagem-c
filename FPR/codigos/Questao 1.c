/*Questão 01 [2,5 pontos]:
Para cada uma das estruturas apresentadas abaixo,
descrever o algoritmo que permite a remoção de todas
as ocorrências de determinado número, considerando
a implementação clássica dessas estruturas:
a. Uma pilha;
b. Uma fila.
Notas:
i. Os elementos remanescentes devem
permanecer na mesma ordem original;
ii. Caso alguma estrutura auxiliar seja
necessária, ela poderá ser uma pilha ou uma
fila (devendo especificar qual foi utilizada na
solução).*/

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
int empilhar (TLista *P, int numero);
int desempilhar (TLista *P, int num, TLista *P2);
void imprimir(TLista L);


//main 
void main ()
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
	
	resultado=desempilhar(&P, num, &P2);
	
	if(resultado==1)
	{
		printf("Depois:\n");
		imprimir(P);	
	}
	else
	{
		printf("Troca não feita");
	}
}
	
//inserindo no início da lista
int empilhar (TLista *P, int numero)
{
	//declaração de variáveis
	TLista aux;
	
	//Passo 1: alocar memória para o novo valor
	aux = malloc (sizeof(TNo));
	
	//verificar se a memória foi alocada
	if (!aux)
	{
		return 0;
	}
	else
	{
		//Passo 2: inserir o novo valor no campo 'valor' da memória recém-alocada
		aux->valor = numero;
		
		//Passo 3: fazer com que o campo 'prox' da memória recém-alocada
		//aponte para o "antigo" topo da pilha
		aux->prox = *P;
		
		//Passo 4: Faz a pilha apontar para o novo nó
		*P = aux;
		
		return 1;
	}
}

int desempilhar (TLista *P, int num, TLista *P2)
{
	//declaração de variáveis
	TLista aux, aux2;
	aux=*P;
	aux2=*P2;
	
	//verificando se a pilha está vazia
	//if (*P == NULL)
	if (!(*P))
	{
		return 0;
	}
	else
	{
		while(aux!=NULL)
		{	
			if(aux->valor!=num)
			{
				empilhar(P2, aux->valor);
			}
			else
			{
				aux = *P;
				*P = aux->prox;  //ou   *P = (*P)->prox;
				
				//salvando em 'numero' o valor que estava no topo
				num = aux->valor;
				
				free (aux);	
			}
		}
		while(aux2!=NULL)
		{
			empilhar(P, aux2->valor);
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
