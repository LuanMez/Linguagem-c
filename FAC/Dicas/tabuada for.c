#include <stdio.h>

/*dado um numero N, exiba a tabela (0-9) dos valores de 1-N

exemplo:

1x0=0
1x1=1
.
.
.
Nx8=(resultado)
Nx9=(resultado)*/

void main ()
{
	//declaracao das variaveis
	int i, j, numero, multiplicacao;
	
	//leitura da variavel
	printf ("escolha um numero: ");
	scanf ("%d", &numero);
	
	for (j=1; j<=numero; j++) //varia de 1 a N
	{
		for (i=0; i<=9; i++) //varia de 0 a 9
		{
		
		//multiplicacao
		multiplicacao=i*j;
		
		//exibir a tabuda
		printf ("\n%d x %d = %d\t", j, i, multiplicacao);
	    }
		
	}
	
}
