/*
	FAETERJ-Rio
	FPR - Manh� (25/05/2023)
	
	Listas encadeadas (listas din�micas), sem repeti��o de elementos.
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
int inserir (TLista *L, int numero);
int remover (TLista *L, int numero);
int alterar (TLista L, int num1, int num2);
TLista buscar (TLista L, int numero);
void exibir (TLista L);

int menu ();

//main 
void main ()
{
	//declara��o de vari�veis
	TLista L = NULL;  //representando a lista inicialmente vazia
	int num1, num2, op;
	TLista resp;	
	
	do
	{
		system ("CLS");		//limpar tela    clrscr();
		
		//exibindo o meu ao usu�rio
		op = menu ();
		
		//verificando a op��o escolhida
		switch (op)
		{
			//Inser��o
			case 1: printf ("\nEntre com o valor a ser inserido: ");
			        scanf ("%d", &num1);
			        
			        //chamando a fun��o
			        if (inserir (&L, num1) == TRUE)
			        {
			        	printf ("\n\tInsercao realizada com sucesso!");
					}
					else
					{
						printf ("\n\tERRO: insercao nao realizada!");
					}
					break;

			//Remo��o
			case 2: printf ("\nEntre com o valor a ser removido: ");
			        scanf ("%d", &num1);
			        
			        //chamando a fun��o
			        if (remover (&L, num1) == TRUE)
			        {
			        	printf ("\n\tRemocao realizada!");
					}
					else
					{
						printf ("\n\tERRO: remocao nao realizada!");
					}
					break;

			//Altera��o
			case 3: printf ("\nEntre com o valor a ser alterado: ");
			        scanf ("%d", &num1);
			        
			        printf ("\nEntre com o novo valor: ");
			        scanf ("%d", &num2);
			        
			        //chamando a fun��o
			        if (alterar (L, num1, num2) == TRUE)
			        {
			        	printf ("\n\tAlteracao realizada!");
					}
					else
					{
						printf ("\n\tERRO: alteracao nao realizada!");
					}
					break;

			//Busca
			case 4: printf ("\nEntre com o valor a ser buscado: ");
			        scanf ("%d", &num1);
			        
			        //chamando a fun��o
			        resp = buscar (L, num1);
			        
					if (resp != NULL)
			        {
			        	printf ("\n\tO valor %d foi encontrado na lista!", num1);
					}
					else
					{
						printf ("\n\tO valor %d NAO foi encontrado na lista!", num1);
					}
					break;

			//Exibir
			case 5: exibir (L);
					break;
					
			//Sa�da
			case 6: printf ("\n\nPrograma finalizado!");
			        break;
			        
			default: printf ("\n\nOpcao invalida! Tente novamente.");
		}
		
		system ("PAUSE");
	}
	while (op != 6);
}

//implementa��o das fun��es

//inserindo no in�cio da lista
int inserir (TLista *L, int numero)
{
	//declara��o de vari�veis
	TLista aux;
	
	//verificando se 'numero' n�o existe na lista
	if (buscar (*L, numero) == NULL)
	{	
		//Passo 1: alocar mem�ria para o novo valor
		aux = malloc (sizeof(TNo));
		
		//verificar se a mem�ria foi alocada
		if (!aux)
		{
			return FALSE;
		}
		else
		{
			//Passo 2: inserir o novo valor no campo 'valor' da mem�ria rc�m-alocada
			aux->valor = numero;
			
			//Passo 3: fazer com que o campo 'prox' da mem�ria rec�m-alocada
			//aponte para o "antigo" primeiro n� da lista
			aux->prox = *L;
			
			//Passo 4: Faz a lista apontar para o novo n�
			*L = aux;
			
			return TRUE;
		}
	}
	else
	{
		return FALSE;
	}
}

int remover (TLista *L, int numero)
{
	//declara��o de vari�veis
	TLista anterior, atual;
	
	//verificando se a lista n�o est� vazia
	if (*L)
	{
		//verificando se 'numero' � o primeiro elemento da lista. 
		if ((*L)->valor == numero)
		{
			atual = *L;
			*L = atual->prox;  //ou   *L = (*L)->prox;
			free (atual);
			
			//remo��o realizada
			return TRUE;	
		}
		else
		{
			//colocando os ponteiros 'anterior' e 'atual' nas duas primeiras
			//posi��es da lista
			anterior = *L;
			atual = anterior->prox;
			
			//percorrendo toda a lista
			//while (atual != NULL)
			while (atual)
			{
				//verificando se 'numero' foi encontrado
				if (atual->valor == numero)
				{
					anterior->prox = atual->prox;
					free (atual);
					
					//remo��o realizada
					return TRUE;
				}
				else
				{
					//atualizando os ponteiros
					anterior = atual;
					atual = anterior->prox;
				}
			}
		}
	}
	
	//remo��o n�o foi realizada, pois o n�mero n�o foi encontrado
	return FALSE;
}

int alterar (TLista L, int num1, int num2)
{
	//declara��o de vari�veis
	TLista pos1, pos2;
	
	//buscando 'num1'
	pos1 = buscar (L, num1);
	
	//buscando 'num2', caso 'num1' exista na lista
	if (pos1)
	{
		pos2 = buscar (L, num2);
		
		//se 'num2' n�o existir, a altera��o pode ser realizada
		if (!pos2)
		{
			pos1->valor = num2;
			
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
	else
	{
		return FALSE;
	}
}

TLista buscar (TLista L, int numero)
{
	//declara��o de vari�veis
	TLista aux;
	
	//fazendo 'aux' apontar para o primeiro n�
	aux = L;
	
	//percorrendo toda a lista
	while (aux)
	{
		//verificando se 'numero' foi encontrado
		if (aux->valor == numero)
		{
			return aux;
		}
			
		//atualizar o aux
		aux = aux->prox;
	}
	
	return NULL;
}

void exibir (TLista L)
{
	//declara��o de vari�veis
	TLista aux;
	
	//verificando se a lista est� vazia
	//if (L == NULL)
	if (!L)
	{
		printf ("\n\nLista vazia!\n");
	}
	else
	{
		printf ("\n\nLista: ");	

		//fazendo 'aux' apontar para o primeiro n�
		aux = L;
	
		//percorrendo toda a lista
		//while (aux != NULL)
		while (aux)
		{
			//exibindo cada elemento da lista
			printf ("%d ", aux->valor);
			
			//atualizar o aux
			aux = aux->prox;
		}
	}
}

int menu ()
{
	//declara��o de vari�veis
	int opcao;
	
	//exibindo o meu ao usu�rio
	printf ("Menu de Operacoes:\n\n");
	printf ("(1) Inserir\n");
	printf ("(2) Remover\n");
	printf ("(3) Alterar\n");
	printf ("(4) Buscar\n");
	printf ("(5) Exibir\n");
	printf ("(6) Sair\n\n");
	
	//lendo a op��o do usu�rio
	printf ("Entre com a sua opcao: ");
	scanf ("%d", &opcao);
	
	//retornando a op��o escolhida
	return opcao;
}
