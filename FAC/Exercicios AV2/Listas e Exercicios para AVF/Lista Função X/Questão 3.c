/*QUESTÃO 03:
Fazer uma função leituraDados que permaneça
lendo valores reais até que o número 0 seja
digitado. Ao final, a função deve determinar a
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
