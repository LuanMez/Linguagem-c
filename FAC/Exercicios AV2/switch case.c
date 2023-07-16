#include <stdio.h>

void main ()
{
	int c;
	float quantidade, resultado;
	
	printf("Insira o codigo do produto: ");
	scanf("%d", &c);
	
	printf("Insira a quantidade que deseja: ");
	scanf("%f", &quantidade);
	
	switch (c)
	{
		case 101:
			resultado=3.50*quantidade;
			break;
		
		case 102:
			resultado=5.00*quantidade;
			break;
		
		case 103:
			resultado=7.80*quantidade;
			break;
			
		case 104:
			resultado=5.00*quantidade;
			break;
			
		case 105:
			resultado=8.20*quantidade;
			break;
			
		case 106:
			resultado=6.40*quantidade;
			break;	
			
		case 107:
			resultado=4.75*quantidade;
			break;	
			
		case 108:
			resultado=3.60*quantidade;
			break;	
			
		case 109:
			resultado=6.00*quantidade;
			break;	
			
		case 110:
			resultado=4.30*quantidade;
			break;			
	}
	
	printf("Valor:%.2f", resultado);
}
