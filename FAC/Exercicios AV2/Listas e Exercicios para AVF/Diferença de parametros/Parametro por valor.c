#include<stdio.h>

void calculo (int x) //aqui deveria usar int e retorno, porem como � um exemplo
{
	//exibi��o do valor
	printf("valor de x antes da funcao: %d\n", x);
	
	x*=10;
}

void main ()
{
	//declara��o das variaveis
	int x;
	x=1;
	
	//invoca��o da fun��o
	calculo(x);
	
	//exibi��o do valor
	printf("valor de x depois da funcao: %d", x);
}
