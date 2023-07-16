/*QUEST�O 03:
Desenvolver uma fun��o que calcule o n-�simo
termo da sequ�ncia de Fibonacci.*/

#include<stdio.h>

int calculo (int numero)
{
	int i, j=1, aux, termo=1;
	
	if(numero==1 || numero==2)
	{
		return termo;
	}
	else
	{
		for(i=3; i<=numero; i++)
		{
			aux=termo;
			termo+=j;
			j=aux;
		}
		return termo;
	}
}

void main ()
{
	int n, resultado;
	
	printf("Digite o termo que deseja saber da sequencia de Fibonacci: ");
	scanf("%d", &n);
	
	resultado=calculo(n);
	
	printf("Valor: %d", resultado);
}
