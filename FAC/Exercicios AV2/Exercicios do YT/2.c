#include<stdio.h>

void main ()
{
	int vet[15], i, j;
	
	for(i=0, j=1; i<15; i++, j++)
	{
		vet[i]=j*3;
		printf("%d %d\n", i, vet[i]);
	}
	
	/*
	for(i=0; i<15; i++)
	{
	    vet[i] = (i+1)*3;
	    printf("%d %d\n", i, vet[i]);
    }
    */
}
