/*Quest�o 04:
Fazer uma fun��o recursiva que, dado um
n�mero inteiro N, exiba o mesmo na base 2
(bin�ria).*/

#include<stdio.h>

void binario(int n);

void main ()
{
	int n;
	
	printf("Digite o valor de n para saber o binario: ");
	scanf("%d", &n);
	
	binario(n);
}

void binario(int n)
{
	if(n!=0)
	{
		binario(n/2);
		printf("%d", n%2);
	}
}
