/*Quest�o 03 [2,5 pontos]:
Implementar uma fun��o que, dada uma lista encadeada L, do tipo TLista, e um n�mero inteiro n, determine se todos
os valores inferiores ou maiores do que n est�o nos primeiros n�s de L, assim como os maiores ao final da lista.

Notas: caso todos os valores da lista sejam menores ou iguais a n, a fun��o dever� retornar 1; o mesmo aplica-
se quando todos os elementos forem maiores do que n.*/

//bibliotecas
#include<stdio.h>
#include<stdlib.h> //biblioteca do malloc

//declara��o de tipos
typedef struct No{
	int valor; //no caso, representando uma Lista de inteiros
	struct No* prox;
} TNo;

typedef TNo* TLista;

//prototipo das fun��es
int inserir(TLista* L, int numero);
int verificar(TLista *L, int n);


void main ()
{
	TLista L = NULL;
	int resultado, n;
	
	printf("Digite o valor a ser verificado: ");
	scanf("%d", &n);
	
	/*inserir (&L, 8);
	inserir (&L, 10);
	inserir (&L, 6);
	inserir (&L, 13);
	inserir (&L, 15);*/
	
	inserir (&L, 8);
	inserir (&L, 10);
	inserir (&L, 6);
	inserir (&L, 10);
	inserir (&L, 7);
	
	resultado=verificar(&L, n);

	if(resultado==0)
	{
		printf("Os menores estao no inicio e os maiores no final\n");
	}
	else
	{
		printf("Todos sao maiores ou todos sao menores\n");
	}
}

//implementa��o das fun��es
int inserir(TLista *L, int num)
{
	TLista aux;
	//Passo1: Alocar mem�ria para o novo elemento
	aux = (TLista) malloc(sizeof(TNo));
	
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

int verificar(TLista *L, int n)
{
	//declara��o das varaiveis
	TLista aux;
	int contMaior=0, contMenor=0, cont=0, cont2=0;
	
	aux=*L;
	
	if(!aux)
	{
		return 1;
	}
	else
	{
		while(aux!=NULL)
		{
			if(((aux->valor)<=n) && (cont2==0))
			{
				contMenor++;
				cont++;
				//atualizando com 'aux' para o prox n�
				aux=aux->prox;
			}
			else
			{
				if(((aux->valor)>n))
				{
					contMaior++;
					cont2++;
					cont++;
					//atualizando com 'aux' para o prox n�
					aux=aux->prox;	
				}
			}
		}
		if(cont%2==0)
		{
			if(contMaior==contMenor)
			{
				return 0;
			}
		}
		else
		{
			if(contMaior==cont)
			{
				return 1;
			}
			else
			{	
				if((cont-contMenor)>contMaior)
				{
					return 0;
				}
			}
		}
		if((contMaior=0) || (contMenor=0))
		{
			return 1;
		}
	}
}
