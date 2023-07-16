/*Implementar uma função que, dados 3
valores reais (n1, n2, n3), compare-os e
altere seus conteúdos, de forma que n1
armazene o maior elemento, n2 o segundo
maior e n3 o menor deles.*/

#include<stdio.h>

void trocar (float *num1, float *num2, float *num3)
{
	float maior, meio, menor;
	
	if(*num1>*num2 && *num1>*num3)
	{
		maior=*num1;
		
		if(*num2>*num3)
		{
			meio=*num2;
			menor=*num3;
		}
		else
		{
			menor=*num2;
			meio=*num3;
		}
	}
	if(*num2>*num1 && *num2>*num3)
	{
		maior=*num2;
		
		if(*num1>*num3)
		{
			meio=*num1;
			menor=*num3;
		}
		else
		{
			menor=*num1;
			meio=*num3;
		}
	}
	if(*num3>*num2 && *num3>*num1)
	{
		maior=*num3;
		
		if(*num1>*num2)
		{
			meio=*num1;
			menor=*num2;
		}
		else
		{
			menor=*num1;
			meio=*num2;
		}
	}
	*num1=maior;
	*num2=meio;
	*num3=menor;
}

void main ()
{
	float n1, n2, n3;
	
	printf("Digite tres numeros reais: ");
	scanf("%f %f %f", &n1 ,&n2 ,&n3);
	
	trocar(&n1, &n2, &n3);
	
	printf("n1 = %.2f, n2 = %.2f, n3 = %.2f", n1, n2, n3);
}
