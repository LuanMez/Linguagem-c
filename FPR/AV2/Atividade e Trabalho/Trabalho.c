/*Considerando as implementa��es de listas encadeadas
feitas em aula, apresentar o c�digo das fun��es de
inser��o, remo��o, altera��o, busca e exibi��o (al�m da
main) para uma lista que restrinja que um elemento N
apare�a na lista, no m�ximo, N vezes.

Por exemplo, o n�mero 5 n�o pode aparecer na lista
por mais de 5 vezes (pode aparecer 1, 2, 3, 4 ou 5
vezes; pode, inclusive, n�o estar na lista; s� n�o pode
exceder 5 repeti��es).*/

#include <stdio.h>
#include <stdlib.h>

typedef struct No {
	int valor;
	struct No* prox;
} TNo;

typedef TNo* TLista;

#define TRUE 1
#define FALSE 0

int inserir(TLista *L, int numero, int *quant);
int remover(TLista *L, int numero);
int alterar(TLista L, int num1, int num2, int *quant);
TLista buscar(TLista L, int numero, int *quant);
void exibir(TLista L);
int menu();

int main()
{
	TLista L = NULL;
	int num1, num2, op;
	TLista resp;
	int quant;

	do
	{
		system("CLS");

		op = menu();

		switch (op)
		{
			case 1:
				printf("\nEntre com o valor a ser inserido: ");
				scanf("%d", &num1);

				if (inserir(&L, num1, &quant) == TRUE)
				{
					printf("\n\tInsercao realizada com sucesso!");
				}
				else
				{
					printf("\n\tERRO: insercao nao realizada!");
				}
				break;

			case 2:
				printf("\nEntre com o valor a ser removido: ");
				scanf("%d", &num1);

				if (remover(&L, num1) == TRUE)
				{
					printf("\n\tRemocao realizada!");
				}
				else
				{
					printf("\n\tERRO: remocao nao realizada!");
				}
				break;

			case 3:
				printf("\nEntre com o valor a ser alterado: ");
				scanf("%d", &num1);

				printf("\nEntre com o novo valor: ");
				scanf("%d", &num2);

				if (alterar(L, num1, num2, &quant) == TRUE)
				{
					printf("\n\tAlteracao realizada!");
				}
				else
				{
					printf("\n\tERRO: alteracao nao realizada!");
				}
				break;

			case 4:
				printf("\nEntre com o valor a ser buscado: ");
				scanf("%d", &num1);

				resp = buscar(L, num1, &quant);

				if (resp != NULL)
				{
					printf("\n\tO valor %d foi encontrado na lista!", num1);
				}
				else
				{
					printf("\n\tO valor %d NAO foi encontrado na lista!", num1);
				}
				break;

			case 5:
				exibir(L);
				break;

			case 6:
				printf("\n\nPrograma finalizado!");
				break;

			default:
				printf("\n\nOpcao invalida! Tente novamente.");
				break;
		}

		printf("\n\n");
		system("PAUSE");
	} while (op != 6);

	return 0;
}

int inserir(TLista *L, int numero, int *quant)
{
	TLista aux;
	
	buscar(*L, numero, quant);

	if (*quant < numero)
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

int remover(TLista *L, int numero)
{
	TLista anterior, atual;

	if (*L)
	{
		if ((*L)->valor == numero)
		{
			atual = *L;
			*L = atual->prox;
			free(atual);
			return TRUE;
		}
		else
		{
			anterior = *L;
			atual = anterior->prox;

			while (atual)
			{
				if (atual->valor == numero)
				{
					anterior->prox = atual->prox;
					free(atual);
					return TRUE;
				}
				else
				{
					anterior = atual;
					atual = anterior->prox;
				}
			}
		}
	}

	return FALSE;
}

int alterar(TLista L, int num1, int num2, int *quant)
{
	TLista pos1, pos2;

	pos1 = buscar(L, num1, quant);

	if (pos1)
	{

		buscar(L, num2, quant);

		if (*quant < num2)
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

TLista buscar(TLista L, int numero, int* quantidade)
{
	TLista aux = L; //percorrer a lista
	TLista ret; //retorna o n�
	*quantidade = 0;

	while (aux)
	{
		if (aux->valor == numero)
		{
			(*quantidade)++;
			ret = aux;
		}
		aux = aux->prox;
	}

	if (*quantidade > 0)
	{
		return ret;
	}
	else
	{
		return NULL;
	}
}

void exibir(TLista L)
{
	TLista aux = L;

	if (!L)
	{
		printf("\n\nLista vazia!\n");
	}
	else
	{
		printf("\n\nLista: ");

		while (aux)
		{
			printf("%d ", aux->valor);
			aux = aux->prox;
		}
	}
}

int menu()
{
	int opcao;
	printf("Menu de Operacoes:\n\n");
	printf("(1) Inserir\n");
	printf("(2) Remover\n");
	printf("(3) Alterar\n");
	printf("(4) Buscar\n");
	printf("(5) Exibir\n");
	printf("(6) Sair\n\n");
	printf("Digite a sua opcao: ");
	scanf("%d", &opcao);
	return opcao;
}

