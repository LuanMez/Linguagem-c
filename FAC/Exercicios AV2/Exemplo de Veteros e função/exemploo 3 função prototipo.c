#include<stdio.h>

float maior (float num1, float num2);

void main ()
{
	//declara��o das variaveis
	float x, y, m;
	
	//leitura da variavel x 
	printf("Insira um valor: \n");
	
	//armazenamento do valor em x
	scanf("%f", &x);
	
	//leitura da variavel y
	printf("Insira mais um valor: \n");
	
	//armazenamento do valor em y
	scanf("%f", &y);
	
	//invoca��o da fun��o
	m = maior(x,y);
	
	//exibi��o do maior valor
	printf("Maior: %.2f\n", m);
}

//inicializa��o da fun��o
float maior (float num1, float num2)
{
	//verificando qual � o maior n�mero
	if(num1>num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
	
}
