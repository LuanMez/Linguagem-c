/*QUEST�O 03:
Fazer uma fun��o leituraDados que permane�a
lendo valores reais at� que o n�mero 0 seja
digitado. Ao final, a fun��o deve determinar a
quantidade de elementos fornecidos (excluindo
o 0) e o maior dentre eles.*/

//quantidade de elementos fornecidos
//maior dentre eles

#include<stdio.h>

void funcaoleitura(int *quant, int *maior)
{
	int num, cont=0, maiordetodos=-999;
	
	do
	{
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if(num!=0)
		{
			cont++;
		}
		if(maiordetodos<num)
		{
			maiordetodos=num;
		}
		
	}
	while(num>=1);
	
	*quant=cont;
	*maior=maiordetodos;
}


void main ()
{
	int quant, maior;
	
	funcaoleitura(&quant, &maior);
	
	printf("Quantidade de valores lidos e' %d e o maior valor digitado e' %d", quant, maior);
}
