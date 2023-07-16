/*QUEST�O 02:
Dados dois n�meros inteiros A e B, fazer uma
fun��o que determine o n�mero de pot�ncias
de 2 existentes no intervalo definido pelos dois
valores, assim como a maior delas.*/

//dizer quantas potencias de 2 tem 
//maior delas

#include<stdio.h>

void calculando(int a, int b, int *numpotencia, int *maiordelas)
{
	int maior, menor, i, j, cont=0, maiortotal;
	
	if(a>b)
	{
		maior=a;
		menor=b;
	}
	else
	{
		maior=b;
		menor=a;
	}
	
	for(i=2; i<=maior; i*=2)
	{
		for(j=menor; j<=maior; j++)
		{
			if(j==i)
			{
				cont++;
				maiortotal=j;
			}
		}
	}
	*numpotencia=cont;
	*maiordelas=maiortotal;
}

void main ()
{
	int a, b, numpotencia, maiordelas;
	
	printf("Digite o dois numeros inteiros: ");
	scanf("%d %d", &a, &b);
	
	calculando(a, b, &numpotencia, &maiordelas);
	
	printf("A quantidade de potencias de 2 existentes no intervalo e' %d e a maior delas e' %d", numpotencia, maiordelas);
}
