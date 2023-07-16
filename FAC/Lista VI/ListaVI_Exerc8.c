/*
	FAETERJ-Rio
	FAC - 2022/2 - Professor Leonardo Vianna
	Data: 08/10/2022 - Aula extra
	
	Lista de Exercícios VI
	
	QUESTÃO 08: Faça um programa que leia um número real x e um número inteiro y. 
	Em seguida, o programa deve ler 100 números reais e calcular quantos destes estão 
	no intervalo definido por [x-y,x+y].
	
	Exemplo:
		x = 10
		y = 3
		
				intervalo: [10-3,10+3]  =>  [7,13]
		
		valores:	5	8	20	12	13	19	9	7	5	6   
						*		*	*		*	*				Resposta: 5
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define QUANT 10

//main
void main ()
{
	//declaração de variáveis
	int i, y, cont = 0;
	float x, numero, inf, sup;
	
	//lendos os dados
	printf ("Entre com o valor de x: ");
	scanf ("%f", &x);
	
	printf ("Entre com o valor de y: ");
	scanf ("%d", &y);
	
	//definindo o intervalo
	inf = x-y;
	sup = x+y;
	
	printf ("\n\n");
	
	//lendo os QUANT números reais
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com o %do. numero: ", i);
		scanf ("%f", &numero);
		
		//verificando se o valor está no intervalo definido
		if ((numero >= inf) && (numero <= sup))
		{
			cont++;
		}
	}
	
	//exibindo o resultado
	printf ("\n\nForam digitados %d valores no intervalo [%.1f, %.1f]", cont, inf, sup);
}
