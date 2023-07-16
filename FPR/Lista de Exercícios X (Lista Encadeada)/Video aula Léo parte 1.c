/*Como inserir no início de uma Lista Simplesmente Encadeada? */

//bibliotecas
#include<stdio.h>
#include<stdlib.h> //biblioteca do malloc

#define TRUE 1
#define FALSE 0

//declaração de tipos
typedef struct No{
	int valor; //no caso, representando uma Lista de inteiros
	struct No* prox;
} TNo;

typedef TNo* TLista;

//prototipo das funções
int inserir(TLista *L, int numero);
int remover(TLista *L, int numero);
int alterar(TLista L, int velho, int novo);
int buscar(TLista L, int numero);
void exibir(TLista L);

//main
void main ()
{
	TLista L1;
	
	inserir (&L1, 10);
	inserir (&L1, 50);
	inserir (&L1, 30);
	inserir (&L1, 47);
	inserir (&L1, 45);
	
	exibir(L1);
	
}

//implementação das funções
int inserir(TLista *L, int numero)
{
	//inserir no inicio é mais barato, inserir no final é mais caro em lista
	//declaração de variaveis
	TLista aux;
	//Passo1: Alocar memória para o novo elemento
	aux = (TLista) malloc(sizeof(TNo));
	
	//testar se a memória foi alocada
	if(aux == NULL) //if(!aux)
	{
		return FALSE;
	}
	else
	{
		//Passo2: Armazenar na memória alocada o novo valor
		aux->valor=numero;
		
		//Passo3: Fazer o prox do novo nó apontar para o antigo primeiro elemento da lista
		aux->prox=*L;
		
		//Passo4: Mandar L apontar para o novo nó
		*L=aux;
		
		//retornando sucesso
		return TRUE;
	}
	
}
int remover(TLista *L, int numero)
{
	//[l]-> [10|-]-> [50|-]-> [30|-]-> [47|-]-> [45|/]
	
	//L, armazena o endereço do primeiro nó (ou seja, o endereço do nó que armazena o valor 10)
	//L->, nó (ou seja, o struct) que contém o valor 10, 
	//L->prox, armazena o endereço do segundo nó (ou seja, o endereço do nó que armazena o valor 50)
	//L->valor, o número 10
	//L->prox->valor, o numero 50
	//L->valor->prox, comando invalido!!! Valor não aponta para lugar algum (afinal, não é ponteiro)
	
	//TLista aux1, aux2;

	//aux1=L; comando valido
	//aux2=L; comando invalido, pois os aperandos são de tipos incompativeis (TLista e int)
	//aux2-L->prox; comando valido
	TLista aux; //criando um auxiliar de ponteiro
	int cont=0;
	
	aux = (TLista) malloc(sizeof(TNo));
	
	
		
	//L->valor->prox, comando invalido!!! Valor não aponta para lugar algum (afinal, não é ponteiro)
}

int alterar(TLista L, int velho, int novo)
{
	TLista aux; //criando um auxiliar de ponteiro
	int cont=0;
	
	//iniciando aux om o endereço do primeiro nó
	aux=L;
		
	//percorrendo a lista até o seu final
	while(aux!=NULL) //while (aux)
	{
		//verificando se o elemento a ser alterado foi encontrado
		if(aux->valor==velho)
		{
			//alterando o velho pelo novo
			aux->valor=novo;
			cont++; //atualizando o contador
		}
			//atualizando com 'aux' para o prox nó
			aux=aux->prox;		
	}
	return cont; //retornando a quantidade de trocas feitas
}

int buscar(TLista L, int numero)
{
	TLista aux; //criando um auxiliar de ponteiro
	
	//iniciando aux om o endereço do primeiro nó
	aux=L; 
		
	//percorrendo a lista até o seu final
	while(aux!=NULL) //while (aux)
	{
		//verificando se é o valor sendo buscado
		if(aux->valor==numero)
		{
			return TRUE;
		}
			//atualizando com 'aux' para o prox nó
			aux=aux->prox;		
	}
	//se chegou até aqui o numero não está na lista
	return FALSE;
}

void exibir(TLista L)
{
	TLista aux; //criando um auxiliar de ponteiro
	
	//verificando se a lista está vazia
	if(L==NULL) //if (!L)
	{
		printf("Lista está vazia!\n");
	}
	else
	{
		printf("Lista: ");
		
		//iniciando aux om o endereço do primeiro nó
		aux=L; 
		
		//aux endereço do nó que possui o valor que L aponta
		//aux-> (lendo: aux apontado) - o struct que guarda o valor 10; ou: o struct apontado por aux
		//aux->valor campo valor do struct apontado por aux
		//aux-.prox campo prox do struct apontado por aux
		
		//percorrendo a lista até o seu final
		while(aux!=NULL) //while (aux)
		{
			//exibindo cada elemento da lista
			printf("%d ", aux->valor);
			
			//atualizando com 'aux' para o prox nó
			aux=aux->prox;
		}
	}
}

