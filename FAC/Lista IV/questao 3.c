#include<stdio.h>

/*Joãozinho investiu Q reais em
uma aplicação com rendimento fixo de R% ao
mês. Pede-se a implementação de um
programa que calcule o valor (e exiba-o)
disponível na conta de Joãozinho após A anos
de investimento.*/

void main ()
{
	//declaração das variaveis
	int i, ano;
	float reais, porcentagem, j, rendimento;
	
	printf ("digite o valor que joaozinho investiu:");
	scanf ("%f", &reais);
	
	printf ("digite o valor do porcentagem:");
	scanf ("%f", &porcentagem);
	
	printf ("digite o valor os anos que ficou investido:");
	scanf ("%d", &ano);
	
	
	rendimento=((reais*porcentagem)/100);
	
	for (i=1, j=reais ; i<=ano ; i++, j = j+rendimento)
	{
	
	}
	printf("valor disponivel na conta de joaozinho e':%.2f", j);
}
