//valores aleatorios em vetores
#include<stdio.h>
#include<stdlib.h> //tem q por essa biblioteca
#include <time.h> //fun��o para o tempo de delay
#define TAM 30 //constante que o tamanho � 30
void main ()
{
	int i, v[TAM]; //v[TAM] tamanho do vetor vai de 0 a 29
	
	srand (time(NULL)); //vai dar um delay pelo horario do pc para os garantir que sejam aleatorios
	
	for(i=0; i<TAM; i++)
	{
		v[i]=rand()%TAM; //rand faz valores aleatorios at� numero TAM que � 30 e atribui no vetor i
	}
	for(i=0; i<TAM; i++)
	{
		printf("os valor do aleatorios do vetor[%d]=%d\n", i, v[i]);
	}
}
