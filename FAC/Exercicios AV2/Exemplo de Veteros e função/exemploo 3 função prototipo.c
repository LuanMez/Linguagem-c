#include<stdio.h>

float maior (float num1, float num2);

void main ()
{
	//declaração das variaveis
	float x, y, m;
	
	//leitura da variavel x 
	printf("Insira um valor: \n");
	
	//armazenamento do valor em x
	scanf("%f", &x);
	
	//leitura da variavel y
	printf("Insira mais um valor: \n");
	
	//armazenamento do valor em y
	scanf("%f", &y);
	
	//invocação da função
	m = maior(x,y);
	
	//exibição do maior valor
	printf("Maior: %.2f\n", m);
}

//inicialização da função
float maior (float num1, float num2)
{
	//verificando qual é o maior número
	if(num1>num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
	
}
