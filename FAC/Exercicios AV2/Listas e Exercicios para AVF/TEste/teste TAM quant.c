#include<stdio.h>

void exibir(int vetor [], int *quantidade)
{
	int i;
	
	//Ao usar um vetor de tamanho TAM definido mas utilizar quantidade.
	//A quantidade vem vazia, então o tamanho de quantidade deve ser preenchido de alguma forma dentro da função.
	//pelo teste vai verificar o que digo.
	
	*quantidade=2;
	
	for(i=0; i<*quantidade; i++)
	{
		printf("vetor[%d]=%d", i, vetor[i]);
	}
}

void main ()
{
	int v[6]={1,2,3,4,5,6};
	int quant;
	
	exibir(v, &quant);
}
