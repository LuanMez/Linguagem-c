#include <stdio.h>

/*Um banco conceder� um cr�dito especial aos
seus clientes, vari�vel com o saldo m�dio no
�ltimo ano. Fa�a um algoritmo que calcule o
valor do cr�dito de acordo com a tabela abaixo.
Saldo M�dio                            Percentual
Inferior a R$ 1000,00               nenhum cr�dito
De R$ 1000,00 a
R$ 1499,99                         20% do saldo m�dio
De R$ 1500,00 a
R$ 2499,99                         30% do saldo m�dio
R$ 2500,00 ou mais                 40% do saldo m�dio*/

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
	        printf ("seu saldo m�dio eh:%.2f", credito);
            }
	        else
	        {
		    credito = saldo*0.4;
		    printf ("seu saldo m�dio eh:%.2f", credito);
	}
	}
	}
}
