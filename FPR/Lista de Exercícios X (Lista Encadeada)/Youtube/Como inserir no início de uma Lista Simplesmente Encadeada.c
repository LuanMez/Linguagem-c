/*Como inserir no início de uma Lista Simplesmente Encadeada? */

//bibliotecas
#include<stdio.h>
#include<stdlib.h>

//declaração de tipos
typedef struct No{
	int valor; //no caso, representando uma Lista de inteiros
	struct No* prox;
} TNo;

typedef TNo* TLista;

//prototipo da função
void inserir(TLista *L, int num);
void exibir(TLista L);

//main
void main ()
{
	TLista L1;
	int num;
	
	inserir (&L1, 10);
	inserir (&L1, 30);
	inserir (&L1, 40);
	inserir (&L1, 20);
	inserir (&L1, 50);
	
	printf("Digite o valor a ser inserido: ");
	scanf("%d", &num);
	
	inserir(&L1, num);
	
	exibir(L1);
}

//implementação da função
void inserir(TLista *L, int num)
{
	TLista aux;
	//Passo1: Alocar memória para o novo elemento
	aux = (TLista) malloc(sizeof(TNo));
	
	if(aux==NULL)
	{
		printf("Ocorreu um erro");
	}
	else
	{
		aux->valor=num;
		aux->prox=*L;
		*L=aux;
	}
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

