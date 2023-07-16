#include<stdio.h>

/*QUESTÃO 06: Faça um programa que leia um
número N inteiro, menor ou igual a 18. Se for
maior do que 18, o programa exibirá uma
mensagem de erro e terminará a sua
execução; caso contrário, deverá exibir os
números no intervalo de 1 a 99 cujos
algarismos somem N.
Exemplo:
N = 12 Portanto, o programa deve exibir
os números que estão no
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
			
			//verificando se a soma dos algarismos é igual a n
			if ((dezena+unidade) == numero)
			{
				printf ("%d ", i);
			}
		}
	}
}

