/*
Aula 153: Funções e procedimentos recursivos
Exemplo: imprimir todos os números de n até 0
*/

#include<stdio.h>

//prototipo da função
void imprimir(int n);

//main
void main ()
{
	int n;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	imprimir(n);
}

//Implementação da função
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
