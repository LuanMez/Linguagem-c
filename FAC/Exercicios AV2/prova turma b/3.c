//questão 3
#include<stdio.h>
int diferenca(int n, int i)
{
	int v[i], vet[n], arma;
	
	for(i=0; i<n; i++, n++)
	{
		v[n]=v[i]-v[i+1];
	}
	for(i=0; i<n; i++, n++)
	{
		if(vet[n]==v[n+1])
		{
			arma=1;
			n=arma;	
		}
	}
	for(i=0; i<n; i++, n++)
	{
		if(vet[n]!=v[n+1])
		{
			arma=0;
			n=arma;
	    }
	}
	return n;
}


void main()
{
	int max, num, result, i, v[i];
	
	printf("quantos vetores quer: ");
	scanf("%d", &num);
	
	for(i=0; i<num; i++)
	{
		printf("Insira os numeros: ");
		scanf("%d", &v[i]);
	}
	
	//invocando
	result=diferenca(num, i);
	
	printf("\n%d", num);
	
}
