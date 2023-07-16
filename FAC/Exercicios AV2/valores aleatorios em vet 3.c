//valores aleatorios em vetores
#include<stdio.h>
#include<stdlib.h> //tem q por essa biblioteca
#include <time.h> //função para o tempo de delay
void main ()
{
	int i, n=20, v[n]; //v[n] tamanho do vetor vai de 0 a 19
	
	srand (time(NULL)); //vai dar um delay pelo horario do pc para os garantir que sejam aleatorios
	
	for(i=0; i<n; i++)
	{
		v[i]=rand()%n; //rand faz valores aleatorios até numero n que é 20 e atribui no vetor i
	}
	for(i=0; i<n; i++)
	{
		printf("os valor do aleatorios do vetor[%d]=%d\n", i, v[i]);
	}
}
