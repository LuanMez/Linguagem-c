/*QUEST�O 01:
Desenvolver uma fun��o que, dado um n�mero
inteiro n, exiba todos os n�meros existentes no
intervalo definido por a e b (a < b), exceto
aqueles que forem m�ltiplos de n.*/

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
