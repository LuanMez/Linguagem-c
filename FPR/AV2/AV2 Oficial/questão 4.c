/*Quest�o 04 [2,5 pontos]:
Dadas duas pilhas P1 e P2, ambas do tipo TLista, desenvolver uma fun��o que determine quantos elementos de P1
tamb�m est�o em P2.
Notas:
1. Caso determinado valor apare�a mais de uma vez em P1, a solu��o final poder� cont�-lo tantas vezes
quantas forem as suas ocorr�ncias;
2. Caso alguma estrutura auxiliar seja necess�ria, esta ser� obrigatoriamente uma pilha ou uma fila;
3. A solu��o apresentada deve respeitar as regras de manipula��o de pilhas e/ou filas, em sua vers�o
cl�ssica.*/

//bibliotecas
#include<stdio.h>
#include<stdlib.h> //biblioteca do malloc

//defini��o de constantes
#define TRUE 1
#define FALSE 0

//declara��o de tipos
typedef struct No{
	int valor; //no caso, representando uma Lista de inteiros
	struct No* prox;
} TNo;

typedef TNo* TLista;

//prot�tipos das fun��es
int empilhar (TLista *P, int numero);
int verificar(TLista *L1, TLista *L2, TLista *L1_2, TLista *L2_2);
int desempilhar (TLista *P, int *numero);

void main ()
{
	TLista L1 = NULL;
	TLista L2 = NULL;
	TLista L1_2 = NULL;
	TLista L2_2 = NULL;
	int resultado;
	
	empilhar (&L1, 10);
	empilhar (&L1, 15);
	empilhar (&L1, 12);
	empilhar (&L1, 10);
	empilhar (&L1, 7);
	
	empilhar (&L2, 8);
	empilhar (&L2, 15);
	empilhar (&L2, 10);
	empilhar (&L2, 18);
	
	resultado=verificar(&L1, &L2, &L1_2, &L1_2);

	if(resultado==0)
	{
		printf("tem %d elementos iguais entre as pilhas L1 e L2");
	}
	else
	{
		printf("Deu algum erro\n");
	}
}

//inserindo no in�cio da lista
int empilhar (TLista *P, int numero)
{
	//declara��o de vari�veis
	TLista aux;
	
	//Passo 1: alocar mem�ria para o novo valor
	aux = malloc (sizeof(TNo));
	
	//verificar se a mem�ria foi alocada
	if (!aux)
	{
		return FALSE;
	}
	else
	{
		//Passo 2: inserir o novo valor no campo 'valor' da mem�ria rec�m-alocada
		aux->valor = numero;
		
		//Passo 3: fazer com que o campo 'prox' da mem�ria rec�m-alocada
		//aponte para o "antigo" topo da pilha
		aux->prox = *P;
		
		//Passo 4: Faz a pilha apontar para o novo n�
		*P = aux;
		
		return TRUE;
	}
}

int verificar(TLista *L1, TLista *L2, TLista *L1_2, TLista *L2_2)
{
	int n;
	
	TLista aux, aux2;
	aux=*L2;
	
	if((!*L1) || (!*L2))
	{
		return 1;
	}
	else
	{
		//tentei nesse parte ficar empilhando e desempilhando e no final as pilhas 
		//L1 e L2 voltarem a serem originais, L1_2 e L2_2 s�o pilhas auxiliares
		while(*L1!=NULL)
		{
			if((*L1->valor)==(aux->valor))
			{
				cont++;
				
				empilhar (&(*L2_2), aux->valor); //botando o primeiro valor na L2_2
				desempilhar (&(*L2), aux->valor); //tirando o primeiro valor
			}
			else
			{
				empilhar (&(*L2_2), aux->valor); //botando o primeiro valor na L2_2
				desempilhar (&(*L2), aux->valor); //tirando o primeiro valor
			}
			while((*L2_2)!=NULL)
			{
				empilhar (&(*L2), L2_2->valor);
				desempilhar (&(*L2_2), L2_2->valor);
			}
			empilhar (&(*L1_1), L1->valor);
			desempilhar (&(*L1), L1->valor);
		}
		while((*L1_1)!=NULL)
		{
			empilhar (&(*L1), L1_1->valor);
			desempilhar (&(*L1_1), L1_1->valor);
		}
	}
}

int desempilhar (TLista *P, int *numero)
{
	//declara��o de vari�veis
	TLista aux;
	
	//verificando se a pilha est� vazia
	//if (*P == NULL)
	if (!(*P))
	{
		return FALSE;
	}
	else
	{
		aux = *P;
		*P = aux->prox;  //ou   *P = (*P)->prox;
		
		//salvando em 'numero' o valor que estava no topo
		*numero = aux->valor;
		
		free (aux);
		
		return TRUE;
	}		
}
