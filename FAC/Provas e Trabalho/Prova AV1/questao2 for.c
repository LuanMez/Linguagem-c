/*Questão 02 [2,5 pontos]:
Implementar um programa que exiba as N primeiras
potências de X, onde N e X são valores fornecidos pelo
usuário.
Exemplo:
N = 6
X = 3
Resultado: 1, 3, 9, 27, 81, 243
Observações:
? Não deve ser utilizada a função pow na solução desta
questão;
? Devem ser apresentadas três versões do programa,
cada uma utilizando uma estrutura de repetição
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
	
	//declaração do for
	for(i=1; i<=num; i++)
	{
		//mostrar o numero
		printf("%d ", num1);
		
		//calculo 
		num1*=potencia;
	}
	
	
}

