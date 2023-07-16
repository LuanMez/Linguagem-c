/*Função recursiva de fatorial*/

#include<stdio.h>

int fatorial(int x);

void main ()
{
	int numero, resultado;
	
	printf("Digite o numero que quer saber o fatorial: ");
	scanf("%d", &numero);
	
	resultado=fatorial(numero);
	
	printf("O fatorial de %d eh %d", numero, resultado);
}

int fatorial(int x)
{
	int res;
	
	if(x==0)//caso base
	{
		res=1; //caso base
	}
	else
	{
		res=x*fatorial(x-1);//caso geral
	}
	
	return res;//retornando para main o fatorial
}
