//Questão 02 turma b
#include<stdio.h>

int verificar (int numero)
{
	int i ,j, v[j], aux=0, arma;
	
	if(numero>=0)
	{
		for(i=10, j=0; i<numero; i*=10, j++)
		{
			v[j]=numero%10;
			aux++;
			numero/=10;
		}
		for(j=0; j<aux; j++)
		{
			if(v[j]>v[j+1])
			{
				arma=v[j];
			}
			else
			{
				arma=v[j+1];
			}
			
		}
		arma=numero;
	}
	else
	{
		numero=-1;
	}
	return numero;
}

void main ()
{
	
    int num, result;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num);

    //invocando a função
    result=verificar(num);

    if(num>=0)
	{
		printf("O valor 1 e o maior algarismo e' %d", result);
	}
	else
	{
		printf("O valor 0");
	}

}
