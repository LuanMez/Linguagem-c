#include <stdio.h>

/*Um banco concederá um crédito especial aos
seus clientes, variável com o saldo médio no
último ano. Faça um algoritmo que calcule o
valor do crédito de acordo com a tabela abaixo.
Saldo Médio                            Percentual
Inferior a R$ 1000,00               nenhum crédito
De R$ 1000,00 a
R$ 1499,99                         20% do saldo médio
De R$ 1500,00 a
R$ 2499,99                         30% do saldo médio
R$ 2500,00 ou mais                 40% do saldo médio*/

void main ()
{
	float saldo, credito, resultado;
	
	printf("Digite o valor do seu saldo: ");
	scanf ("%f", &saldo);
	
	if (saldo < 1000)
	{
		printf ("Nenhum credito");
	}
	else
	{
		if (saldo < 1500)
		{
			credito = saldo*0.2;
	        printf ("seu saldo medio eh:%.2f", credito);
	    }
	    else
	    {
		if (saldo < 2500)
		{
			credito = saldo*0.3;
	        printf ("seu saldo médio eh:%.2f", credito);
            }
	        else
	        {
		    credito = saldo*0.4;
		    printf ("seu saldo médio eh:%.2f", credito);
	}
	}
	}
}
