/*Dados um valor inteiro x e um vetor v contendo quant
n�meros, fazer uma fun��o que retorne 1 se os
elementos menores do que x estiverem nas primeiras
posi��es do vetor (e, consequentemente, os maiores
ou iguais ao seu final) ou 0, caso contr�rio.*/

//1,2,3,4,5 se for 6 ta certo retorna 1 menores
//3,4,8,7,5 se for 6 nao � retorna 0 maiores ou igual

#include<stdio.h>
#define QUANT 5

int verificar(int vetor [], int quant, int num)
{
	//declara��o das variaveis
	int i, cont=1;
	
	//for de verifica��o
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
	//declara��o das variaveis
	int v[QUANT]={3,4,8,7,5};
	int x, resultado;
	
	//leitura da variavel
	printf("Insira o valor de x: ");
	scanf("%d", &x);
	
	//chamando a fun��o
	resultado=verificar(v, QUANT, x);
	
	//exibir resultado
	printf("Retorno %d", resultado);
}
