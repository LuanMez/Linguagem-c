/*QUESTÃO 01:
Desenvolver uma função que, dado um número
inteiro n, exiba todos os números existentes no
intervalo definido por a e b (a < b), exceto
aqueles que forem múltiplos de n.*/

#include<stdio.h>

void exibir (int num, int ini, int fim)
{
	int i;
	
	for(i=ini; i<=fim; i++)
	{
		if(i%num!=0)
		{
			printf("%d ", i);
		}
	}
}

void main ()
{
	int n, a, b;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	printf("Digite o inicio e o fim do intervalo: ");
	scanf("%d %d", &a, &b);
	
	exibir(n, a, b);
}
