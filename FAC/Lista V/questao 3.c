#include <stdio.h>

/*QUEST�O 03:
Fazer um programa que exiba todos os
divisores de um n�mero fornecido pelo
usu�rio.*/

void main ()
{
	
	int i, n, resto;
	
	printf("escolha um numero: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		if(n%i == 0)
		{
			printf("%d ", i);
		}
	}
	
}
