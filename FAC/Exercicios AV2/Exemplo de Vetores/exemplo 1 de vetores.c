#include<stdio.h>

void main ()
{
	//declara��o das variaveis
	int v[5];
	float m;
	
	//declara��o de cada valor dos vetores
	v[0] = 50;
	v[1] = 40;
	v[2] = 30;
	v[3] = 20;
	v[4] = 10;
	
	//calculo da media dos vetores
	m = (v[0] + v[1] + v[2] +v[3] + v[4])/5;
	
	//exibi��o da media
	printf ("Resultado :%.2f", m);
}
