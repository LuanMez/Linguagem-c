/*Questão 03:
Desenvolver uma função recursiva que exiba
todos os múltiplos do número N, inferiores ou
iguais ao valor V.*/

#include<stdio.h>

void multiplos2(int n, int v, int x);
void multiplos(int n, int v);

void main ()
{
	int v, n;
	
	printf("Digite o numero para saber os multiplos: ");
	scanf("%d", &n);
	
	printf("Digite o valor que deseja q seja inferior ou igual: ");
	scanf("%d", &v);
	
	multiplos(n,v);
}
void multiplos2(int n, int v, int x)
{
	if(x<=v)
	{
		if(x%n==0)
		{
			printf("%d ", x);
			multiplos2(n,v,x+1);
		}
		else
		{
			multiplos2(n,v,x+1);
		}
	}
}

void multiplos(int n, int v)
{
	int x=0;
	
	multiplos2(n,v,x);
}

