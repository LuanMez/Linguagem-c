/*Escrever um algoritmo que,
dados um número inteiro i e três valores a, b e
c, apresente os 3 números na ordem definida
por i, como descrito abaixo:
a) i = 1: os três valores em ordem crescente;
b) i = 2: os três valores em ordem decrescente;
c) i = 3: o maior valor deve ser apresentado no
meio dos outros.*/

#include <stdio.h>

void main ()
{
	//determinando as variaveis
	int a, b, c, ordem;
	char i, ii, iii;
	
	//leitura do primeiro numero
	printf ("escolher o primeiro numero: ");
	scanf ("%d", &a);
	
	//leitura do segundo numero
	printf ("escolher o segundo numero: ");
	scanf ("%d", &b);
	
	//leitura do terceiro numero
	printf ("escolher o terceiro numero: ");
	scanf ("%d", &c);
	
	//leitura do terceiro numero
	printf ("escolher o terceiro numero:\ni para ordem crescente\nii para ordem descrescente\niii para o numero do meio maior/n");
	scanf ("%d", &ordem);
	
	//determinando o valor descrevente
	switch (ordem)
	{
		case 'i':
			
		ordem = 'i';
		
		if (a>b && b>c)
	{
		printf ("ordem descrescente: %d,%d,%d\n", a, b, c);
	}
	else
	{
		if (a>c && c>b)
		{
			printf ("ordem descrescente: %d,%d,%d\n", a, c, b);
		}
		else
		{
			if (b>a && a>c)
		    {
		    	printf ("ordem descrescente: %d,%d,%d\n", b, a, c);
			}
			else
			{
				if (b>c && c>a)
				{
					printf ("ordem descrescente: %d,%d,%d\n", b, c, a);
				}
				else
				{
					if (c>a && a>b)
					{
						printf ("ordem descrescente: %d,%d,%d\n", c, a, b);
					}
					else
					{
					    if (c>b && b>a)
					    {
					        printf ("ordem descrescente: %d,%d,%d\n", c, b, a);
					    }
					}
				}
				
			}
		}
	}	
	}
	
	
	//determinando o valor crescente
	if (a<b && b<c)
	{
		printf ("ordem crescente: %d,%d,%d\n", a, b, c);
	}
	else
	{
		if (a<c && c<b)
		{
			printf ("ordem crescente: %d,%d,%d\n", a, c, b);
		}
		else
		{
			if (b<a && a<c)
		    {
		    	printf ("ordem crescente: %d,%d,%d\n", b, a, c);
			}
			else
			{
				if (b<c && c<a)
				{
					printf ("ordem crescente: %d,%d,%d\n", b, c, a);
				}
				else
				{
					if (c<a && a<b)
					{
						printf ("ordem crescente: %d,%d,%d\n", c, a, b);
					}
					else
					{
					    if (c<b && b<a)
				        {
						    printf ("ordem crescente: %d,%d,%d\n", c, b, a);
					    }
					}
				}
				
			}
		}
	}
	
	//determinando o valor maior do meio
	if (a>b && a>c)
	{
		printf ("o numero maior no meio: %d,%d,%d\n", b, a, c);
	}
	else
	{
		if (b>a && b>c)
		{
			printf ("o numero maior no meio: %d,%d,%d\n", a, b, c);
		}
		else
		{
		    if(c>a && c>b)
		    {
		        printf ("o numero maior no meio: %d,%d,%d\n", a, c, b);
	 	    }

		}
	}
	
	
	
	
	
}
