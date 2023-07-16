/*QUESTÃO 08:
Dados um vetor de reais (cujos elementos
estão ordenados crescentemente) e um
número x, retornar a posição da primeira
ocorrência de x (caso encontre-se no vetor) ou
a posição na qual deveria estar (caso contrário).*/

#include<stdio.h>
#define TAM 10

int procurar (int vetor [], int tamanho, int xis)
{
	int i, cont=0, local, aprox, menor=99999;
	
	for(i=0; i<tamanho; i++)
	{
		if(vetor[i]==xis && cont==0)
		{
			local=i;
			cont++;
		}
		else
		{
			if(cont==0)
			{
			
			aprox=vetor[i]-xis;
			
			if(aprox<menor && aprox>0)
				{
					local=i;
					cont++;
				}
			}
		}
	}
	return local;
	
}

void main ()
{
	int v[TAM]={1,2,4,5,6,8,9,10,13,14};
	int x, resultado;
	
	printf("Digite o numero x para saber a posição no vetor: ");
	scanf("%d", &x);
	
	resultado=procurar(v, TAM, x);
	
	printf("A posição que x está ou deveria e': %d", resultado);
}
