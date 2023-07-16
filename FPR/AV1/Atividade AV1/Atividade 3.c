/*Uma Clínica Veterinária mantém um vetor de
structs, do qual cada posição armazena as
seguintes informações: código do cadastro,
nome do pet, nome do tutor, e-mail de contato,
data da última vacina.
Desenvolver uma função que, dado um vetor
com esta estrutura, gere um arquivo texto com
os dados dos pets com vacina vencida (mais de
um ano da última).
Cada linha do arquivo terá a seguinte sintaxe:

email|mensagem

E a mensagem terá o formato apresentado
abaixo:
Prezado <nome_tutor>, a vacina do pet
<nome_pet> venceu no dia dd/mm/aaaa.
Podemos agendar a nova dose?*/

#include<stdio.h>
#include<string.h>
#include <time.h>

#define TAM 5

//definição de tipos
typedef struct{
	int dia;
	int mes;
	int ano;
}TData;

//definição de tipos
typedef struct{
	int codigo;
	char pet[30];
	char tutor[30];
	char email[60];
	TData data;
}TClinica;

//prototipo da função
void inicializarClinica (TClinica cliente[], int tamanho);
int atrasados(TClinica cliente[], int tamanho, int dia, int mes, int ano, char nomeArq[]);

//main
void main ()
{
	//declaração das variaveis
	TClinica cliente[TAM];
	int res;
	char nomeArq[30];
	
	//obtendo a hora atual do sistema
    time_t t = time(NULL);
    struct tm *current_time = localtime(&t);

    //obtendo o dia, mês e ano
    int dia = current_time->tm_mday;
    int mes = current_time->tm_mon + 1;  // Adiciona 1, pois os meses são representados de 0 a 11
    int ano = current_time->tm_year + 1900;  // Adiciona 1900, pois o ano é representado como o número de anos desde 1900

	//leitura do nome do arquivo
	printf("Digite o nome do arquivo da clinica: ");
	fflush(stdin);
	gets(nomeArq);
	
	//chamando as funções
	inicializarClinica (cliente, TAM);
	res=atrasados(cliente, TAM, dia, mes, ano, nomeArq);
	
	// exibindo o dia, mês e ano atual do sistema
    printf("Data atual: %d/%d/%d\n", dia, mes, ano);
	
	//verificando se o arquivo foi feito com sucesso ou nao
	if(res==-1)
	{
		printf("Erro no arquivo");
	}
	else
	{
		printf("Arquivo com os pets atrasados foi criado com sucesso");
	}
}

void inicializarClinica (TClinica cliente[], int tamanho)
{
	//posicao 0
	cliente[0].codigo=15374;
	cliente[0].data.dia=5;
	cliente[0].data.mes=12;
	cliente[0].data.ano=2021;
	strcpy (cliente[0].tutor, "JORGE");
	strcpy (cliente[0].pet, "REX");
	strcpy (cliente[0].email, "jorge.ama.rex@gmail.com");
	
	//posicao 1
	cliente[1].codigo=37456;
	cliente[1].data.dia=23;
	cliente[1].data.mes=7;
	cliente[1].data.ano=2022;
	strcpy (cliente[1].tutor, "REGINA");
	strcpy (cliente[1].pet, "BOLA");
	strcpy (cliente[1].email, "regina@gmail.com");
	
	//posicao 2
	cliente[2].codigo=98754;
	cliente[2].data.dia=25;
	cliente[2].data.mes=2;
	cliente[2].data.ano=2023;
	strcpy (cliente[2].tutor, "JOAO");
	strcpy (cliente[2].pet, "LULA");
	strcpy (cliente[2].email, "joao.faz.o.L@gmail.com");
	
	//posicao 3
	cliente[3].codigo=12345;
	cliente[3].data.dia=1;
	cliente[3].data.mes=1;
	cliente[3].data.ano=2022;
	strcpy (cliente[3].tutor, "PAULO");
	strcpy (cliente[3].pet, "TOTO");
	strcpy (cliente[3].email, "paulo.ama.toto@gmail.com");
	
	//posicao 4
	cliente[4].codigo=99999;
	cliente[4].data.dia=23;
	cliente[4].data.mes=9;
	cliente[4].data.ano=2021;
	strcpy (cliente[4].tutor, "JOSE");
	strcpy (cliente[4].pet, "WANDA");
	strcpy (cliente[4].email, "jose245654@gmail.com");
}

int atrasados(TClinica cliente[], int tamanho, int dia, int mes, int ano, char nomeArq[])
{
	//declaração das variaveis
	FILE *arquivo;
	int i, anoAtrasado;
	
	//associar as variáveis do tipo FILE aos nomes dos arquivos e abri-los
	arquivo=fopen(nomeArq,"w");
	
	//verificando a abertura do arquivo
	if(arquivo)
	{
		for(i=0; i<tamanho; i++) //percorrendo o vetor de cliente
		{
			anoAtrasado=(cliente[i].data.ano+1); //anoAtrasado recebe o ano de vacinação do cliente mais 1
			
			//se o dia ou mes ou ano for maior que a data de vacinação do cliente mais 1 ano, ela está atrasada
			if((ano>anoAtrasado) || ((ano==anoAtrasado) && (mes>cliente[i].data.mes)) || ((ano==anoAtrasado) && (mes==cliente[i].data.mes) && (dia>cliente[i].data.dia)))
			{
				//escrevendo no arquivo os dados do cliente
				fprintf(arquivo, "%s | Prezado %s, a vacina do pet %s venceu no dia %d/%d/%d. Podemos agendar a nova dose?\n", cliente[i].email, cliente[i].tutor, cliente[i].pet, cliente[i].data.dia, cliente[i].data.mes, anoAtrasado);
			}
		}
	}
	else
	{
		return -1; //caso a abertura de errado
	}
	
	//fechando o arquivoA
	fclose(arquivo);
	
	return 0; //caso a abertura foi feito com sucesso
}
