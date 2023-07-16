/*
	FAETERJ-Rio
	FPR - Manh� (21/06/2023)
	
	Filas (din�micas)
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
int enfilar (TLista *F, TLista *U, int numero);
int desenfilar (TLista *F, TLista *U, int *numero);
int primeiro (TLista F, int *p);

int menu ();

//main 
void main ()
{
	//declara��o de vari�veis
	TLista F = NULL, U = NULL;  //representando a pilha inicialmente vazia
	int numero, op;
	
	do
	{
		system ("CLS");		//limpar tela    clrscr();
		
		//exibindo o meu ao usu�rio
		op = menu ();
		
		//verificando a op��o escolhida
		switch (op)
		{
			//Enfilar
			case 1: printf ("\nEntre com o valor a ser enfilado: ");
			        scanf ("%d", &numero);
			        
			        //chamando a fun��o
			        if (enfilar (&F, &U, numero) == TRUE)
			        {
			        	printf ("\n\tInsercao realizada com sucesso na fila!\n");
					}
					else
					{
						printf ("\n\tERRO: insercao nao realizada na fila!\n");
					}
					break;

			//Desenfilar
			case 2: //chamando a fun��o
			        if (desenfilar (&F, &U, &numero) == TRUE)
			        {
			        	printf ("\n\tO numero %d foi desenfilado\n", numero);
					}
					else
					{
						printf ("\n\tERRO: Fila vazia!");
					}
					break;

			//Primeiro
			case 3: //chamando a fun��o
			        if (primeiro (F, &numero) == TRUE)
			        {
			        	printf ("\n\tPrimeiro elemento da fila: %d\n", numero);
					}
					else
					{
						printf ("\n\tERRO: Fila vazia!");
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
int enfilar (TLista *F, TLista *U, int numero)
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
		
		//Passo 3: fazer o campo 'prox' do novo n� apontar para NULL
		aux->prox = NULL;
		
		//Passo 4: fazer o 'antigo �ltimo elemento' apontar para o novo n�
		if (*U)
		{
			(*U)->prox = aux;
		}
		else
		{
			*F = aux;
		}
		
		//Passo 5: atualizar o ponteiro 'U'
		*U = aux;   //ou   *U = (*U)->prox;	

		return TRUE;
	}
}

int desenfilar (TLista *F, TLista *U, int *numero)
{
	//declara��o de vari�veis
	TLista aux;
	
	//verificando se a fila est� vazia
	//if (*F == NULL)
	if (!(*F))
	{
		return FALSE;
	}
	else
	{
		aux = *F;
		*F = aux->prox;  //ou   *F = (*F)->prox;
		
		//verificando se a fila se tornou nula. Ou seja,
		//foi removido o seu �ltimo elemento
		if (!(*F))
		{
			*U = NULL;
		}
		
		//salvando em 'numero' o valor que era o primeiro da fila
		*numero = aux->valor;
		
		free (aux);
		
		return TRUE;
	}		
}

int primeiro (TLista F, int *p)
{
	//verificando se a fila est� vazia
	if (!F)
	{
		return FALSE;
	}
	else
	{
		*p = F->valor;
		
		return TRUE;
	}
}

int menu ()
{
	//declara��o de vari�veis
	int opcao;
	
	//exibindo o meu ao usu�rio
	printf ("Menu de Operacoes:\n\n");
	printf ("(1) Enfilar\n");
	printf ("(2) Desenfilar\n");
	printf ("(3) Primeiro\n");
	printf ("(4) Sair\n\n");
	
	//lendo a op��o do usu�rio
	printf ("Entre com a sua opcao: ");
	scanf ("%d", &opcao);
	
	//retornando a op��o escolhida
	return opcao;
}
