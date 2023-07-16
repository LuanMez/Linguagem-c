/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 02/12/2021
	
	Parâmetros de saída x parâmetros de entrada	
	
	Observação: nesta versão, os parâmetros são passados por referência; portanto, os 
	valores de 'x' e 'y' na 'main' são alterados.
*/

//importação de bibliotecas
#include <stdio.h>

//função

//'a' é ponteiro para inteiro; 'b' é ponteiro para real. Ponteiro = endereço de memória.
//Portanto, 'a' e 'b' armazenarão endereços de memória nos quais valores inteiro e float,
//respectivamente, são encontrados.
void funcao (int *a, float *b)
{
	(*a)++;		//lê-se: incrementar o conteúdo do endereço armazenado em 'a'
	*b = ((*b)-(*a))/2;
}

//main
void main ()
{
	//declaração de variáveis
	int x = 10;
	float y = 15.6;
	
	//exibindo os valores de 'x' e 'y' antes da chamada à função
	printf ("\nx = %d   -   y = %.1f\n", x, y);
	
	//chamando a função
	funcao (&x, &y);
	
	//exibindo os valores de 'x' e 'y' após a chamada à função
	printf ("\nx = %d   -   y = %.1f\n", x, y);
}
