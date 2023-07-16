/*QUESTÃO 04:
Fazer uma função que calcule o MDC (máximo
divisor comum) entre dois números.*/

#include<stdio.h>

int calculo(int num1, int num2)
{
	int i, menor, maior;
	
	if(num1>num2)
	{
		menor=num2;
	}
	else
	{
		menor=num1;
	}
	
	for(i=1; i<=menor; i++)
	{
		if((num1%i==0) && (num2%i==0))
		{
			maior=i;
		}
	}
	return maior;
}

void main ()
{
	int num1, num2, resultado;
	
	printf("digite primeiro numero: ");
	scanf("%d", &num1);

	printf("digite segundo numero: ");
	scanf("%d", &num2);
	
	resultado=calculo(num1, num2);
	
	printf("O MDC entre esses dois numeros e': %d", resultado);
}
