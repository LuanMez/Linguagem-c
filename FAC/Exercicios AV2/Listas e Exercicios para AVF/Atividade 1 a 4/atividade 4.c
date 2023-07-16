#include<stdio.h>

float calculo (int num)
{
	int i, j=1, potencia, div;
	float valor=0, parimpar=0;
	
	for(i=1; i<=num; i++)
	{
		potencia=num;
		
		div=0;
		
		while(j<i)
		{
			potencia*=num;
			
			j++;
			
			div++;
			
		}
		
		
		if(i%2==0)
		{
			valor-=((float)potencia)/(num-div);
			
		}
		if(parimpar==0)
		{
			valor+=((float)potencia)/(num-div);
		}
		printf("valor %.2f\n", valor);
		
		div+=1;
	}
	return valor;
}

void main ()
{
	int n;
	float s;
	
	printf("Insira um valor inteiro: ");
	scanf("%d", &n);
	
	s=calculo(n);
	
	printf("O valor final e' %.2f", s);
}
