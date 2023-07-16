/*Suponha a exist�ncia dos seguintes
vetores:
? vetA: contendo quant valores
inteiros;
? vetB: do mesmo tamanho do vetA,
por�m contendo inteiros que
representam posi��es de vetA.
Desenvolver uma fun��o que percorrer� os
elementos de vetA na ordem definida em
vetB. Se neste percurso os valores
estiverem em ordem crescente, a fun��o
dever� retornar o valor 1; caso contr�rio, 0
ser� retornado.*/

#include<stdio.h>
#include<stdlib.h>
#define QUANTA 10
#define QUANTB 10

void preencher(int vetorA[], int quantidadeA)
{
	int i;
	
	for (i=0; i<quantidadeA; i++)
	{
		printf("Insira o valor da posicao do vetor[%d]: ", i);
		scanf("%d", &vetorA[i]);
	}
}

void preencherB(int vetorB[], int quantidadeB)
{
	int i;
	
	for (i=0; i<quantidadeB; i++)
	{
		vetorB[i]=i;
	}
}

int verificar (int vetorA[], int quantidadeA, int vetorB[], int quantidadeB)
{
	int i=0, retorno=1;

    for(i=vetorB[i]; i<quantidadeB-1; i++)
	{
        if(vetorA[i]<vetorA[i+1])
        {
		    retorno*=1;
        }
		else
		{
            retorno*=0;
        }
    }
    return retorno;
}

void main ()
{
	//declaracao das variaveis
	int vetA[QUANTA], vetB[QUANTB], resultado;
	
	//chamando as funcoes
	preencher (vetA, QUANTA);
	
	preencherB (vetB, QUANTB);
	
	resultado=verificar(vetA, QUANTA, vetB, QUANTB);
	
	printf("%d", resultado);
	
	
	
}
