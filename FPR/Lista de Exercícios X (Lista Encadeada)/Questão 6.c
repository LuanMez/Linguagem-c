/*QUEST�O 06:
Desenvolver uma fun��o que, dada uma lista L1,
crie uma nova lista L2, c�pia de L1.*/

#include<stdio.h>
#include<stdlib.h> //biblioteca do malloc

//declara��o de tipos
typedef struct No{
	int valor; //no caso, representando uma Lista de inteiros
	struct No* prox;
} TNo;

typedef TNo* TLista;

//prototipo das fun��es
void inserir(TLista *L, int numero);
void inserirNaL2(TLista L1, TLista *L2);
void imprimir(TLista L);

void main ()
{
	TLista L1 = NULL;
	TLista L2 = NULL;
	
	int resultado;
	
	inserir (&L1, 50);
	inserir (&L1, 30);
	inserir (&L1, 40);
	inserir (&L1, 20);
	inserir (&L1, 10);
	
	imprimir(L1);
	
	inserirNaL2(L1, &L2);
	
	imprimir(L2);
}

//implementa��o das fun��es
void inserir(TLista *L, int num)
{
	TLista aux;
	//Passo1: Alocar mem�ria para o novo elemento
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

void inserirNaL2(TLista L1, TLista *L2)
{
	//declara��o das variaveis
    TLista aux1, aux2, novo;
    
    aux1 = L1;

    while (aux1!=NULL)
	{
        novo=(TLista)malloc(sizeof(TNo)); //Criando um novo n�
        novo->valor=aux1->valor; // Definindo o valor do novo n� como o valor de aux1
        novo->prox=NULL; //Definindo o pr�ximo do novo n� como NULL

        if(*L2==NULL)
		{
            *L2=novo; //Se L2 estiver vazio, o novo n� se torna o primeiro n� de L2
        }
		else
		{
            aux2=*L2;

            while(aux2->prox!=NULL)
			{
                aux2 = aux2->prox; // Avan�a para o pr�ximo n� em L2
            }
    
            aux2->prox = novo; // Adiciona o novo n� no final de L2
        }

        aux1 = aux1->prox; // Avan�a para o pr�ximo elemento em L1
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

