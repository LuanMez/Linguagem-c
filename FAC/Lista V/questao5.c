/*Criar um programa que exiba os N
primeiros termos da seguinte série:
1,2,4,8,16,32,...*/

#include<stdio.h>

void main ()
{
	int i, n;
	
	printf("escolher um numero: ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i*=2)
	{
		printf("%d ", i);
	}
	
	
	
}
