/*Construir um programa que permita ao usu�rio
calcular a �rea de uma figura geom�trica. Para
isto, o usu�rio dever� escolher a figura desejada
([C]�rculo, [R]et�ngulo, [Q]uadrado ou
[T]ri�ngulo) e fornecer as informa��es
necess�rias para que a �rea desta figura possa
ser calculada.
Notas:
1. F�rmulas para o c�lculo das �reas:
a. Area c�rculo = pi.raio2

, onde pi = 3.14159;

b. Area ret�ngulo = base.altura;
c. Area quadrado = lado2
;
d. Area tri�ngulo = (base.altura)/2.
2. Caso o usu�rio escolha uma op��o inv�lida,
uma mensagem de erro deve ser exibida e a
execu��o do programa terminada.*/

#include <stdio.h>

void main ()
{
	//declara��o da variavel
	char figura;
	float raio, base, altura, lado, area;
	
	//leitura da figura geometrica
	printf ("figuras geometricas:\nc para Circulo\nr para Retangulo\nq para Quadrado\nt para Triangulo\n");
	scanf("%c", &figura);
		
	switch (figura)
	{
		//calculo do circulo
		case 'c' :
			printf ("valor do raio: ");
		    scanf ("%f", &raio);
			area=(raio*raio)*3.14;
			printf ("area do circulo e: %.2f", area);
			break;
			
		//calculo do retangulo	
		case 'r' :
			printf ("valor do da base: ");
			scanf ("%f", &base);
			printf ("valor da altura: ");
			scanf ("%f", &altura);
			area=base*altura;
			printf ("area do retangulo e: %.2f", area);	
			break;
			
		//calculo do quadrado	
		case 'q' :
			printf ("valor do lado: ");
			scanf ("%f", &lado);
			area=lado*lado;
			printf ("area do quadrado e: %.2f", area);	
			break;
			
		//calculo do triangulo	
		case 't' :
			printf ("valor do da base: ");
			scanf ("%f", &base);
			printf ("valor da altura: ");
			scanf ("%f", &altura);
			area=(base*altura)/2;
			printf ("area do quadrado e: %.2f", area);	
			break;
			
			default: //mostrar a tela de erro
			printf ("Valor invalido, digite novamente c, r, q, t");
				
			

	}

	
}
