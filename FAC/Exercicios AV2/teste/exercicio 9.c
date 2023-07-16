//importação de bibliotecas
#include <stdio.h>

//implementação das funções	
void somaMedia (int numero, int *soma, float *media)
{
	//declaração de variáveis
	int i, s = 0, cont = 0;
	float m;
	
	//variando os "possíveis" divisores de 'numero'
	for (i=1;i<=numero;i++)
	{
		//verificando se 'i' é divisor de 'numero'
		if (numero % i == 0)
		{
			s += i;
			cont++;
		}
	}
		
	//calculando a média
	m = (float)s/cont;
	
	//atribuindo os resultados aos parâmetros de saída
	*media = m;
	*soma = s;
}

//main
void main ()
{
	//declaração de variáveis
	int n, sum;
	float avg;
	
	//lendo o número
	printf ("Entre com um numero inteiro: ");
	scanf ("%d", &n);
	
	//chamando a função
	somaMedia (n, &sum, &avg);
	
	//exibindo os resultados
	printf ("\nSoma = %d\n", sum);
	printf ("Media = %.1f\n", avg);
}
