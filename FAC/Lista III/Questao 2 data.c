/*Faça um programa que, dadas duas datas (cada
qual com dia, mês e ano) fornecidas pelo
usuário, determine qual delas é a mais recente.*/

#include<stdio.h>

void main ()
{
	//declarando a variavel data
	int data1, data2, mes1, mes2, ano1, ano2;
	
	//leitura da primeira dia
	printf ("escolha o primeiro dia:\n");
	scanf ("%d", &data1);
	
	//leitura da primeira mes
	printf ("escolha o primeiro mes:\n");
	scanf ("%d", &mes1);
	
	//leitura da primeira ano
	printf ("escolha o primeiro ano:\n");
	scanf ("%d", &ano1);
	
	//leitura da segundo dia
	printf ("escolha o segundo dia:\n");
	scanf ("%d", &data2);
	
	//leitura da segundo ano
	printf ("escolha o segundo mes:\n");
	scanf ("%d", &mes2);
	
	//leitura da primeira mes
	printf ("escolha o segundo ano:\n");
	scanf ("%d", &ano2);
	
	if (ano1>ano2)
	{
		printf ("a data mais recente e: %d/%d/%d", data1, mes1, ano1);
	}
	else
	{
		if (ano2>ano1)
		{
			printf ("a data mais recente e: %d/%d/%d", data2, mes2, ano2);
		}
		else
		{
			if (ano1=ano2 && mes1>mes2)
			{
				printf ("a data mais recente e: %d/%d/%d", data1, mes1, ano1);
			}
			else
			{
				if (ano1=ano2 && mes2>mes1)
				{
					printf ("a data mais recente e: %d/%d/%d", data2, mes2, ano2);
				}
				else
				{
					if (mes1=mes2 && data1>data2)
					{
						printf ("a data mais recente e: %d/%d/%d", data1, mes1, ano1);
					}
					else
					{
						printf ("a data mais recente e: %d/%d/%d", data2, mes2, ano2);
					}
				}
			}
			
		}
	}
	
	
	
	
}
