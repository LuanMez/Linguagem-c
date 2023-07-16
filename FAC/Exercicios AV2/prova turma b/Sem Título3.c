//questao 1

#include<stdio.h>

void main ()
{
	int n, k, result, i, j, arma=1, arma2=1, cal;
	
	printf("Insira o valor de n: ");
	scanf("%d", &n);
	
	printf("Insira o valor de k: ");
	scanf("%d", &k);
	
	for(i=1; i<n; i++)
	{
		arma*=i;
	}
	for(j=1; j<n; j++)
	{
		arma2*=j;
	}
	
	cal=arma/arma2*(n-k);
	
	printf("%d", cal);
}
