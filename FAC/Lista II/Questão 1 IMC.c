/*QUESTÃO 01: O IMC (Índice de Massa Corporal)
é um critério da Organização Mundial de Saúde
para dar uma indicação sobre a condição de
peso de uma pessoa adulta. A fórmula é:
IMC = peso / altura2

Elabore um algoritmo que, dados o peso e a
altura de um adulto, determine a sua condição
de acordo com a tabela abaixo:
IMC em adultos Condição
IMC < 18,5 Abaixo do peso
18,5 = IMC < 25,0 Peso ideal
25,0 = IMC < 30,0 Sobrepeso
30,0 = IMC < 35,0 Obesidade grau I
35,0 = IMC < 40,0 Obesidade grau II
IMC = 40,0 Obesidade grau III*/

#include <stdio.h>

void main ()
{

//declarção das variaveis
float peso, altura, imc;

//leitura dos dados de entrada
printf ("Digite seu peso: ");
scanf ("%f", &peso);

printf ("Digite sua altura: ");
scanf ("%f", &altura);

//calculo de imc
imc = peso/(altura*altura);

//verificacao dos dados da pessoa
if (imc < 18.5)
{
	printf ("Abaixo do peso");
}
else
{
	if (imc < 25.0)
	{
		printf ("Peso ideal");
	}
	else
	{
		if (imc < 30.0)
		{
			printf ("Sobrepeso");
		}
		else
		{
			if (imc < 35.0)
			{
				printf ("Obesidade grau I");
			}
			else
			{
				if (imc < 40.0)
				{
					printf ("Obesidade grau II");
				}
				else
				{
					printf ("Obesidade grau III");
				}
			}
		}
	}
}

}


