#include<stdio.h>

void calculo (int *y) //se usa void quando não tem return.
{
	//exibição do valor
	printf("valor de y antes da funcao: %d\n", *y);
	
	*y*=10;
}

void main ()
{
	//declaração das variaveis
	int y;
	y=1;
	
	//invocação da função
	calculo(&y);
	
	//exibição do valor
	printf("valor de y depois da funcao: %d", y);
}
