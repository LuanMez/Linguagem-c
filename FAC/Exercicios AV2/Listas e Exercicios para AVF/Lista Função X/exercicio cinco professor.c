/*
	FAETERJ - Rio
	FAC - Turma A
	Data: 03/11/2022
	
	Lista de Exerc�cios X (fun��es):
	
	QUEST�O 05:
	Fazer uma fun��o que exiba a tabuada de pot�ncias de um n�mero n, 
	no intervalo de 1 a 9. Se o n�mero n�o estiver neste intervalo, o 
	c�digo 0 deve ser retornado; caso contr�rio, retorna-se 1.
	
	Para ilustrar, abaixo � apresentada como a tabuada de pot�ncias de 
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

//importa��o de bibliotecas
#include <stdio.h>

//declara��o dos prot�tipos das fun��es
int tabuadaPotencias (int n);

//main
void main ()
{
	//declara��o de vari�veis
	int valor, retorno;
	
	//lendo os dados de entrada
	printf ("Entre com um numero [de 1 a 9]: ");
	scanf ("%d", &valor);
	
	//chamando a fun��o
	retorno = tabuadaPotencias (valor);
	
	//testando o retorno
	if (retorno == 0)
	{
		printf ("\n\nValor invalido! Deveria estar no intervalo de 1 a 9.");
	}
}

//implementa��o das fun��es
int tabuadaPotencias (int n)
{
	//declara��o de vari�veis
	int i, potencia = 1;
	
	//verificando se o valor de 'n' � inv�lido
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
