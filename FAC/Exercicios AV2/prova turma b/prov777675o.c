//Questão 02 turma b
#include<stdio.h>

int verificar ( int *numero, int*menore, int *verificacao)
{
	int i ,j, v[j], aux=0, arma=0, armame=0;
	
	if(*numero>=0)
	{
		for(i=1, j=0; i<*numero; i*=10, j++)
		{
			v[j]=*numero%10;
			aux++;
		}
		for(j=0; j<aux; j++)
		{
			if(v[j]>v[j+1])
			{
				arma=v[j];
				armame=v[j+1];
			}
			else
			{
				arma=v[j+1];
				armame=v[j];
		    }
			
		}
		*numero=arma;
		*menore=armame;
	}
	else
	{
		*verificacao-=1;
	}
	
}

void main ()
{
	
    int num, veri=0, menor=0, result;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num);

    //invocando a função
    result=verificar(&num, &menor, &veri);

    if(veri<0)
    {
	    printf("O valor 0");
    }
    else
    {
    	printf("O valor 1 e o maior algarismo %d e o menor %d", num, menor);
    }

}
