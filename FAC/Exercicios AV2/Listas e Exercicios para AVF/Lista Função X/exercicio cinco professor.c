/*
	FAETERJ - Rio
	FAC - Turma A
	Data: 03/11/2022
	
	Lista de Exercícios X (funções):
	
	QUESTÃO 05:
	Fazer uma função que exiba a tabuada de potências de um número n, 
	no intervalo de 1 a 9. Se o número não estiver neste intervalo, o 
	código 0 deve ser retornado; caso contrário, retorna-se 1.
	
	Para ilustrar, abaixo é apresentada como a tabuada de potências de 
	2 deveria ser exibida: 
						2^0 = 1
						2^1 = 2
						2^2 = 4
						2^3 = 8
						2^4 = 16
						2^5 = 32
						2^6 = 64
						2^7 = 128
						2^8 = 256
						2^9 = 512
*/

//importação de bibliotecas
#include <stdio.h>

//declaração dos protótipos das funções
int tabuadaPotencias (int n);

//main
void main ()
{
	//declaração de variáveis
	int valor, retorno;
	
	//lendo os dados de entrada
	printf ("Entre com um numero [de 1 a 9]: ");
	scanf ("%d", &valor);
	
	//chamando a função
	retorno = tabuadaPotencias (valor);
	
	//testando o retorno
	if (retorno == 0)
	{
		printf ("\n\nValor invalido! Deveria estar no intervalo de 1 a 9.");
	}
}

//implementação das funções
int tabuadaPotencias (int n)
{
	//declaração de variáveis
	int i, potencia = 1;
	
	//verificando se o valor de 'n' é inválido
	if ((n < 1) || (n > 9))
	{
		return 0;
	}
	else
	{	
		//variando de 0 a 9
		for (i=0;i<=9;i++)
		{
			printf ("%d ^ %d = %d\n", n, i, potencia);
			
			//atualizando o valor da potencia
			potencia *= n;
		}
		
		return 1;
	}
}
