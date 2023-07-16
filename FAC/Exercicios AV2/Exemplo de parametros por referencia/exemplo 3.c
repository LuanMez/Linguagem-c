/*
	FAETERJ - Rio
	FAC - Turma A
	Data: 03/11/2022
	
	Exemplo (par�metros de sa�da)
		Esta vers�o ALTERA os valores iniciais dos par�metros
*/

//importa��o de bibliotecas
#include <stdio.h>

//implementa��o das fun��es	
void funcao (int A, float *B)
{
	A++;
	*B = (*B+A)/2;	
}

//main
void main ()
{
	//declara��o de vari�veis
	int x = 10;
	float y = 5;
	
	//exibindo as vari�veis antes da chamada
	printf ("Antes da chamada: x = %d e y = %.1f\n", x, y);
	
	//chamando a fun��o
	funcao (x, &y);
	
	//exibindo as vari�veis depois da chamada
	printf ("Depois da chamada: x = %d e y = %.1f\n", x, y);
}
