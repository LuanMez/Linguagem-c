/*Questão 01 [2,5 pontos]:
Desenvolver uma função recursiva que, dados dois
números inteiros n1 e n2, determine a quantidade de
divisores que eles possuem em comum. 
*/

#include<stdio.h>

//prototipo das funções
int divisores(int n1, int n2);
int divisoresRec(int n1, int n2, int div);

//main
void main ()
{
	int n1, n2, resultado;
	
	printf("Digite dois numeros n1 e n2: ");
	scanf("%d %d", &n1, &n2);
	
	resultado=divisores(n1, n2);
	
	printf("A quantidade de divisores comum eh: %d", resultado);
}

//implementação das funções
int divisores(int n1, int n2)
{
	int div=1;
	
	return divisoresRec(n1, n2, div);
}

int divisoresRec(int n1, int n2, int div)
{
	if((div<=n1) && (div<=n2) && (n1>0) && (n2>0))
	{
		if((n1%div==0) && (n2%div==0))
		{
			return 1+divisoresRec(n1, n2, div+1);
		}
		else
		{
			return divisoresRec(n1, n2, div+1);
		}	
	}
	else
	{
		return 0;
	}
}

