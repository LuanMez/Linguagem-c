/*Desenvolver uma fun��o que, dado um vetor v
contendo quant n�meros reais, calcule a soma dos
elementos compreendidos entre as posi��es a e b.*/

#include<stdio.h>
#define QUANT 8

float soma (float vetor [], float quantidade, int a, int b)
{
	//declara��o das variaveis
	int i, comeco, final;
	float somatorio=0;
	
	//identificar o maior e o menor numero do intervalo
	if(a>b)
	{
		comeco=b;
		final=a;
	}
	else
	{
		comeco=a;
		final=b;
	}
	
	//for para somar os elementos do intervalo
	for(i=comeco; i<=final; i++)
	{
		somatorio+=vetor[i];
	}
	return somatorio; //retorno para a main
}

void main ()
{
	//declara��o das variaveis
	float v[QUANT]={1.3, 1.5, 2.2, 4, 5, 6, 1, 9.5};
	float resultado;
	int a, b;
	
	//leitura das variaveis
	printf("Digite as posi��es de a e b: ");
	scanf("%d %d", &a, &b);
	
	//chamando a fun��o
	resultado=soma(v, QUANT, a, b);
	
	//exibir o resultado 
	printf("A soma dos valores de a e b e' %.2f", resultado);
	
}
