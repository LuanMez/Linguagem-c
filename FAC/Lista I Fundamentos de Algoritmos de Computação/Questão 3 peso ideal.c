#include<stdio.h>

/*Construir um algoritmo que calcule o peso ideal
de uma pessoa, de acordo com o seu gênero e
altura, utilizando as seguintes fórmulas:
? para homens: (72.7*h)-58
? para mulheres: (62.1*h)-44.78*/

void main ()
{

float pesoIdeal, altura;
int genero;

printf ("digite sua altura: ");
scanf ("%f", &altura);

printf ("digite 1 se for homem, 22 se for Mulher: ");
scanf ("%d", &genero);

if (genero == 1)
{
	pesoIdeal = 72.7*altura-58;
	printf ("seu peso ideal:%.2f", pesoIdeal);
}
else
{
	if (genero == 2)
	{
		pesoIdeal = 62.1*altura-44.78;
		printf ("seu peso ideal e:%.2f", pesoIdeal);
	}
}

}



