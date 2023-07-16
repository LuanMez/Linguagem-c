/*Como inserir no início de uma Lista Simplesmente Encadeada? */

//bibliotecas
#include<stdio.h>
#include<stdlib.h> //biblioteca do malloc

#define TRUE 1
#define FALSE 0

//declaração de tipos
typedef struct No{
	int valor; //no caso, representando uma Lista de inteiros
	struct No* prox;
} TNo;

typedef TNo* TLista;

//prototipo das funções
int inserir(TLista *L, int numero);
int remover(TLista *L, int numero);
int alterar(TLista L, int velho, int novo);
int buscar(TLista L, int numero);
void exibir(TLista L);

int menu();

//main
void main ()
{
	//declaração das variaveis
	TLista L1 = NULL; //lista inicialmente vazia
	int opcao, num1, num2, quant;
	
	do
	{
		//exibindo o menu ao usuário
		opcao = menu ();
		
		switch(opcao)
		{
			//inserção
			case 1: printf("Entre com o numero a ser inserido: ");
					scanf("%d", &num1);
					
					if(inserir (&L1, num1) == TRUE) //ou apenas inserir (&l1, num1)
					{
						printf("O numero %d foi inserido na lista!\n", num1);
					}
					else
					{
						printf("ERRO: o numero %d nao foi inserido na lista!\n", num1);
					}
					break;
					
			//remoção
			case 2: printf("Entre com o numero a ser removido: ");
					scanf("%d", &num1);
					
					quant = remover(&L1, num1);
					if(quant!=0) //ou apenas inserir (&l1, num1)
					{
						printf("%d ocorrencias do numero %d foi removida na lista!\n", quant, num1);
					}
					else
					{
						printf("ERRO: o numero %d nao foi removido na lista!\n", num1);
					}
					break;
					
			//alterar
			case 3: printf("Entre com o numero a ser alterado: ");
					scanf("%d", &num1);
					
					printf("Entre com o novo elemento: ");
					scanf("%d", &num2);
					
					quant = alterar(L1, num1, num2);
					if(quant!=0)
					{
						printf("%d ocorrencias de %d alteradas por %d\n", quant, num1, num2);
					}
					else
					{
						printf("ERRO: o numero %d nao foi encontrado na lista!\n", num1);
					}
					break;
					
			//buscar
			case 4: printf("Entre com o numero a ser buscado: ");
					scanf("%d", &num1);
					
					if(buscar (L1, num1) == TRUE)
					{
						printf("O numero %d foi encontrado na lista!\n", num1);
					}
					else
					{
						printf("ERRO: o numero %d nao foi encontrado na lista!\n", num1);
					}
					break;
			
			//exibir
			case 5: exibir(L1);
					break;
					
			//saida
			case 6: printf("Fim do programa!\n");
					break;	
					
			//saida
			default: printf("Opcao invalida! Tente novamente\n");			
		}
		
		system ("pause");
		system ("cls");
	}
	while(opcao != 6);
}

//implementação das funções
int inserir(TLista *L, int numero)
{
	//inserir no inicio é mais barato, inserir no final é mais caro em lista
	//declaração de variaveis
	TLista aux;
	//Passo1: Alocar memória para o novo elemento
	aux = (TLista) malloc(sizeof(TNo));
	
	//testar se a memória foi alocada
	if(aux == NULL) //if(!aux)
	{
		return FALSE;
	}
	else
	{
		//Passo2: Armazenar na memória alocada o novo valor
		aux->valor=numero;
		
		//Passo3: Fazer o prox do novo nó apontar para o antigo primeiro elemento da lista
		aux->prox=*L;
		
		//Passo4: Mandar L apontar para o novo nó
		*L=aux;
		
		//retornando sucesso
		return TRUE;
	}
	
}
int remover(TLista *L, int numero)
{
	//[l]-> [10|-]-> [50|-]-> [30|-]-> [47|-]-> [45|/]
	
	//L, armazena o endereço do primeiro nó (ou seja, o endereço do nó que armazena o valor 10)
	//L->, nó (ou seja, o struct) que contém o valor 10, 
	//L->prox, armazena o endereço do segundo nó (ou seja, o endereço do nó que armazena o valor 50)
	//L->valor, o número 10
	//L->prox->valor, o numero 50
	//L->valor->prox, comando invalido!!! Valor não aponta para lugar algum (afinal, não é ponteiro)
	
	//TLista aux1, aux2;

	//aux1=L; comando valido
	//aux2=L; comando invalido, pois os aperandos são de tipos incompativeis (TLista e int)
	//aux2-L->prox; comando valido
	
	//declaração de variaveis
	TLista aux, aux1, aux2;
	int cont=0;
	
	while((*L!=NULL) &&  		 //L possuir elementos (ou seja, não estiver vazia)
			((*L)->valor==numero)) //o primeiro elemento da lista ser o número a ser removido
	{
		//Passo1: Fazer com que um ponteiro auxiliar guarde o endereço do primeiro nó
		aux=*L;
		//Passo2: Fazer com que o L aponte para o segundo nó da lista
		*L=aux->prox; //*L = *L->prox; (uma vez que aux e L apontam para o mesmo endereço)
		//Passo3: Liberar a memória ocupada pelo primeiro nó
		free (aux);
		
		cont++; //atualizando o numero de remoções
	}
	
	//verificando se a lista não está vazia
	if(*L != NULL) //ou if (*L)
	{
		//inicializando os ponteiros auxiliares aux1 e aux2
		aux2=*L;
		aux1=aux2->prox; //aux1=*L->prox;
		
		//varrendo toda a lista com 'aux1'
		while(aux1!=NULL)
		{
			//verificando se aux1 está apontando para o elemento a ser removido
			if(aux1->valor==numero)
			{
				//fazer o nó anterior ao que será removido aponte para o proximo
				aux2->prox = aux1->prox;
				
				//liberar a memória ocupada pelo nó que contem o elemento que deseja remover
				free(aux1);
				cont++; //sempre que remover atualiza o contador
				
				//atualizar o valor de aux1, de modo que aponte para o proximo 
				aux1=aux2->prox;
			}
			else
			{
				aux2=aux2->prox; //aux2=aux1;
				aux1=aux1->prox;
			}
		}
	}
	//retornando a quantidade de remoções
	return cont;
}

int alterar(TLista L, int velho, int novo)
{
	TLista aux; //criando um auxiliar de ponteiro
	int cont=0;
	
	//iniciando aux om o endereço do primeiro nó
	aux=L;
		
	//percorrendo a lista até o seu final
	while(aux!=NULL) //while (aux)
	{
		//verificando se o elemento a ser alterado foi encontrado
		if(aux->valor==velho)
		{
			//alterando o velho pelo novo
			aux->valor=novo;
			cont++; //atualizando o contador
		}
			//atualizando com 'aux' para o prox nó
			aux=aux->prox;		
	}
	return cont; //retornando a quantidade de trocas feitas
}

int buscar(TLista L, int numero)
{
	TLista aux; //criando um auxiliar de ponteiro
	
	//iniciando aux om o endereço do primeiro nó
	aux=L; 
		
	//percorrendo a lista até o seu final
	while(aux!=NULL) //while (aux)
	{
		//verificando se é o valor sendo buscado
		if(aux->valor==numero)
		{
			return TRUE;
		}
		//atualizando com 'aux' para o prox nó
		aux=aux->prox;		
	}
	//se chegou até aqui o numero não está na lista
	return FALSE;
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

int menu()
	{
		int res;
		
		printf("Entre com a sua opcao: ");
		scanf("%d", &res);
		printf("\n");
		return res;
	}

