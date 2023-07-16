/*QUESTÃO 02:
Implementar uma função que converta
determinada temperatura em graus Celsius
para graus Fahrenheit.*/

#include<stdio.h>

float conversao(float c)
{
	float f;
	
	f = c*1.8+32;
	
	return f;
	
}

void main ()
{
	float celsius, fahrenheit;
	
	printf("Digite o valor para conveter de Celsius para Fahrenheit: ");
	scanf("%f", &celsius);
	
	fahrenheit=conversao(celsius);
	
	printf("O Valor em Fahrenheit e' %.1f",fahrenheit);
	
	
}
