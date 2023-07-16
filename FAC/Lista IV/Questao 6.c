#include<stdio.h>

/*QUEST�O 06: Fa�a um programa que leia um
n�mero N inteiro, menor ou igual a 18. Se for
maior do que 18, o programa exibir� uma
mensagem de erro e terminar� a sua
execu��o; caso contr�rio, dever� exibir os
n�meros no intervalo de 1 a 99 cujos
algarismos somem N.
Exemplo:
N = 12 Portanto, o programa deve exibir
os n�meros que est�o no
intervalo de 1 a 99, cujos
algarismos somam 12. Ou seja:
39, 48, 57, 66, 75, 84 e 93.*/

void main ()
{
	int i, numero, dezena, unidade;
	
	printf("escolha um numero de inteiro menorou igual a 18:");
	scanf("%d", &numero);
	
	
	
	if ((numero<=0) || (numero>18))
	{
	    printf ("erro o numero e' invelido");
	}
	else
	{
			//variando todos os valores de 1 a 99
		for (i=1;i<=99;i++)
		{
			//decompondo 'i' em dezena e unidade
			dezena = i/10;
			unidade = i%10;
			
			//verificando se a soma dos algarismos � igual a n
			if ((dezena+unidade) == numero)
			{
				printf ("%d ", i);
			}
		}
	}
}

