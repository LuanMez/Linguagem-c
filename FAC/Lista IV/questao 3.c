#include<stdio.h>

/*Jo�ozinho investiu Q reais em
uma aplica��o com rendimento fixo de R% ao
m�s. Pede-se a implementa��o de um
programa que calcule o valor (e exiba-o)
dispon�vel na conta de Jo�ozinho ap�s A anos
de investimento.*/

void main ()
{
	//declara��o das variaveis
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
