/*QUESTÃO 05:
Implementar uma função que, dadas duas listas dinâmicas 
do tipo TLista, verifique se elaspossuem os mesmos 
elementos, independente da ordem na qual apareçam.*/
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
void inserir(TLista *L, int numero);
int verificar(TLista L1, TLista L2);

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
	
	inserir (&L2, 50);
	inserir (&L2, 30);
	inserir (&L2, 40);
	inserir (&L2, 20);
	inserir (&L2, 10);
	
	
	resultado=verificar(L1, L2);
	printf("%d ", resultado);
	
	if(resultado==1)
	{
		printf("As listas possuem os mesmos elementos\n");
	}
	else
	{
		printf("As listas NAO possuem os mesmos elementos\n");
	}
}

//implementação das funções
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

int verificar(TLista L1, TLista L2)
{	
	//declaração das variaveis
	TLista aux1, aux2;
	int veri=0;
	
	aux1=L1;
	//percorrendo a L1 até o seu final
	while(aux1!=NULL) //while (aux)
	{
		veri=0;
		
		aux2=L2;
		//percorrendo a L1 até o seu final
		while(aux2!=NULL)
		{
			if(aux1->valor==aux2->valor)
			{
				veri=1; // se veri fica 0 tem alguem igual na lista
			}
			//atualizando o L2
			aux2=aux2->prox;		
		}
		if(veri==0)
		{
			return 0; //retorna 0 caso o não tenha nenhum igual
		}
		
		//atualizando o L1
		aux1=aux1->prox;
	}
	
	aux2=L2;
	//percorrendo a L1 até o seu final
	while(aux2!=NULL) //while (aux)
	{
		veri=0;
		
		aux1=L1;
		//percorrendo a L1 até o seu final
		while(aux1!=NULL)
		{
			if(aux1->valor==aux2->valor)
			{
				veri=1; // se veri fica 0 tem alguem igual na lista
			}
			//atualizando o L2
			aux1=aux1->prox;		
		}
		if(veri==0)
		{
			return 0; //retorna 0 caso o não tenha nenhum igual
		}
		
		//atualizando o L1
		aux2=aux2->prox;
	}
	if(veri==1)
	{
		return 1;
	}
}

