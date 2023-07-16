/*Dada uma matriz MLINHAxCOLUNA, onde LINHA e
COLUNA s�o constantes, e uma coluna C,
desenvolver uma fun��o que desloque todos os
elementos da coluna C para a �ltima coluna da
matriz.
Consequentemente, as colunas C+1 � �ltima
dever�o ser�o deslocadas uma posi��o para a
esquerda, conforme ilustrado no exemplo
abaixo:
Exemplo:

1 5 7 1 4 6
6 2 1 4 7 7
M = 3 6 9 7 0 1
2 4 5 7 2 4
2 4 8 9 1 2
C = 1 (ou seja, a 2a coluna)

1 7 1 4 6 5
6 1 4 7 7 2
M = 3 9 7 0 1 6
2 5 7 2 4 4
2 8 9 1 2 4
Nota: se o valor de C for v�lido, a fun��o
far� o que foi solicitado e retornar� 1, ao
final; caso contr�rio, apenas retornar� 0.*/

#include<stdio.h>
#define L 5
#define C 6

//prototipo das fun��es
void preencher (int matriz[L][C]);
void exibirAntes(int matriz[L][C]);
int troca( int matriz[L][C], int coluna);
void exibirDepois(int matriz[L][C]);

//main
void main ()
{
	//declara��o das variaveis
	int matriz[L][C];
	int coluna, res;
	
	//implementa��o da fun��o de preencher e exibir a matriz antes da troca
	preencher(matriz);
	exibirAntes(matriz);
	
	//leitura da variavel coluna
	printf("Digite a coluna que queira ir pro final: ");
	scanf("%d", &coluna);
	
	//implementa��o da fun��o de troca e exibindo como a matriz ficou ap�s a troca
	res=troca(matriz, coluna);
	exibirDepois(matriz);
	
	//se o resultado for 1 a troca foi feita
	if(res==1)
	{
		printf("A troca foi feita com sucesso");
	}
	else // se o resultado for 0 a troca nao foi feita
	{
		printf("A troca NAO foi feita");
	}
}

void preencher (int matriz[L][C])
{
	//declara��o das variaveis
	int i, j, num=0;
	
	srand (time(NULL));
	
	//percorrendo linha da matriz
	for(i=0; i<L; i++)
	{
		//percorrendo coluna da matriz
		for(j=0; j<C; j++)
		{
			matriz[i][j]=rand()%10; //elemento da matriz recebendo numero aleatorio.
		}
	}
}

void exibirAntes(int matriz[L][C])
{
	//declara��o das variaveis
	int i, j;
	
	//percorrendo linha da matriz
	for(i=0; i<L ;i++)
	{
		//percorrendo coluna da matriz
		for(j=0; j<C; j++)
		{
			printf("%d ", matriz[i][j]); //exibindo elemento da matriz
		}
		printf("\n"); //pulando linha
	}
}

int troca( int matriz[L][C], int coluna)
{
	//declara��o das variaveis
	int i, j=coluna, aux;
	
	if(coluna<0 || C-1<=coluna) //se a coluna for menos q 0 ou for maior que C-1 a troca n�o ir� acontecer
	{
		return 0; //retornar 0 pois n�o aconteceu
	}
	else
	{
		//percorrendo coluna da matriz
		for(j; j<C-1; j++)
		{
			//percorrendo linha da matriz
			for(i=0; i<L; i++)
			{
				//fazendo a troca da coluna com a proxima coluna
				aux=matriz[i][j];
				matriz[i][j]=matriz[i][j+1];
				matriz[i][j+1]=aux;	
			}
		}
	}
	return 1; //se chegou at� aqui foi feita a troca, retornando 1
}

void exibirDepois(int matriz[L][C])
{
	//declara��o das variaveis
	int i, j;
	
	//percorrendo linha da matriz
	for(i=0; i<L ;i++)
	{
		//percorrendo coluna da matriz
		for(j=0; j<C; j++)
		{
			printf("%d ", matriz[i][j]); //exibindo elemento da matriz
		}
		printf("\n"); //pulando linha
	}
}
