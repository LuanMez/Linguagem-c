/*Como inserir no in�cio de uma Lista Simplesmente Encadeada? */

//bibliotecas
#include<stdio.h>
#include<stdlib.h> //biblioteca do malloc

#define TRUE 1
#define FALSE 0

//declara��o de tipos
typedef struct No{
	int valor; //no caso, representando uma Lista de inteiros
	struct No* prox;
} TNo;

typedef TNo* TLista;

//prototipo das fun��es
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

//implementa��o das fun��es
int inserir(TLista *L, int numero)
{
	//inserir no inicio � mais barato, inserir no final � mais caro em lista
	//declara��o de variaveis
	TLista aux;
	//Passo1: Alocar mem�ria para o novo elemento
	aux = (TLista) malloc(sizeof(TNo));
	
	//testar se a mem�ria foi alocada
	if(aux == NULL) //if(!aux)
	{
		return FALSE;
	}
	else
	{
		//Passo2: Armazenar na mem�ria alocada o novo valor
		aux->valor=numero;
		
		//Passo3: Fazer o prox do novo n� apontar para o antigo primeiro elemento da lista
		aux->prox=*L;
		
		//Passo4: Mandar L apontar para o novo n�
		*L=aux;
		
		//retornando sucesso
		return TRUE;
	}
	
}
int remover(TLista *L, int numero)
{
	//[l]-> [10|-]-> [50|-]-> [30|-]-> [47|-]-> [45|/]
	
	//L, armazena o endere�o do primeiro n� (ou seja, o endere�o do n� que armazena o valor 10)
	//L->, n� (ou seja, o struct) que cont�m o valor 10, 
	//L->prox, armazena o endere�o do segundo n� (ou seja, o endere�o do n� que armazena o valor 50)
	//L->valor, o n�mero 10
	//L->prox->valor, o numero 50
	//L->valor->prox, comando invalido!!! Valor n�o aponta para lugar algum (afinal, n�o � ponteiro)
	
	//TLista aux1, aux2;

	//aux1=L; comando valido
	//aux2=L; comando invalido, pois os aperandos s�o de tipos incompativeis (TLista e int)
	//aux2-L->prox; comando valido
	TLista aux; //criando um auxiliar de ponteiro
	int cont=0;
	
	aux = (TLista) malloc(sizeof(TNo));
	
	
		
	//L->valor->prox, comando invalido!!! Valor n�o aponta para lugar algum (afinal, n�o � ponteiro)
}

int alterar(TLista L, int velho, int novo)
{
	TLista aux; //criando um auxiliar de ponteiro
	int cont=0;
	
	//iniciando aux om o endere�o do primeiro n�
	aux=L;
		
	//percorrendo a lista at� o seu final
	while(aux!=NULL) //while (aux)
	{
		//verificando se o elemento a ser alterado foi encontrado
		if(aux->valor==velho)
		{
			//alterando o velho pelo novo
			aux->valor=novo;
			cont++; //atualizando o contador
		}
			//atualizando com 'aux' para o prox n�
			aux=aux->prox;		
	}
	return cont; //retornando a quantidade de trocas feitas
}

int buscar(TLista L, int numero)
{
	TLista aux; //criando um auxiliar de ponteiro
	
	//iniciando aux om o endere�o do primeiro n�
	aux=L; 
		
	//percorrendo a lista at� o seu final
	while(aux!=NULL) //while (aux)
	{
		//verificando se � o valor sendo buscado
		if(aux->valor==numero)
		{
			return TRUE;
		}
			//atualizando com 'aux' para o prox n�
			aux=aux->prox;		
	}
	//se chegou at� aqui o numero n�o est� na lista
	return FALSE;
}

void exibir(TLista L)
{
	TLista aux; //criando um auxiliar de ponteiro
	
	//verificando se a lista est� vazia
	if(L==NULL) //if (!L)
	{
		printf("Lista est� vazia!\n");
	}
	else
	{
		printf("Lista: ");
		
		//iniciando aux om o endere�o do primeiro n�
		aux=L; 
		
		//aux endere�o do n� que possui o valor que L aponta
		//aux-> (lendo: aux apontado) - o struct que guarda o valor 10; ou: o struct apontado por aux
		//aux->valor campo valor do struct apontado por aux
		//aux-.prox campo prox do struct apontado por aux
		
		//percorrendo a lista at� o seu final
		while(aux!=NULL) //while (aux)
		{
			//exibindo cada elemento da lista
			printf("%d ", aux->valor);
			
			//atualizando com 'aux' para o prox n�
			aux=aux->prox;
		}
	}
}

