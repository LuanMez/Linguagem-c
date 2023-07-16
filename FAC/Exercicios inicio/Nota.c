#include<stdio.h>
int main ()
{
	float av1;
	float av2;
	float media = 6;
	
	//valor da av1
	printf ("av1 ");
	scanf ("%f",&av1);
	//valor da av2
	printf ("av2 ");
	scanf ("%f",&av2);
	printf ("av1: %.2f \n",av1);
	printf ("av2: %.2f \n",av2);
	
	printf ("media: %.2f \n\n", media);
	//calculo da media
	media = (av1+av2)/2;
	
	printf ("media: %.2f", media);
	
}   
