//importa��o de bibliotecas
#include <stdio.h>

//implementa��o das fun��es	
int quantidadeValores (int n, int a, int b)
{
	//declara��o de vari�veis
	int i, j, cont = 0, div;
	
	//variando o intervalo
	for (i=a;i<=b;i++)
	{
		//inicializando a quantidade de divisores
		//comuns entre 'i' e 'n'
		div = 0;
		
		//verificando divisores de 'i'
		for (j=2;j<=i;j++)
		{
			//verificando se 'j' � divisor de 'i' e de 'n'
			if ((i % j == 0) && (n % j == 0))
			{
				div++;
			}
		}
		
		//verificando se existem divisores comuns entre 'i' e 'n'
		if (div > 0)
		{
			cont++;
		}
	}
	
	//retornando o resultado
	return cont;
}

//main
void main ()
{
	//declara��o de vari�veis
	int numero, inf, sup, quant;
	
	//lendo o numero
	printf ("Entre com um valor: ");
	scanf ("%d", &numero);
	
	//lendo o intervalo
	printf ("Entre com o intervalo: ");
	scanf ("%d %d", &inf, &sup);
	
	//chamando a fun��o
	quant = quantidadeValores (numero, inf, sup);
	
	//exibindo o resultado
	printf ("\nForam encontrados %d valores.", quant);
}
