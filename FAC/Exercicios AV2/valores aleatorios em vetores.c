//valores aleatorios em vetores
#include<stdio.h>
#include<stdlib.h> //tem q por essa biblioteca
#include <time.h> //função para o tempo de delay
void main ()
{
	int i, v[10]; //v[10] tamanho do vetor vai de 0 a 9
	
	srand (time(NULL)); //vai dar um delay pelo horario do pc para os garantir que sejam aleatorios
	
	for(i=0; i<10; i++)
	{
		v[i]=rand()%10; //rand faz valores aleatorios até numero 10 e atribui no vetor i
	}
	for(i=0; i<10; i++)
	{
		printf("os valor do aleatorios do vetor[%d]=%d\n", i, v[i]);
	}
}
