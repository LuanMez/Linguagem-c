/*QUEST�O 04:
A fun��o logar�tmica � complementar �
potencia��o. Ou seja, uma vez que 3^4= 81,
podemos ent�o afirmar que log3 81 = 4.
Generalizando, temos que:
baseexpoente = pot ? logbasepot = expoente
Com base nessa descri��o, pede-se o
desenvolvimento de uma fun��o que, dados a e
b, calcule o valor de logab.
Nota: a sua solu��o dever� apresentar um valor
inteiro que, na verdade, ser� a solu��o aproximada
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
