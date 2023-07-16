/*Implementar uma função que, dada uma lista L1
do tipo TLista, crie uma nova lista, L2 (de tipo
diferente de TLista), contendo, em cada nó, um
elemento de L1 e a quantidade de vezes que
este aparece em L1.
Exemplo:
Elementos de L1: 1 4 5 7 4 3 2 5 4 7 1 2
A lista L2 conterá os seguintes nós:
• Um nó contendo o valor 1 e a
quantidade 2 (pois o número 1
aparece 2 vezes em L1);
• Um nó contendo o valor 4 e a
quantidade 3;
• Um nó contendo o valor 5 e a
quantidade 2;
• Um nó contendo o valor 7 e a
quantidade 2;
• Um nó contendo o valor 3 e a
quantidade 1;
• Um nó contendo o valor 2 e a
quantidade 2.
Observação: não há ordem definida para os nós
de L2. Ou seja, o primeiro elemento da lista L1
não precisa estar na primeira posição de L2.*/

//bibliotecas
#include<stdio.h>
#include<stdlib.h> //biblioteca do malloc

//declaração de tipos
typedef struct No1{
	int valor; //no caso, representando uma Lista de inteiros
	struct No1* prox;
} TNo1;

typedef struct No2{
	int valor; //no caso, representando uma Lista de inteiros
	int quant; //representa a quantidade que o numero aparece
	struct No2* prox;
} TNo2;

typedef TNo1* TLista1;
typedef TNo2* TLista2;

//prototipo da função
int inserir(TLista1 *L, int num);
void inserindoLista2(TLista1 L1, TLista2 *L2);
void exibirLista2(TLista2 L2);

void main ()
{
	TLista1 L1 = NULL;
	TLista2 L2 = NULL;
	
	inserir (&L1, 1);
	inserir (&L1, 3);
	inserir (&L1, 4);
	inserir (&L1, 2);
	inserir (&L1, 5);
	inserir (&L1, 3);
	inserir (&L1, 4);
	inserir (&L1, 5);
	inserir (&L1, 5);
	
	inserindoLista2(L1,&L2);
	
	exibirLista2(L2);
}

//implementação da função
int inserir(TLista1 *L, int num)
{
	TLista1 aux;
	//Passo1: Alocar memória para o novo elemento
	aux = (TLista1) malloc(sizeof(TNo1));
	
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

void inserindoLista2(TLista1 L1, TLista2* L2)
{
	//Declaração das variaveis
    TLista1 aux, aux1;
    TLista2 aux2, novo;
    int cont=0;
    int cont2=0;
    
    aux=L1;
	
    while(aux!=NULL)
	{
		//zerando os contadores
        cont=0;
        cont2=0;

        aux1=L1;
        
        while(aux1!=NULL)
		{
			//verificando se tem valores iguais
            if (aux->valor==aux1->valor)
			{
                cont++;//se tem contador aumenta 1;
            }
            aux1=aux1->prox; //atualizando o ponteiro de aux1;
        }

        aux2=*L2;
        
        while(aux2!=NULL)
		{
			//verificando se tem algum valor em aux2 que pertence a aux
            if (aux2->valor==aux->valor)
			{
                cont2=1; //se tiver o cont2 recebe 1 e consequentemente nao vai entrar na lista2
            }
            aux2=aux2->prox; //atualizando o aux2
        }

        if (cont2==0) //se cont2==0 não tem elementos em comum na aux e aux2
		{
            novo=(TLista2)malloc(sizeof(TNo2)); //Alocar memória para o novo elemento
            novo->valor=aux->valor; //novo elemento recebe o valor de aux
            novo->quant=cont; //novo elemento recebe o cont e armazena em quant
            novo->prox=*L2; //Fazer o prox do novo nó apontar para o antigo primeiro elemento da lista
            *L2=novo; //Mandar L2 apontar para o novo nó
        }

        aux=aux->prox; //atualizando o ponteiro de aux
    }
}

void exibirLista2(TLista2 L2)
{
	TLista2 aux = L2;
	
	if(!aux)
	{
		printf("A lista esta vazia!");
	}
	else
	{
	    while(aux!=NULL)
		{
	        printf("Numero: %d, Quantidade: %d\n", aux->valor, aux->quant);
	        aux = aux->prox;
	    }	
	}
}


