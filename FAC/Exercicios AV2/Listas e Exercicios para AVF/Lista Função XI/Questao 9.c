/*QUESTÃO 09:
Implementar a função de inserção de
determinado elemento em um vetor ordenado
crescentemente (dica: utilizar a função do item
08 para auxiliar).*/

#include<stdio.h>
#define TAM 10

int procurar (int vetor [], int tamanho, int xis)
{
	int i, cont=0, local, aprox=0, menor=99999;
	
	for(i=0; i<tamanho; i++)
	{
		if(vetor[i]==xis && cont==0)
		{
			vetor[i]=xis;
			cont++;
		}
		else
		{
			if(cont==0)
			{
			
			aprox=vetor[i]-xis;
			
			if(aprox<menor && aprox>0)
				{
					vetor[i]=xis;
					cont++;
				}
			}
		}
	}
	
}

void main ()
{
	int v[TAM]={1,2,4,5,6,8,9,10,13,14};
	int x, resultado, i;
	
	printf("Digite o numero x para saber a posição no vetor: ");
	scanf("%d", &x);
	
	resultado=procurar(v, TAM, x);
	
	for(i=0; i<TAM; i++)
	{
		printf("Novo vetor[%d]: %d\n", i,  v[i]);
	}
}
