#include <stdio.h>

/*Faça um programa que leia
300 números reais. Ao final, devem ser
exibidas as seguintes informações:
a) A quantidade de valores negativos
digitados;
b) A média dos valores positivos.*/

//vou fazer com 5 porque 300 é muita coisa
void main ()
{
	int a, b, c, d, e, negativo, media=0, positivo=0;
	float resultado;
	
	printf("digite o primeiro numero real: ");
	scanf ("%d", &a);
	
	printf("digite o segundo numero real: ");
	scanf ("%d", &b);
	
	printf("digite o terceiro numero real: ");
	scanf ("%d", &c);
	
	printf("digite o quarto numero real: ");
	scanf ("%d", &d);
	
	printf("digite o quinto numero real: ");
	scanf ("%d", &e);
	
	if (a<0)
	{
		negativo++;
	}
		if (b<0)
	    {
		    negativo++;
	    }
	    	if (c<0)
	        {
		        negativo++;
	        }
	        	if (d<0)
	            {
		            negativo++;
	            }
	            	if (e<0)
	                {
		                negativo++;
		            
	                }
	
	printf("sao %d valores negativos\n", negativo);
	
	
	if (a>0)
	{
		positivo = positivo + a;
		media=media+1;
	}
		if (b>0)
	    {
		    positivo = positivo + b;
		    media=media+1;
	    }
	    	if (c>0)
	        {
		        positivo = positivo + c;
		        media=media+1;
	        }
	        	if (d>0)
	            {
		            positivo = positivo + d;
		            media=media+1;
	            }
	            	if (e>0)
	                {
		            positivo = positivo + e;
		            media=media+1;
		            
	                }
	
	resultado = ((float)positivo/(float)media);
		            
	printf("sao %.2f a media dos valores positivos", resultado);
	
	
}
