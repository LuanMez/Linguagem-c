#include<stdio.h>

void calculo (int *y) //se usa void quando n�o tem return.
{
	//exibi��o do valor
	printf("valor de y antes da funcao: %d\n", *y);
	
	*y*=10;
}

void main ()
{
	//declara��o das variaveis
	int y;
	y=1;
	
	//invoca��o da fun��o
	calculo(&y);
	
	//exibi��o do valor
	printf("valor de y depois da funcao: %d", y);
}
