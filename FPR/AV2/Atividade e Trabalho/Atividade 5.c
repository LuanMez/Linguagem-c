/*Desenvolver uma fun��o recursiva que, dado
um n�mero inteiro n, determine a quantidade
de divisores deste n�mero.*/

//importa��o de bibliotecas
#include<stdio.h>

//prot�tipos das fun��es
int divisores(int n);
int divisoresRec(int n, int div);

//main
void main ()
{
	//declara��o das variaveis
	int n, resultado;
	
	//leitura das variaveis
	printf("Digite o valor para achar a quantidade de divisores: ");
	scanf("%d", &n);
	
	//chamando a fun��o
	resultado=divisores(n);
	
	//exibindo o resultado
	printf("A quantidade de divisores de %d eh %d", n, resultado);
}

//implementa��o das fun��es
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
