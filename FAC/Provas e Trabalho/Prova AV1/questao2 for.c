/*Quest�o 02 [2,5 pontos]:
Implementar um programa que exiba as N primeiras
pot�ncias de X, onde N e X s�o valores fornecidos pelo
usu�rio.
Exemplo:
N = 6
X = 3
Resultado: 1, 3, 9, 27, 81, 243
Observa��es:
? N�o deve ser utilizada a fun��o pow na solu��o desta
quest�o;
? Devem ser apresentadas tr�s vers�es do programa,
cada uma utilizando uma estrutura de repeti��o
diferente (for, while e do..while).*/

#include<stdio.h>

void main ()
{
	//declaracao das variaveis
	int num, potencia, i, resultado, num1=1;
	
	//leitura das variaveis
	printf("escolha o valor que sera multiplicado: ");
	scanf("%d", &potencia);
	
	printf("um numero das primeiras potencias: ");
	scanf("%d", &num);
	
	//declara��o do for
	for(i=1; i<=num; i++)
	{
		//mostrar o numero
		printf("%d ", num1);
		
		//calculo 
		num1*=potencia;
	}
	
	
}

