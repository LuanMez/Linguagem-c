/*Implementar uma função que, dados dois números
inteiros a e b, determine a quantidade de divisores
comuns aos dois.*/

#include<stdio.h>



int divisor (int a, int b)
{
	int i, arma=0, arma2=0, comum=0;
	
	if(a>b)
	{
		for(i=1; i<a; i++)
		{
			arma=a%i;
			arma2=b%i;
			
			if((arma==0) &&(arma2==0))
			{
				comum++;
			}
		}
	}
	else
	{
		for(i=1; i<b; i++)
		{
			arma=a%i;
			arma2=b%i;
			
			if((arma==0) &&(arma2==0))
			{
				comum++;
			}
		}
	}
	return comum;
}

void main ()
{
    int a, b, resultado;
    
    printf("Insira um numero inteiro a: ");
    scanf("%d", &a);
    
    printf("Insira um numero inteiro b: ");
    scanf("%d", &b);
    
    resultado=divisor(a,b);
    
    printf("quantidade de divisores comum: %d", resultado);
    
    
}
