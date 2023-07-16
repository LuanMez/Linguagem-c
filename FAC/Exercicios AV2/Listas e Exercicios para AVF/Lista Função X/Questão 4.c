/*QUESTÃO 04:
A função logarítmica é complementar à
potenciação. Ou seja, uma vez que 3^4= 81,
podemos então afirmar que log3 81 = 4.
Generalizando, temos que:
baseexpoente = pot ? logbasepot = expoente
Com base nessa descrição, pede-se o
desenvolvimento de uma função que, dados a e
b, calcule o valor de logab.
Nota: a sua solução deverá apresentar um valor
inteiro que, na verdade, será a solução aproximada
do logaritmo.*/

//pede a e b
//retorne um valor

#include<stdio.h>

int calculo (int log, int base)
{
	int valor=base, i, igual=1;
	
	if(log==base)
	{
		return igual;
	}
	else
	{
		for(i=1; i<=base; i++)
		{	
			valor*=base;

			if(valor==log && log!=base)
			{
				i++;
				return i;
			}	
		
		}
	}
}

void main ()
{
	int a, b, resposta;
	
	printf("digite o numero do log e sua base: ");
	scanf("%d %d", &a, &b);
	
	resposta=calculo(a,b);
	
	printf("O valor de log%d base%d e': %d", a, b, resposta);
}
