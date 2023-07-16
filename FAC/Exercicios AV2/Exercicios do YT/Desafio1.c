#include<stdio.h>
void main ()
{
	int v[16], i, j, aux=0;
	
	for(i=0; i<16; i++)
	{
		printf("digite o valor para armazenar no vetor v[%d]: \n", i);
		fflush (stdin);
		scanf("%d", &v[i]);
	}
	for(i=0; i<8; i++)
	{
	     aux=v[i];
	     v[i]=v[i+8];
	     v[i+8]=aux;
	}
	for(i=0; i<16; i++)
	{
		printf("%d ",v[i]);
	}
}
