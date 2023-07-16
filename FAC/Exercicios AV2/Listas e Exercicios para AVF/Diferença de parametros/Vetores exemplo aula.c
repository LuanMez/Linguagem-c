//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int v[5]; 
	int i;
	
	//lendo os 5 valores
	for (i=0;i<5;i++)
	{
		v[i] = i*i;
	}
		
	//exibindo os 5 valores do vetor
	printf ("\n\nVetor: ");
	for (i=0;i<5;i++)
	{
		printf ("%d ", v[i]);
	}
		
}
