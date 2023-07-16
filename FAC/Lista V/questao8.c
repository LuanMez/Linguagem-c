/*
	FAETERJ - Rio
	FAC - Turma B
	Data: 05/10/2022
	
	Lista de Exercícios V
	
	QUESTÃO 08:
	Fazer um programa que auxilie o orgão regulador no cálculo do total de recursos
	arrecadados com a aplicação de multas de trânsito.
	
	O programa deve ler as seguintes informações para cada motorista:
	- O número da carteira de motorista;
	- Número de multas;
	- Valor de cada uma das multas.
	
	Deve ser exibido o valor da dívida de cada motorista e ao final da leitura o 
	total de recursos arrecadados (somatório de todas as multas). O programa também 
	deverá apresentar o número da carteira do motorista que obteve o maior número 
	de multas.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
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
			
			//calculando a dívida do motorista
			dividaMotorista += valor;
		}
		
		//exibindo a dívida do motorista
		printf ("Divida (cnh %d): R$ %.2f\n", cnh, dividaMotorista);
		
		//acumulando na dívida total
		dividaTotal += dividaMotorista;
		
		//determinando o motorista com maior número de multas
		if (nMultas > maiorMultas)
		{
			maiorMultas = nMultas;
			maiorCNH = cnh;
		}
		
		//verificando (e validando) se o usuário deseja continuar
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
