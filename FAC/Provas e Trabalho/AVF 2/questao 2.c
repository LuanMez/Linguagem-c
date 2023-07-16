/*Considerando um vetor vet com quant valores inteiros,
implementar uma função que determine a quantidade
de elementos do vetor que são menores do que a
média dos valores (M), quantos são iguais à média e
quantos são maiores do que M.*/

//tres ponteiros, quantos sao maiores q 10, igual e menor;
#include<stdio.h>
#define QUANT 6

void calculo (int vetor [], int quantidade, int *maior, int *igual, int *menor)
{
	//declaração das variaveis
	int i, ma=0, me=0, ig=0;
	float media=0;
	
	//somando os valores totais
	for(i=0; i<quantidade; i++)
	{
		media+=vetor[i];
	}
	
	//calculo da media
	media/=quantidade;
	
	//achando os valores no vetor que são maiores, menores e iguais a media
	for(i=0; i<quantidade; i++)
	{
		if(vetor[i]>media)
		{
			ma++;
		}
		if(vetor[i]==media)
		{
			ig++;
		}
		if(vetor[i]<media)
		{
			me++;
		}
	}
	//atribuindo o valor
	*maior=ma;
	*igual=ig;
	*menor=me;
}

void main ()
{
	//declaração das variaveis
	int v[QUANT]={9,1,2,3,5,4};
	int mai, igua, men;
	
	//chamando a função
	calculo (v, QUANT, &mai, &igua, &men);
	
	//exibir o resultado
	printf("Numero maior q a media %d, igual %d, menor %d", mai, igua, men);
}
