/*
	FAETERJ - Rio
	FAC - Turma A
	Data: 03/11/2022
	
	Exemplo (parâmetros de saída)
		Esta versão ALTERA os valores iniciais dos parâmetros
*/

//importação de bibliotecas
#include <stdio.h>

//implementação das funções	
void funcao (int A, float *B)
{
	A++;
	*B = (*B+A)/2;	
}

//main
void main ()
{
	//declaração de variáveis
	int x = 10;
	float y = 5;
	
	//exibindo as variáveis antes da chamada
	printf ("Antes da chamada: x = %d e y = %.1f\n", x, y);
	
	//chamando a função
	funcao (x, &y);
	
	//exibindo as variáveis depois da chamada
	printf ("Depois da chamada: x = %d e y = %.1f\n", x, y);
}
