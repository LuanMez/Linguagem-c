/*
	FAETERJ-Rio
	FAC - 2022/2 - Professor Leonardo Vianna
	Data: 08/10/2022 - Aula extra
	
	Lista de Exerc�cios VI
	
	QUEST�O 05: Elabore um programa que calcule a m�dia ponderada de n elementos.
	
	Observa��o: na m�dia ponderada, cada elemento possui um peso que representa a sua 
	contribui��o no c�lculo da m�dia final.
	
	Exemplo:
		valor1:	10			peso1: 2
		valor2: 5			peso2: 3
		valor3: 15			peso3: 1
		valor4: 8			peso2: 2
		
		media ponderada: (10*2 + 5*3 + 15*1 + 8*2)/(2 + 3 + 1 + 2)	
		media ponderada: (20 + 15 + 15 + 16)/(8)	
		media ponderada: 66/8 = 8,25
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int i, n;
	float valor, peso,
		  numerador = 0, denominador = 0, media;
	
	//lendo a quantidade de valores
	printf ("Entre com a quantidade de valores: ");
	scanf ("%d", &n);
	
	//lendo os valores e seus pesos
	for (i=1;i<=n;i++)
	{
		printf ("Valor: ");
		scanf ("%f", &valor);
		
		printf ("Peso: ");
		scanf ("%f", &peso);
		
		//atualizando/acumulando os valores do numerador e do denominador
		numerador += (valor*peso);
		denominador += peso;
	}
	
	//calculando a m�dia
	media = numerador/denominador;
	
	//exibindo o resultado
	printf ("\nMedia: %.2f", media);
}
