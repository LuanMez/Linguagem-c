/*
	FAETERJ-Rio
	FAC - 2022/2 - Professor Leonardo Vianna
	Data: 08/10/2022 - Aula extra
	
	Lista de Exerc�cios VI
	
	QUEST�O 08: Fa�a um programa que leia um n�mero real x e um n�mero inteiro y. 
	Em seguida, o programa deve ler 100 n�meros reais e calcular quantos destes est�o 
	no intervalo definido por [x-y,x+y].
	
	Exemplo:
		x = 10
		y = 3
		
				intervalo: [10-3,10+3]  =>  [7,13]
		
		valores:	5	8	20	12	13	19	9	7	5	6   
						*		*	*		*	*				Resposta: 5
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define QUANT 10

//main
void main ()
{
	//declara��o de vari�veis
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
	
	//lendo os QUANT n�meros reais
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com o %do. numero: ", i);
		scanf ("%f", &numero);
		
		//verificando se o valor est� no intervalo definido
		if ((numero >= inf) && (numero <= sup))
		{
			cont++;
		}
	}
	
	//exibindo o resultado
	printf ("\n\nForam digitados %d valores no intervalo [%.1f, %.1f]", cont, inf, sup);
}
