/*Dados um valor inteiro x e um vetor v contendo quant
números, fazer uma função que retorne 1 se os
elementos menores do que x estiverem nas primeiras
posições do vetor (e, consequentemente, os maiores
ou iguais ao seu final) ou 0, caso contrário.*/

//1,2,3,4,5 se for 6 ta certo retorna 1 menores
//3,4,8,7,5 se for 6 nao é retorna 0 maiores ou igual

#include<stdio.h>
#define QUANT 5

int verificar(int vetor [], int quant, int num)
{
	//declaração das variaveis
	int i, cont=1;
	
	//for de verificação
	for(i=0; i<quant; i++)
	{
		if(vetor[i]<num && cont==0)
		{
			return cont; //retorno para a main
		}
		if(vetor[i]>=num)
		{
			cont=0;
		}
	}
	return 1; //retorno para a main
}

void main ()
{
	//declaração das variaveis
	int v[QUANT]={3,4,8,7,5};
	int x, resultado;
	
	//leitura da variavel
	printf("Insira o valor de x: ");
	scanf("%d", &x);
	
	//chamando a função
	resultado=verificar(v, QUANT, x);
	
	//exibir resultado
	printf("Retorno %d", resultado);
}
