#include <stdio.h>

//fun��o do calculo
float calculo (int cod, float quant)
{
	//declara��o da variavel
	float resultado;
	
	//calculo de cada codigo pela quantidade
	switch (cod)
	{
		case 101:
			resultado=3.50*quant;
			break;
		
		case 102:
			resultado=5.00*quant;
			break;
		
		case 103:
			resultado=7.80*quant;
			break;
			
		case 104:
			resultado=5.00*quant;
			break;
			
		case 105:
			resultado=8.20*quant;
			break;
			
		case 106:
			resultado=6.40*quant;
			break;	
			
		case 107:
			resultado=4.75*quant;
			break;	
			
		case 108:
			resultado=3.60*quant;
			break;	
			
		case 109:
			resultado=6.00*quant;
			break;	
			
		case 110:
			resultado=4.30*quant;
			break;	
			
		default:
		resultado = -1;	//retornar -1 se o codigo n�o existir		
	}
	return resultado;
}


void main ()
{
	//declara��o das variaveis
	int codigo;
	float quantidade, r;
	
	//leitura das variaveis
	printf("Insira o codigo do produto: ");
	scanf("%d", &codigo);
	
	printf("Insira a quantidade que deseja: ");
	scanf("%f", &quantidade);
	
	//invoca��o da fun��o
	r=calculo(codigo,quantidade);
	
	//exibi��o do valor final
	printf("Valor:%.2f", r);
}
