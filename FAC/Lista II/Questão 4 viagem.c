/*Desenvolva um algoritmo que
calcule o consumo de combustível de um
automóvel em determinada viagem. Para isso,
devem ser obtidos: i) o percurso (em
quilômetros) da viagem; ii) o número de
quilômetros que o carro percorre com um litro
de combustível (km/l); e iii) o preço do litro do
combustível.
Ao final, o algoritmo deve determinar:
? A quantidade de combustível, em litros,
consumida durante a viagem;
? O custo total de combustível.*/

#include <stdio.h>

void main ()

{
	//determinando as variaveis
	float km, litro, kmPorLitro, precoLitro, total ;
	
	//leitura dos quilometros
	printf ("Distancia em quilometros da viagem: ");
	scanf ("%f", &km);
	
	//leitura dos litro
	printf ("Quantidade de litro da viagem em km/l: ");
	scanf ("%f", &litro);
	
	//leitura dos preco do litro do combustivel
	printf ("Preco do litro do combustivel: ");
	scanf ("%f", &precoLitro);
	
	//calculo para achar quantidade consumida de combustivel por litro
	kmPorLitro = km/litro;
	
	//calculo do custo total de combustivel
	total = kmPorLitro*precoLitro;
	
	printf ("A quantidade de combustivel em litros durante a viagem:\n%.2f\n", kmPorLitro);
	
	printf ("O custo total de combustivel:\n%.2f\n", total);
	
	
	
	
	
	
	
	
	
	
}
