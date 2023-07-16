/*Desenvolver uma função recursiva que, dado
um número inteiro n, determine a quantidade
de divisores deste número.*/

//importação de bibliotecas
#include<stdio.h>

//protótipos das funções
int divisores(int n);
int divisoresRec(int n, int div);

//main
void main ()
{
	//declaração das variaveis
	int n, resultado;
	
	//leitura das variaveis
	printf("Digite o valor para achar a quantidade de divisores: ");
	scanf("%d", &n);
	
	//chamando a função
	resultado=divisores(n);
	
	//exibindo o resultado
	printf("A quantidade de divisores de %d eh %d", n, resultado);
}

//implementação das funções
int divisores(int n)
{
	return divisoresRec(n,1);
}

int divisoresRec(int n, int div)
{
	if(div==n)
	{
		return 1;
	}
	else
	{
		if(n%div==0)
		{
			return 1 + divisoresRec(n,div+1);
		}
		else
		{
			return divisoresRec(n,div+1);
		}
	}
}
