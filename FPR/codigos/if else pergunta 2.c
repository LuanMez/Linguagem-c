#include<stdio.h>

/*void main ()
{
	int x, par;
	
	printf("digite o valor de x: ");
	scanf("%d", &x);
	
	if(x%2==0)
	{
		par=1;
	}
	else
	{
		par=0;
	}
	
	if(par=1)
	{
		printf("numero par");
	}
	else
	{
		printf("numero impar");
	}
}*/

void main ()
{
	int x, par;
	
	printf("digite o valor de x: ");
	scanf("%d", &x);
	
	par=(x%2==0)?1:0;
	
	if(par=1)
	{
		printf("numero par");
	}
	else
	{
		printf("numero impar");
	}
}

