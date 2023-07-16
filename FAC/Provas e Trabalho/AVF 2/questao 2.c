/*Considerando um vetor vet com quant valores inteiros,
implementar uma fun��o que determine a quantidade
de elementos do vetor que s�o menores do que a
m�dia dos valores (M), quantos s�o iguais � m�dia e
quantos s�o maiores do que M.*/

//tres ponteiros, quantos sao maiores q 10, igual e menor;
#include<stdio.h>
#define QUANT 6

void calculo (int vetor [], int quantidade, int *maior, int *igual, int *menor)
{
	//declara��o das variaveis
	int i, ma=0, me=0, ig=0;
	float media=0;
	
	//somando os valores totais
	for(i=0; i<quantidade; i++)
	{
		media+=vetor[i];
	}
	
	//calculo da media
	media/=quantidade;
	
	//achando os valores no vetor que s�o maiores, menores e iguais a media
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
	//declara��o das variaveis
	int v[QUANT]={9,1,2,3,5,4};
	int mai, igua, men;
	
	//chamando a fun��o
	calculo (v, QUANT, &mai, &igua, &men);
	
	//exibir o resultado
	printf("Numero maior q a media %d, igual %d, menor %d", mai, igua, men);
}
