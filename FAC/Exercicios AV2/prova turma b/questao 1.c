//questao 1

#include<stdio.h>
int calculo (n,k)
{
	int i, j, arma=1, arma2=1, cal;
	
	for(i=1; i<=n; i++)
	{
		arma*=i;
	}
	for(j=1; j<=k; j++)
	{
		arma2*=j;
	}
	cal=arma/(arma2*(n-k));
	
	return cal;
}


void main ()
{
	int n, k, result;
	
	printf("Insira o valor de n: ");
	scanf("%d", &n);
	printf("Insira o valor de k: ");
	scanf("%d", &k);
	
	result=calculo(n,k);
	
	printf("%d", result);
}
