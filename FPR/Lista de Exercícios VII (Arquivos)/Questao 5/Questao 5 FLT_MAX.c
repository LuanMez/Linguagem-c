/*
	FAETERJ-Rio
	FPR Manhã - 20/04/2022
	
	Lista de Exercícios VII (Arquivos)
	
	Questão 05:
	Faça uma função que, dado um arquivo A contendo números reais, 
	um por linha, crie um novo arquivo B contendo os mesmos elementos 
	de A, porém ordenados decrescentemente e sem repetição.
*/
#include<stdio.h>
#include<limits.h>
#include<float.h>

int criando(char nomeArq[])
{
	//declaração de variaveis
	FILE *arquivo, *arquivo2;
	int continuar=1;//opção verdadeira do continuar
	float maior, numero, ultimo = FLT_MAX; // maior numero float, menor seria FLT_MIN
	//maior numero inteiro INT_MAX, menor seria INT_MIN
	
	//associar as variáveis do tipo FILE* aos nomes dos arquivos e abri-los
	arquivo=fopen(nomeArq,"r"); //abrir para leitura
	arquivo2=fopen("teste.txt", "w"); //abrir para escrita
	
	//verificando se houve erro do tipo FILE" aos nomes dos arquivos e abri-los
	if(arquivo == NULL || arquivo2 == NULL)
	{
		return -1;
	}
	else
	{
		while(continuar == 1) //só continua até que seja igual a 1
		{
			
			continuar=0;//se não achar nenhum fica 0 e sai do programa
			
			//iniciando o 'maior' com um numero muito baixo
			maior=FLT_MIN;
			
			//lendo os valores até o final
			while(fscanf(arquivo,"%f",&numero) != EOF)
			{
				//verificando se o numero lido é menor que o ultimo valor colocado
				//no novo arquivo, se o numero lido é maior até o momento!
				if((numero<ultimo) && (numero>maior))
				{
					maior=numero;
					
					continuar=1; //como achou um maior ele mantem no programa
				}
			}
			
			if(continuar==1)
			{
				//escrevendo o 'maior' valor encontrado no novo arquivo
				fprintf(arquivo2,"%.1f\n",maior);
				
				//atualizando o ultimo
				ultimo=maior;
				
				//"rebobinando" o arquivo
				rewind(arquivo);//voltar com o cursor para a primeira posição do arquivo
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
	//declaração das varaiveis
	char nomeArq[30];
	int resultado;
	
	//leitura do nome do arquivo
	printf("Digite o nome do arquivo de origem: ");
	fflush(stdin);
	gets(nomeArq);
	
	//invocando a função
	resultado=criando(nomeArq);
	
	//verificando o retorno
	if(resultado==-1)
	{
		printf("Arquivo nao foi aberto");
	}
	else
	{
		printf("Criação feita com sucesso");
	}
	
}
