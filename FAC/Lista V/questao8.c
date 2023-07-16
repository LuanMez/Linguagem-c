/*
	FAETERJ - Rio
	FAC - Turma B
	Data: 05/10/2022
	
	Lista de Exerc�cios V
	
	QUEST�O 08:
	Fazer um programa que auxilie o org�o regulador no c�lculo do total de recursos
	arrecadados com a aplica��o de multas de tr�nsito.
	
	O programa deve ler as seguintes informa��es para cada motorista:
	- O n�mero da carteira de motorista;
	- N�mero de multas;
	- Valor de cada uma das multas.
	
	Deve ser exibido o valor da d�vida de cada motorista e ao final da leitura o 
	total de recursos arrecadados (somat�rio de todas as multas). O programa tamb�m 
	dever� apresentar o n�mero da carteira do motorista que obteve o maior n�mero 
	de multas.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	char opcao;
	int i, cnh, nMultas, maiorMultas = 0, maiorCNH;
	float valor, dividaMotorista, dividaTotal = 0;
	
	do
	{
		dividaMotorista = 0;
		
		//lendo os dados de cada motorista
		printf ("Numero CNH: ");
		scanf ("%d", &cnh);
		
		printf ("Total de multas: ");
		scanf ("%d", &nMultas);
		
		//lendo o valor de cada multa
		for (i=1;i<=nMultas;i++)
		{
			printf ("Valor da multa %d: ", i);
			scanf ("%f", &valor);
			
			//calculando a d�vida do motorista
			dividaMotorista += valor;
		}
		
		//exibindo a d�vida do motorista
		printf ("Divida (cnh %d): R$ %.2f\n", cnh, dividaMotorista);
		
		//acumulando na d�vida total
		dividaTotal += dividaMotorista;
		
		//determinando o motorista com maior n�mero de multas
		if (nMultas > maiorMultas)
		{
			maiorMultas = nMultas;
			maiorCNH = cnh;
		}
		
		//verificando (e validando) se o usu�rio deseja continuar
		do
		{
			printf ("\nDeseja continuar [S/N]? ");
			fflush (stdin);
			scanf ("%c", &opcao);
			opcao = toupper (opcao);
			
			if ((opcao != 'S') && (opcao != 'N'))
			{
				printf ("\tERRO: opcao invalida! Tente novamente.\n");
			}
		}
		while ((opcao != 'S') && (opcao != 'N'));
	}
	while (opcao == 'S');
	
	//exibindo os resultados
	printf ("\n\nValor total arrecadado: R$ %.2f\n", dividaTotal);
	printf ("CNH do motorista com maior numero de multas: %d (%d multas)", maiorCNH, maiorMultas);
}
