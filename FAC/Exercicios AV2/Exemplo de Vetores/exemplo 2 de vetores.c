#include<stdio.h>

void main ()
{
	//declara��o das variaveis
	int v[5] = {10, 20, 30, 40, 50};
	int i;
	float soma = 0;
	
	//soma dos vetores e armazenamento na variavel soma
	for(i=0; i<5; i++)
	{
		soma += v[i];
	}
	
	//calculo da media dos vetores
	soma/=5;
	
	//exibi��o da media
	printf ("Resultado: %.2f", soma);
}
