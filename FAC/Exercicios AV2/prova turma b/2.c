// questao 2
#include<stdio.h>

void verificar(int numero, int *mai, int *men)
{
	int i, j, vet[j], aux=0, arma, arma2;
	
	if(numero>=0)
	{
	for(i=10, j=0; i<numero; i*=10, j++)
	{
		vet[j]=numero%10;
		numero/=10;
		aux++;
	}
	for(j=0; j<aux; j++)
	{
		if(vet[j]>vet[j+1])
		{
			arma=vet[j];
		}
		if(vet[j+1]>vet[j])
		{
			arma=vet[j+1];
		}
		if(vet[j]<vet[j+1])
		{
			arma2=vet[j];
		}
		if(vet[j+1]<vet[j])
		{
			arma2=vet[j+1];
		}
	}
	*mai=arma;
	*men=arma2;
   }
   else
   {
   	numero*=0;
   }
}

void main ()
{
	int n, maior=0, menor=0;
	
	printf("Insira um numero inteiro positivo: ");
	scanf("%d", &n);
	
	verificar(n,&maior,&menor);
	
	if(n>=0)
	{
		printf("Valor 1, maior %d e menor %d", maior, menor);
	}
	else
	{
		printf("Valor 0");
	}
}
