/*
	FAETERJ-Rio
	FPR - Fundamentos de Programa��o - Manh�
	Professor Leonardo Vianna
	
	Prova a compor a AV1 (Parte I) - 10/05/2023
	
	Quest�o 01 [2,5 pontos]:
	Considerando a exist�ncia de uma matriz de inteiros M, de ordem 
	N (ou seja, o n� de linhas e o n� de colunas s�o iguais a N), 
	onde N � uma constante, desenvolver uma fun��o que retorne 1 se 
	a seguinte regra for atendida por M (caso contr�rio, o valor 0 
	dever� ser retornado):
	
	- A soma dos elementos da diagonal principal deve ser igual � 
	  soma dos elementos que est�o acima desta diagonal, assim como 
	  � soma dos elementos abaixo da diagonal.

	Exemplo 1:

		Para a seguinte matriz, a fun��o retornar� 1: 

					6	3	1	2	6	
					1	3	5	4	2	
					3	4	4	2	2	
					5	9	1	9	3	
					4	0	2	1	8	

	Exemplo 2:

		Para a seguinte matriz, a fun��o retornar� 0: 
	
					1	8	5	9	4	
					2	5	4	6	5	
					4	1	2	3	6	
					4	5	5	8	7	
					4	2	5	6	9	
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define N 5

//prot�tipos das fun��es

int verificar (int matriz[N][N]);

void exibirMatriz (int m[N][N]);

//main
void main ()
{
	//declara��o de vari�veis
	int resp;

	int m1[N][N] = {{6, 3, 1, 2, 6},
	                {1, 3, 5, 4, 2},
	                {3, 4, 4, 2, 2},
	                {5, 9, 1, 9, 3},
	                {4, 0, 2, 1, 8}};

	int m2[N][N] = {{1, 8, 5, 9, 4},
	                {2, 5, 4, 6, 5},
	                {4, 1, 2, 3, 6},
	                {4, 5, 5, 8, 7},
	                {4, 2, 5, 6, 9}};

	//exibindo a matriz m1 antes da chamada � fun��o
	exibirMatriz (m1);
	
	//chamando a fun��o com m1 e atribuindo o retorno � vari�vel 'resp'
	resp=verificar(m1);
	
	//testando o valor retornado
	if (resp == 1)
	{
		printf ("\n\nA matriz m1 atende ao especificado!");
	}
	else
	{
		printf ("\n\nA matriz m1 NAO atende ao especificado!");
	}
	
	//exibindo a matriz m2 antes da chamada � fun��o
	exibirMatriz (m2);
	
	//chamando a fun��o com m2 e atribuindo o retorno � vari�vel 'resp'
	resp=verificar(m2);
	
	//testando o valor retornado
	if (resp == 1)
	{
		printf ("\n\nA matriz m2 atende ao especificado!");
	}
	else
	{
		printf ("\n\nA matriz m2 NAO atende ao especificado!");
	}
}
	
//implementa��o das fun��es


int verificar (int matriz[N][N])
{
	int i, j, meio=0, cima=0, baixo=0;
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			if((i>j))
			{
				baixo+=matriz[i][j];
			}
			else
			{
				if((i<j))
				{
					cima+=matriz[i][j];
				}
				else
				{
					if(i==j)
					{
						meio+=matriz[i][j];
					}
				}
			}
		}
	}
	
	/*printf("cima: %d", cima);
	printf("baixo: %d", baixo);
	printf("meio: %d", meio);*/
	
	if((cima==baixo) && (baixo==meio))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void exibirMatriz (int m[N][N])
{
	//declara��o de vari�veis
	int i, j;
	
	printf ("Elementos da matriz:\n\n");
	
	for (i=0;i<N;i++)
	{
		for (j=0;j<N;j++)
		{
			printf ("%3d ", m[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n\n");
}
