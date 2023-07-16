/*mostrar os valores que estão armazenados nos vetores pares*/

#include<stdio.h>
void main ()
{
	int i, vetor[10];
	
	for (i=0; i<10; i++)
	{
		printf("Insira o valor da posicao %d do vetor", i);
		scanf("%d", &vetor[i]);
	}
	for(i=0; i<10; i+=2)
	{
		printf("%d - ", vetor[i]);
	}
	
}
