#include<stdio.h>

void main ()
{
	int v[15], i, aux=0, x=0;
	
	for(i=0; i<15; i++)
	{
		printf("escreve o numero que vai para o vetor[%d]", i);
		scanf("%d", &v[i]);
	}
	for(i=0; i<15; i++)
	{
		if((i==4) || (i==9) || (i==14))
		{
			aux+=v[i];
			aux/=5;
			v[x]=aux;
			x++;
			aux*=0;
		}
		else
		{
			aux+=v[i];
		}
	}
	printf("valor do vetor v[0] v[1] v[2]: %d %d %d", v[0], v[1], v[2]);
}
