 #include<stdio.h>
 
 /*O custo ao consumidor de um carro novo é a
soma do custo de fábrica com a porcentagem
do distribuidor e dos impostos (aplicados ao
custo de fábrica). Desenvolver um algoritmo
que calcule o custo ao consumidor de
determinado carro.*/
 
 void main ()
 {
 	
 	float custoDoCarro, custoDeFabrica, distribuidor, impostos;
 	
 	printf ("Ponha o valor do custo do carro: ");
 	scanf ("%f", &custoDoCarro);
 	
 	printf ("Ponha o valor do distribuidor: ");
 	scanf ("%f", &distribuidor);
 	
 	printf ("Ponha o valor do custo dos impostos: ");
 	scanf ("%f", &impostos);
 	
 	custoDeFabrica + (distribuidor*custoDeFabrica/100 + impostos*custoDeFabrica/100) == custoDoCarro;
 	
 	printf ("Resultado do custo do carro: %f", custoDoCarro);
 }
