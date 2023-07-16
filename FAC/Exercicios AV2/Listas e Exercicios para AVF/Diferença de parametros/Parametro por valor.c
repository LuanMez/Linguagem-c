#include<stdio.h>

void calculo (int x) //aqui deveria usar int e retorno, porem como é um exemplo
{
	//exibição do valor
	printf("valor de x antes da funcao: %d\n", x);
	
	x*=10;
}

void main ()
{
	//declaração das variaveis
	int x;
	x=1;
	
	//invocação da função
	calculo(x);
	
	//exibição do valor
	printf("valor de x depois da funcao: %d", x);
}
