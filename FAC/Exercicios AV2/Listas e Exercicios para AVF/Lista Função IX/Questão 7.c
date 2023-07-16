/*QUEST�O 07:
Implementar uma fun��o que, dado um
n�mero inteiro n, e o intervalo definido pelos
n�meros a e b, determine quantos valores do
intervalo possuem divisores (sendo estes
diferentes de 1) que tamb�m sejam divisores
de n.
Exemplo:
n = 6
a = 10 e b = 20
Resposta = 7 (pois os n�meros 10, 12, 14,
15, 16, 18 e 20 possuem divisores em
comum com o n�mero 6).*/

#include<stdio.h>

int calculo (int inicio, int final, int ver)
{
	int i, quant=0;
	
	for(i=inicio; i<=final; i++)
	{
		if(i%ver==0)
		{
			quant++;
		}
	}
	return quant;
}

void main ()
{
	int ini, fina, ver, resultado;
	
	printf("digite o numero inicio do intervalo: ");
	scanf("%d", &ini);
	
	printf("digite o numero final do intervalo: ");
	scanf("%d", &fina);
	
	printf("digite o numero para verificar divisores em comum no intervalo: ");
	scanf("%d", &ver);
	
	resultado=calculo(ini, fina, ver);
	
	printf("Total de divisores em comum no intervalo: %d", resultado);
}
