/*
	FAETERJ-Rio
	FPR - Manh� (21/06/2023)
	
	Pilhas (din�micas)
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//defini��o de constantes
#define TRUE 1
#define FALSE 0

//defini��o de tipos
typedef struct No {
	int valor;
	struct No* prox;
} TNo;

typedef TNo* TLista;

//prot�tipos das fun��es
int empilhar (TLista *P, int numero);
int desempilhar (TLista *P, int *numero);
int topo (TLista P, int *t);

int menu ();

//main 
void main ()
{
	//declara��o de vari�veis
	TLista P = NULL;  //representando a pilha inicialmente vazia
	int numero, op;
	
	do
	{
		system ("CLS");		//limpar tela    clrscr();
		
		//exibindo o meu ao usu�rio
		op = menu ();
		
		//verificando a op��o escolhida
		switch (op)
		{
			//Empilhar
			case 1: printf ("\nEntre com o valor a ser empilhado: ");
			        scanf ("%d", &numero);
			        
			        //chamando a fun��o
			        if (empilhar (&P, numero) == TRUE)
			        {
			        	printf ("\n\tInsercao realizada com sucesso na pilha!\n");
					}
					else
					{
						printf ("\n\tERRO: insercao nao realizada na pilha!\n");
					}
					break;

			//Desempilhar
			case 2: //chamando a fun��o
			        if (desempilhar (&P, &numero) == TRUE)
			        {
			        	printf ("\n\tO numero %d foi desempilhado\n", numero);
					}
					else
					{
						printf ("\n\tERRO: Pilha vazia!");
					}
					break;

			//Topo
			case 3: //chamando a fun��o
			        if (topo (P, &numero) == TRUE)
			        {
			        	printf ("\n\tTopo da pilha: %d\n", numero);
					}
					else
					{
						printf ("\n\tERRO: Pilha vazia!");
					}
					break;
					
			//Sa�da
			case 4: printf ("\n\nPrograma finalizado!");
			        break;
			        
			default: printf ("\n\nOpcao invalida! Tente novamente.");
		}
		
		system ("PAUSE");
	}
	while (op != 4);
}

//implementa��o das fun��es

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

int topo (TLista P, int *t)
{
	//verificando se a pilha est� vazia
	if (!P)
	{
		return FALSE;
	}
	else
	{
		*t = P->valor;
		
		return TRUE;
	}
}

int menu ()
{
	//declara��o de vari�veis
	int opcao;
	
	//exibindo o meu ao usu�rio
	printf ("Menu de Operacoes:\n\n");
	printf ("(1) Empilhar\n");
	printf ("(2) Desempilhar\n");
	printf ("(3) Topo\n");
	printf ("(4) Sair\n\n");
	
	//lendo a op��o do usu�rio
	printf ("Entre com a sua opcao: ");
	scanf ("%d", &opcao);
	
	//retornando a op��o escolhida
	return opcao;
}
