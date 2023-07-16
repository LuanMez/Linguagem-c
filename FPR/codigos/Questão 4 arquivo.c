/*Quest�o 04 [2,5 pontos]:
Implementar uma fun��o que, dado um arquivo texto A
contendo n�meros inteiros, crie um novo arquivo, B,
com os mesmos valores que est�o em A, por�m sem
repeti��o de elementos.
Nota: por ser uma quest�o que avalia a manipula��o
de arquivos, nenhuma outra estrutura (como vetores)
pode ser utilizada.*/
#include<stdio.h>
#include<limits.h>
#include<float.h>

#define TRUE 1
#define FALSE 0
#define MAXIMO 99999
#define MINIMO -99999

int criando(char nomeArq[])
{
	//declara��o de variaveis
	FILE *arquivo, *arquivo2;
	int continuar=TRUE;//op��o verdadeira do continuar
	float maior, numero, ultimo = MINIMO; // maior numero float, menor seria FLT_MIN
	//maior numero inteiro INT_MAX, menor seria INT_MIN
	
	//associar as vari�veis do tipo FILE* aos nomes dos arquivos e abri-los
	arquivo=fopen(nomeArq,"r"); //abrir para leitura
	arquivo2=fopen("teste.txt", "w"); //abrir para escrita
	
	//verificando se houve erro do tipo FILE" aos nomes dos arquivos e abri-los
	if(arquivo == NULL || arquivo2 == NULL)
	{
		return -1;
	}
	else
	{
		while(continuar) //s� continua at� que seja igual a 1
		{
			
			continuar=FALSE;//se n�o achar nenhum fica 0 e sai do programa
			
			//iniciando o 'maior' com um numero muito baixo
			maior=MAXIMO;
			
			//lendo os valores at� o final
			while(fscanf(arquivo,"%f",&numero) != EOF)
			{
				//verificando se o numero lido � menor que o ultimo valor colocado
				//no novo arquivo, se o numero lido � maior at� o momento!
				if((numero>ultimo) && (numero<maior))
				{
					maior=numero;
					
					continuar=TRUE; //como achou um maior ele mantem no programa
				}
			}
			
			if(continuar)
			{
				//escrevendo o 'maior' valor encontrado no novo arquivo
				fprintf(arquivo2,"%.1f\n",maior);
				
				//atualizando o ultimo
				ultimo=maior;
				
				//"rebobinando" o arquivo
				rewind(arquivo);//voltar com o cursor para a primeira posi��o do arquivo
				//melhor do que fazer fclose e fopen denovo
			}
		}
	}
	//fechando os arquivos
	fclose(arquivo);
	fclose(arquivo2);
	
	//retornando 0 que deu certo
	return 0;
}

void main()
{
	//declara��o das varaiveis
	char nomeArq[30];
	int resultado;
	
	//leitura do nome do arquivo
	printf("Digite o nome do arquivo de origem: ");
	fflush(stdin);
	gets(nomeArq);
	
	//invocando a fun��o
	resultado=criando(nomeArq);
	
	//verificando o retorno
	if(resultado==-1)
	{
		printf("Arquivo nao foi aberto");
	}
	else
	{
		printf("Criacao feita com sucesso");
	}
	
}
