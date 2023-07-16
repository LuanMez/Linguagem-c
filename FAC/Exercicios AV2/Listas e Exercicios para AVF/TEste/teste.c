#include<stdio.h>

void main ()
{
	float v[5];
	
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("digite o numero do vetor: ");
		scanf("%f", &v[i]);
	}
	for(i=0; i<5; i++)
	{
		printf("vetor[%d] = %.2f ", i, v[i]);
	}
}
