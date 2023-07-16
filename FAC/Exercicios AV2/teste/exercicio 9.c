//importa��o de bibliotecas
#include <stdio.h>

//implementa��o das fun��es	
void somaMedia (int numero, int *soma, float *media)
{
	//declara��o de vari�veis
	int i, s = 0, cont = 0;
	float m;
	
	//variando os "poss�veis" divisores de 'numero'
	for (i=1;i<=numero;i++)
	{
		//verificando se 'i' � divisor de 'numero'
		if (numero % i == 0)
		{
			s += i;
			cont++;
		}
	}
		
	//calculando a m�dia
	m = (float)s/cont;
	
	//atribuindo os resultados aos par�metros de sa�da
	*media = m;
	*soma = s;
}

//main
void main ()
{
	//declara��o de vari�veis
	int n, sum;
	float avg;
	
	//lendo o n�mero
	printf ("Entre com um numero inteiro: ");
	scanf ("%d", &n);
	
	//chamando a fun��o
	somaMedia (n, &sum, &avg);
	
	//exibindo os resultados
	printf ("\nSoma = %d\n", sum);
	printf ("Media = %.1f\n", avg);
}
