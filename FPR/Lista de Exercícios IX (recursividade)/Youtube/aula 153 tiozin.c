/*
Aula 153: Fun��es e procedimentos recursivos
Exemplo: imprimir todos os n�meros de n at� 0
*/

#include<stdio.h>

//prototipo da fun��o
void imprimir(int n);

//main
void main ()
{
	int n;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	imprimir(n);
}

//Implementa��o da fun��o
void imprimir(int n)
{
	if(n==0)
	{
		printf("%d ", n);
		
	}
	else
	{
		printf("%d ", n);
		imprimir(n-1);
	}
}
