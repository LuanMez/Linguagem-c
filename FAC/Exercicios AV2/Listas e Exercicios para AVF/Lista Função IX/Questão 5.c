/*QUESTÃO 05:
Fazer uma função que calcule o MMC (mínimo
múltiplo comum) entre dois números.*/

#include<stdio.h>

int mmc (int num1, int num2)
{
	int i, maior;
	
	if(num1<num2)
	{
		maior=num2;
	}
	else
	{
		maior=num1;
	}
	
	for(i=maior; i<=num1*num2; i++)
	{
		if ((i%num1==0) && (i%num2==0))
		{
			return i;
		}
	}
}

void main ()
{
	int num1, num2, resultado;
	
	printf("digite o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("digite o segundo numero: ");
	scanf("%d", &num2);
	
	resultado=mmc(num1, num2);
	
	printf("O MMC entre os dois numeros e': %d", resultado);
}
