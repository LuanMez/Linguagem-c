/*Desenvolva um algoritmo que
calcule o consumo de combust�vel de um
autom�vel em determinada viagem. Para isso,
devem ser obtidos: i) o percurso (em
quil�metros) da viagem; ii) o n�mero de
quil�metros que o carro percorre com um litro
de combust�vel (km/l); e iii) o pre�o do litro do
combust�vel.
Ao final, o algoritmo deve determinar:
? A quantidade de combust�vel, em litros,
consumida durante a viagem;
? O custo total de combust�vel.*/

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
