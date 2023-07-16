/*Quest�o 01:
Desenvolver uma fun��o que, dado um arquivo
texto, verifique o n�mero de caracteres no
mesmo.*/

//fopen abre um arquivo
//fclose fecha o arquivo com seguran�a

//fprintf � para escrever no arquivo
//fscanf � para ler oq tem no arquivo
//if(arquivo != NULL) se meu arquivo ele aponta pro ponteiro e for difernete de nulo.

#include<stdio.h>
void main ()
{
	//declara��o das variaveis
	FILE *arquivo; //variavel do tipo file com ponteiro do tipo arquivo
	int soma=0, numero;
	
	arquivo = fopen("numeros.txt", "r"); //abrindo a variavel arquivo  para leitura
	//r seguinifica read que � ler
	//w seguinifica write que � escrever
	//a seguinifica append que � acrescentar ou alterar
	
	//if(arquivo!=NULL)
	if(arquivo)
	{
		while(fscanf(arquivo, "%d", &numero) != EOF)
		{
			soma++;
		}
	}
	else
	{
		printf("arquivo com erro");
	}
	fclose(arquivo);
	
	printf("Total de caracteres no arquivo eh: %d", soma);
}
