#include<stdio.h>

float calculo (int inte);

void main ()
{
	//declara��o de variaveis
	int inteiro;
	float resultado;
	
	//exibindo a mensagem na tela
	printf("Insira um numero inteiro: ");
	scanf("%d", &inteiro);
	
	//invocando a fun��o
	resultado=calculo(inteiro);
	
	printf("Resultado:%.2f", resultado);
}

float calculo (int inte)
{
	//declara��o de variaveis
	int i, j, multi=1, negativo =1, aux;
	float result = 0;
	
	//realizando opera�ao
	for (i=1, j=inte; i<=inte ;i++, j--)
	{
		multi=1;
		
		aux=1;
		
	    while(aux<=i)
        {
   	        multi=multi*i;
   	        
   	        aux++;
        }
        
  		result=result+negativo*(float)multi/j;
  		negativo*=-1;
    }

		return result;

}

