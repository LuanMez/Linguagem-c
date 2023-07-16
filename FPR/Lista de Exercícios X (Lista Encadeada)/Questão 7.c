/*QUESTÃO 07:
Desenvolver uma função que insira um número inteiro N na i-ésima posição de uma lista
encadeada L.
Observação: caso a posição i informada seja inválida, a função deverá retornar o valor 0; caso
contrário, o retorno será igual a 1.*/

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
int troca(TLista *L, int n, int x);

void main ()
{
	TLista L = NULL;
	int n, x, resultado;
	
	printf("Digite o valor n e a posicao q queira q ele apareca: ");
	scanf("%d %d", &n, &x);
	
	inserir (&L, 1);
	inserir (&L, 3);
	inserir (&L, 4);
	inserir (&L, 5);
	inserir (&L, 10);
	inserir (&L, 32);
	inserir (&L, 14);
	inserir (&L, 54);
	
	
	resultado=troca(&L, n, x);
	
	if(resultado==0)
	{
		printf("A troca da Lista foi feita\n");
		imprimir(L);
	}
	else
	{
		printf("A troca da Lista NAO foi feita\n");
		imprimir(L);
	}
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

int troca(TLista *L, int n, int x)
{
	//declaração das variaveis
	int i=0;
	TLista aux;
	
	aux=*L;
	
	if(aux==NULL)
	{
		return 1;
	}
	else
	{	
		//percorrendo a lista até o seu final
		while(aux!=NULL) //while (aux)
		{
			i++;
			//verificando se é o valor sendo buscado
			if(i==x)
			{
				aux->valor=n;
				return 0; //achou a posição certa
			}
			//atualizando com 'aux' para o prox nó
			aux=aux->prox;	
		}
		return 1;
	}
}
